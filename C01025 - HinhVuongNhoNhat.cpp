#include <stdio.h>
#include <math.h>

int main ()
{
    // Khai bao bien toa do cua 2 hinh chu nhat
    long long x1_1, y1_1, x2_1, y2_1;
    long long x1_2, y1_2, x2_2, y2_2;

    // Nhap toa do cua 2 hinh chu nhat
    scanf ("%lld %lld %lld %lld", &x1_1, &y1_1, &x2_1, &y2_1);
    scanf ("%lld %lld %lld %lld", &x1_2, &y1_2, &x2_2, &y2_2);

    // Tim toa do lon nhat va nho nhat bao phu 2 hinh chu nhat
    long long left = (x1_1 < x1_2) ? x1_1 : x1_2;
    long long right = (x2_1 > x2_2) ? x2_1 : x2_2;
    long long bottom = (y1_1 < y1_2) ? y1_1 : y1_2;
    long long top = (y2_1 > y2_2) ? y2_1 : y2_2;

    // Tinh canh hinh vuong lon nhat
    long long side = (right - left > top - bottom) ? (right - left) : (top - bottom);

    // Tinh dien tich hinh vuong
    long long area = side * side;

    // In ra dien tich
    printf("%lld\n", area);

    return 0;
}
