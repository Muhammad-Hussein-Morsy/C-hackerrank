#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

#include<bits/stdc++.h>

using namespace std;

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Box
{
private:
     unsigned int l,b,h;
public:
     Box();
     Box(int length, int breadth, int height);
     Box(const Box & b1);
     int getLength();
     int getBreadth();
     int getHeight();
     long long CalculateVolume();
     friend  ostream  &operator << ( ostream& out,const Box& B)
     {
         cout<<B.l<<" "<<B.b<<" "<<B.h;
         return out;
     }
    friend bool operator<( Box& A, Box& B)
     {
         if((A.l<B.l)||
        		 ((A.b<B.b) && (A.l==B.l))||
				 ((A.h<B.h) &&(A.b==B.b) &&(A.l==B.l)) )
             return true;
         else
             return false;
     }
};

Box::Box()
{
         l=0; b=0; h=0;
}
Box::Box(int length, int breadth, int height)
{
     l=length; b=breadth;    h=height;
}
Box::Box(const Box & b1)
{
     l=b1.l; b=b1.b;    h=b1.h;
}
int Box::getLength()
{
    return l;
}
int Box::getBreadth()
{
    return b;
}
int Box::getHeight()
{
    return h;
}
long long Box::CalculateVolume()
{
    return((long long)(l*h*b));
}




void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}

