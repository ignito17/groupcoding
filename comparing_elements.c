#include<stdio.h>
int main()
{
	int a, b, i, large;
	int c[4]={1,7,5,4};
	for(i=0; i<=4; i++) 
	{
     a=(c[i]>c[i+1])?c[i]:c[i+1];
     large=(a>b)?a:b;
     b=a;
	} 
	printf("%d",large) ;
} 