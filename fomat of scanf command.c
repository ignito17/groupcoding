#include <stdio.h>
int main()
{
	int a;
	float b;
	char c[20] ;
	scanf ("%d %f %s", &a, &b, &c) ;
	printf ("u entered the following integer %d\n the following float value %f\n and the following string", a, b);
	puts(c);
	return 0 ;
}