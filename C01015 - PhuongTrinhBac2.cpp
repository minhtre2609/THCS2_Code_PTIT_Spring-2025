#include<stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() 
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    // Truong hop pt bac 1
    if (a == 0) 
    {
        // Truong hop 1: Vo nghiem
        if (b == 0) 
        {
            printf("NO"); 
        } 
        // Truong hop 2: Co nghiem duy nhat
        else 
        {
            double nghiem = -c / b;
            printf("%.2lf", nghiem);
        }
        return 0;
    }

    // Tinh delta
    long long delta = (long long)b * b - 4 * (long long)a * c;

    // Giai phuong trinh bac 2
    // Truong hop 1: Vo nghiem
    if (delta < 0) 
    {
        printf("NO");
    } 
    // Truong hop 2: Nghiem kep
    else if (delta == 0) 
    {
        double x = -b / (2 * a);
        printf("%.2lf", x);
    } 
    // Truong hop 3: Hai nghiem phan biet
    else 
    {
        double sqrt_delta = sqrt(delta);
        double x1 = (-b + sqrt_delta) / (2 * a);
        double x2 = (-b - sqrt_delta) / (2 * a);
        
        // In nghiem theo thu tu 
        if (x1 > x2) 
        {
            printf("%.2lf %.2lf", x1, x2);
        } 
        else 
        {
            printf("%.2lf %.2lf", x2, x1);
        }
    }

    return 0;
}

