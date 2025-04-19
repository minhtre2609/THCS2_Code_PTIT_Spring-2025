#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct MatHang {
    int id;
    char ten[1000];
    char nhom[1000];
    double giamua;
    double giaban;
    double loinhuan;
} MH;

int sosanh (struct MatHang a, struct MatHang b)
{
    if (a.loinhuan < b.loinhuan)
    {
        return 1;
    }
    return 0;
}

void swap (struct MatHang *a, struct MatHang *b)
{
    struct MatHang c = *a;
    *a = *b;
    *b = c;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    struct MatHang a[n + 1];
    
	for (int i = 1; i <= n; i++)
    {
        scanf ("\n");
        a[i].id = i;
        gets(a[i].ten);
        gets(a[i].nhom);
        scanf ("%lf%lf", &a[i].giamua, &a[i].giaban);
        a[i].loinhuan = a[i].giaban - a[i].giamua;
    }
    
    for (int i = 1; i <= n; i++)
    {
    	for (int j = i + 1; j <= n; j++)
    	{
    		if (sosanh(a[i], a[j]))
    		{
    			swap(&a[i], &a[j]);
			}
		}
	}
	
	for (int i = 1; i <= n; i++)
	{
		printf ("%d %s %s %.2lf\n", a[i].id, a[i].ten, a[i].nhom, a[i].loinhuan);
	}
}
