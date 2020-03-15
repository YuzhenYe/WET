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

int main()
{
	int n, m;
	cin >> n >> m;
	int k;
	cin >> k;
	xy grid[101];	
	int i;
	for(i = 0; i < k; i ++) {
		cin >> grid[i].x >> grid[i].y;
	} 
	sort(grid, grid + k, comp);
	int used = 0;
	int maxdig = n < m? n:m; //smaller one
	xy last;
	last.x = last.y = 0;
	//cout<<"maxdig "<<maxdig<<endl;
	for(i = 0; i < k; i ++) {
		//cout<<" grid "<<i<<" "<<grid[i].x<<" "<<grid[i].y<<" last "<<last.x<<" "<<last.y<<endl;
		if(used < maxdig) {
			if((grid[i].x >= last.x + 1) && (grid[i].y >= last.y + 1)) {
				used += 1;
				last = grid[i];
			}
		}
	}
	//cout<<"used "<<used<<endl;
	double dis = used * sqrt(2) * 100 + (n + m - 2 * used) * 100;
	cout<<round(dis)<<endl;
}
