#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
/*	n is number of vectors
	q is number of quires */
	int n,q;
	cin >> n >> q;
/*	a is a vector of int vectors and its n vector of int vectors
	so if n=2 its a vector of 2 vectors*/
	vector< vector<int> > a(n);
	/*loop through n vectors */
	for (int i=0;i<n;i++)
	{
	    int k;
	    cin >> k;
	   /* fill each vector with k size*/
	    for (int j=0;j<k;j++)
	    {
	        int data;
	        cin >> data;
	        a[i].push_back(data);
	    }
	}
	/*do quires */
	for(int k=0;k<q;k++)
	{
		int x=0,y=0;
		cin>>x>>y;
		cout<<a[x][y]<<endl;
	}
    return 0;
}
