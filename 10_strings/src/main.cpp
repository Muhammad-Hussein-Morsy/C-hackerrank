#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	string a,b,c;
	cin>>a>>b;
	char temp;
	printf("%d %d \n",a.size(),b.size());
	c=a+b;
	cout<<c<<endl;
	temp=a[0];
	a[0]=b[0];
	b[0]=temp;
	cout<<a<<" "<<b<<endl;
    return 0;
}
