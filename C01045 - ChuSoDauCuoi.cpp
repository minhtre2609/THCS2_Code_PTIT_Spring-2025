#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	char a[10];
	scanf ("%s", a);
	printf ("%c %c", a[0], a[strlen(a)-1]);
	return 0;
}
