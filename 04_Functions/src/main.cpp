#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int  b, int c, int d)
{
	static int max1,max2,max=0;
/*	max1= a>b ? a:b;
	max2=c>d ? c:d;
	max=max1>max2 ? max1:max2;*/
if(a>b && a>c && a>d)
	max=a;
if(b>a && b>c && b>d)
	max=b;
if(d>a && d>c && d>b)
	max=d;
if(c>a && c>b && c>d)
	max=c;
return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
