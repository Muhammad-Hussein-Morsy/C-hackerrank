#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	/*int, long, char, float, and double*/
		int i;
		long l;
		char c;
		float f;
		double d;
		scanf("%d %ld %c %f %lf",&i,&l,&c,&f,&d);

		printf("%d\n",i);
		printf("%ld\n",l);
		printf("%c\n",c);
		printf("%.3f\n",f);
		printf("%.9lf",d);
		return 0;
}
