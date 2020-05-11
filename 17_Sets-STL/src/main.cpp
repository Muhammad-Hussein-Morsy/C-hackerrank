#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

//Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
//Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)

int main()
{
	int q,element,key;
	cin >>q;
	set<int>::iterator itr;
	set<int> set;
	for(int i=0;i<q;i++)
	{
		cin>>key;
		cin>>element;
		if(key==1)
		{
			set.insert(element);
		}
		else if (key==2)
		{
			itr=set.find(element);
			if(itr !=set.end())
				set.erase(element);
		}
		else if(key==3)
		{
			itr=set.find(element);
			if(itr !=set.end())
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
    return 0;
}
