/*
ID: yuzheny2
TASK: transform
LANG: C++
*/
#include <iostream>
#include <fstream>
using namespace::std;

void display(int size, string *pattern)
{
	for(int i = 0; i < size; i ++) cout<<pattern[i]<<endl;
}

bool match(int size, string *oldp, string *newp)
{
	for(int r = 0; r < size; r ++) {
		if(oldp[r] != newp[r]) return false;
	}
	return true;
}

//#1: 90 Degree Rotation: The pattern was rotated clockwise 90 degrees.
//first col becomes first row, second col -> second row, etc
string* rot90fun(int size, string *oldp)
{
	string *rot90 = new string[size];
	for(int r = 0; r < size; r ++) rot90[r] = oldp[r];
	for(int c = 0; c < size; c ++) {
		for(int r = 0; r < size; r ++) {
			//c col -> c row
			rot90[c][size-r-1] = oldp[r][c];
		}
	}
	return rot90;
}
//#2: 180 Degree Rotation: The pattern was rotated clockwise 180 degrees.
//last row -> first row, last col -> first col, and so on
string *rot180fun(int size, string *oldp)
{
	string *rot180 = new string[size];
	for(int r = 0; r < size; r ++) rot180[r] = oldp[r];
	for(int r = 0; r < size; r ++) {
		for(int c = 0; c < size; c ++) {
			rot180[size-r-1][size-c-1] = oldp[r][c];
		}
	}
	return rot180;
}
//#3: 270 Degree Rotation: The pattern was rotated clockwise 270 degrees.
//first 90, then 180; or first 180 then 90
string *rot270fun(int size, string *oldp)
{
	string *rot90 = rot90fun(size, oldp);
	string *rot180 = rot180fun(size, rot90);
	return rot180;
}

//#4: Reflection: The pattern was reflected horizontally 
//(turned into a mirror image of itself by reflecting around a vertical line in the middle of the image).
//row doesn't change, last col becomes first col, etc
string *reflection(int size, string *oldp)
{
	string *refl = new string[size];
	for(int r = 0; r < size; r ++) refl[r] = oldp[r];
	for(int r = 0; r < size; r ++) {
		for(int c = 0; c < size; c ++) {
			refl[r][size-c-1] = oldp[r][c];
		}
	} 
	//cout<<"old pattern"<<endl;
	//display(size, oldp);
	//cout<<"after reflection"<<endl;
	//display(size, refl);
	return refl;
}

int main()
{
	int size;
	ifstream fin("transform.in");
	ofstream fout("transform.out");
	fin >> size;
	int i;
	string *oldp = new string[size];
	string *newp = new string[size];
	for(i = 0; i < size; i ++) {
		fin >> oldp[i];
	}
	for(i = 0; i < size; i ++) {
		fin >> newp[i];
	}
	fin.close();
	int method = 0;
	if(match(size, rot90fun(size, oldp), newp)) {
		method = 1;
	}
	else if(match(size, rot180fun(size, oldp), newp)) {
		method = 2;
	}
	else if(match(size, rot270fun(size, oldp), newp)) {
		method = 3;
	}
	else if(match(size, reflection(size, oldp), newp)) {
		method = 4;
	}
	else {
		string *flet = reflection(size, oldp);
		if(match(size, rot90fun(size, flet), newp)) method = 5;
		else if(match(size, rot180fun(size, flet), newp)) method = 5;
		else if(match(size, rot270fun(size, flet), newp)) method = 5;
		else if(match(size, newp, oldp)) method = 6;
		else method = 7;
	}
	cout<<method<<endl;
	fout<<method<<endl;
	fout.close();
}
