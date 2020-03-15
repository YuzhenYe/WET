#include <iostream>
#include <cmath>
#include <algorithm>

using namespace::std;

typedef struct
{
	int x, y;
} xy;

bool comp(xy p1, xy p2)
{
	return (p1.x + p1.y < p2.x + p2.y);
}

bool valid(xy p1, xy p2) {
	if((p2.x >= p1.x + 1) && (p2.y >= p1.y + 1)) return true;
	else return false;
}

int main()
{
	int n, m;
	cin >> n >> m;
	int k;
	cin >> k;
	xy grid[101];	
	int i, j;
	for(i = 0; i < k; i ++) {
		cin >> grid[i].x >> grid[i].y;
	} 
	sort(grid, grid + k, comp);
	int used = 0;
	int maxdig = n < m? n:m; //smaller one
	int longest[101];
	//cout<<"maxdig "<<maxdig<<endl;
	for(i = 0; i < k; i ++) longest[i] = 0;
	for(i = 0; i < k; i ++) {
		longest[i] = 1; //starting at i
		//cout<<"check "<<i<<endl;
		for(j = 0; j < i; j ++) {
			//cout<<"   check with "<<grid[j].x<<" "<<grid[j].y<<" "<<longest[j]<<" valid "<<valid(grid[j], grid[i])<<endl;
			if(valid(grid[j], grid[i])) { //from j to i
				if(longest[j] + 1 > longest[i]) {
					longest[i] = longest[j] + 1;
				}
			}	
		}
		//cout<<"done.. longest "<<grid[i].x<<" "<<grid[i].y<<" "<<longest[i]<<endl;
		if(longest[i] >= maxdig) {
			break;
		}
	}
	if(i < k) used = maxdig;
	else used = longest[k - 1];
	//cout<<"used "<<used<<endl;
	double dis = used * sqrt(2) * 100 + (n + m - 2 * used) * 100;
	cout<<round(dis)<<endl;
}
