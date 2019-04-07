#include <iostream>
using namespace::std;

int main()
{
	int h, w, n;
	cin >> h >> w >> n;
	string word;
	string currline = "";
	int space = 1;
	int linenum = 1;
	cin >> currline;
	for(int i = 1; i < n; i ++) {
		cin >> word;
		if(currline.length() + word.length() + space <= w) {
			currline += " " + word;
		}
		else {
			currline = word;
			linenum += 1;
		}
	} 
	int page;
	//cout<<"linenum "<<linenum<<endl;
	if(linenum % h == 0) page = linenum / h;
	else page = linenum / h + 1;
	if(n == 0) page = 0;
	cout<<page<<endl;
}
