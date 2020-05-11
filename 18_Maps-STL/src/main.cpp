#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	std:: map <string, int> map1;
	unsigned int q,type,val=0;
	string key;
	map<string,int>::iterator itr;
	cin>>q;
	for(unsigned int i=0;i<q;i++)
	{
		cin>>type>>key;
		switch(type)
		{
		case 1:
			cin>>val;
			map1[key]+=val;
			break;
		case 2:
			map1.erase(key);
			break;
		case 3:
			cout<<map1[key]<<endl;
			break;
		}
	}
    return 0;
}



