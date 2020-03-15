#include <iostream>
using namespace::std;

int cost(char c1, char c2)
{
	if(c1 == c2) return 0;
	else if((c1 == c2 + 'A' - 'a') || (c2 == c1 + 'A' - 'a')) return 5; //just case
	else if((c1 >= 'a') && (c2 <= 'Z')) return 10;
	else if((c1 <= 'Z') && (c2 >= 'a')) return 10;
	else return 5;
}

int main()
{
	string s;
	string t = "Sandro";
	cin >> s;
	int i, j;
	int sol = 1000;
	for(i = 0; i < s.length() - t.length() + 1; i ++) {
		int tmp = 0;
		for(j = 0; j < t.length(); j ++) {
			tmp += cost(s[i + j], t[j]);	
		}
		if(tmp < sol) sol = tmp;
	} 
	cout<<sol<<endl;
}
