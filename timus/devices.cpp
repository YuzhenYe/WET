#include <iostream>
#include <string>
#include <algorithm>
using namespace::std;

typedef struct
{
	string name;
	int count;
	int price;
} device;

bool cmp(device d1, device d2) 
{
	if(d1.count == d2.count) return d1.price < d2.price;
	else return d1.count > d2.count;
}

int main()
{
	string name, app, pricetmp;
	int tot = 0;
	device d[1000];
	int i, price;
	while(cin >> name >> app >> pricetmp) {
		price = stoi(pricetmp);
		for(i = 0; i < tot; i ++) {
			if(app == d[i].name) break;
		}
		if(i == tot) {
			d[tot].name = app;
			d[tot].count = 1;
			d[tot].price = price;
			tot ++;
		} 
		else {
			if(price < d[i].price) {
				d[i].price = price;
			}
			d[i].count ++;
		}
	}
	sort(d, d + tot, cmp);
/*
	for(i = 0; i < tot; i ++) {	
		cout<<d[i].name<<" "<<d[i].count<<" "<<d[i].price<<endl;
	}
*/
	cout<<d[0].name<<endl;
}
