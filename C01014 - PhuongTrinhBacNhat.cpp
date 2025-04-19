#include<stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	float a,b;
	scanf("%f%f",&a,&b);
	if(a==0){
		if(b==0) printf("Vo so nghiem");
		else printf("Vo nghiem");
	}
	else printf("%.2f",-b/a);
}
