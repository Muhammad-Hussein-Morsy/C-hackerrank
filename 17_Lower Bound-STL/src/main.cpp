#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main () {
	/*
  int myints[] = {10,20,30,30,20,10,10,20};
  std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

  std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

  std::vector<int>::iterator low,up;
  low=std::lower_bound (v.begin(), v.end(), 20); //          ^
  up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

  std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  std::cout << "upper_bound at position " << (up - v.begin()) << '\n';
	 */
	unsigned int n,q;
	std::vector <int> vec_d;
	std::vector<int>::iterator low,it;
	int element;
	cin>>n;
	for(unsigned int i=0;i<n;i++)
	{
		cin>>element;
		vec_d.push_back(element);

	}
	cin>>q;
	for(unsigned int k=0;k<q;k++)
	{
		cin>>element;
		low=std::lower_bound (vec_d.begin(), vec_d.end(), element);
		if(vec_d[low-vec_d.begin()]==element)
			std::cout << "Yes " << (low- vec_d.begin()+1) << '\n';
		else
			std::cout << "No " << (low- vec_d.begin()+1) << '\n';
	}

	return 0;
}
