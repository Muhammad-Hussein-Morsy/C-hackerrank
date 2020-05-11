#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
//Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	long n,data,start,stop,elem;
	cin >>n;
	vector <long> a;
	for(unsigned long i=0;i<n;i++)
	{
		cin>>data;
		//printf("%d \n",a.size());
		a.push_back(data);
		//std::cout << a.at(i) << ' ';
	}

	cin>>elem;
	cin >>start>>stop;

		//a.erase(a.begin()+start-1,a.begin()+stop-1);


		a.erase(a.begin()+elem-1);
		a.erase(a.begin()+start-1,a.begin()+stop-1);




	printf("%d\n",a.size());
	for(unsigned long k=0;k<a.size();k++)
	{
		printf("%d ",a.at(k));
	}
    return 0;
}
