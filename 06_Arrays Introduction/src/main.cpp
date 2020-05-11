#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	unsigned int n;
	int array[1000];
	cin>>n;
	for(unsigned int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(int k=n-1;k>=0;k--)
	{
		printf("%d ",array[k]);
	}


    return 0;
}
