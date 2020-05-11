#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template <class T>
class AddElements
{
	T element1;
	T element2;
public:
	AddElements(T e1)
{
		element1=e1;
}
	T add(T e2)
	{
		T sum;
		sum= element1+e2;
		return sum;
	}
};
template <>
class AddElements <string>
{
public:
	string st1;
	string st2;
	AddElements(string s1)
{
		st1=s1;
}
	string concatenate(string s2)
	{
		string output;
		output=st1+s2;
		return output;
	}
};
int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
