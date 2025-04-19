#include<stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int a;
	scanf("%d",&a);
	int b=a/365;
	printf("%d ",b);
	a-=365*b;
	int c=a/7;
	printf("%d ",c);
	a-=7*c;
	printf("%d",a);
}

