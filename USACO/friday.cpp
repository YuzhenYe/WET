/*
ID: yuzheny2
LANG: C++
TASK: friday
*/
#include <iostream>
#include <fstream>

using namespace::std;

bool isleap(int year)
{
	if(year % 100 == 0) {
		if(year % 400 == 0) return true;
		else return false;
	}
	else {
		if(year % 4 == 0) return true;
		else return false;	
	}
}

int main()
{
	ifstream fin("friday.in");
	ofstream fout("friday.out");

	int add;
	fin >> add;

	int start = 1;
	int year = 1900; 
	int month = 1;
	int date = 1;
	int day = 1;
	int freq[7] = {0, 0, 0, 0, 0, 0, 0};
	bool leapyear = isleap(year);
	while(year < 1900 + add) { 
		//cout<<"day "<<day<<" year "<<year<<" month "<<month<<" date "<<date<<" week of the day "<<day%7<<endl;
		if(date == 13) freq[day%7] += 1;
		if( ((month == 9) || (month == 4) || (month == 6) || (month == 11)) && date == 30) {
			month += 1;
			date = 0;
		}
		else if(month == 2) {
			if((leapyear && (date == 29)) || (!leapyear && (date == 28))) {
				month += 1;
				date = 0;
			}
		}
		else if(date == 31) {
			month += 1;
			date = 0;
		}
		if(month == 13) {
			year += 1;
			leapyear = isleap(year);
			month = 1;
		} 
		day += 1;
		date += 1;
	}
	int tot = 0;
	for(int i = 0; i < 7; i ++) {
		tot += freq[i];
	}
	if(tot != add * 12) {
		cout<<tot<<" expected "<<add*12<<endl;
	}
	fout<<freq[6]<<" "<<freq[0];
	for(int i = 1; i < 6; i ++) {
		fout<<" "<<freq[i];
	}
	fout<<endl;
}
