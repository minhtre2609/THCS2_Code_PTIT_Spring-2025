#include <stdio.h>

typedef struct {
    long long tu;
    long long mau;
} PhanSo;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void rutGon(PhanSo* p) {
    long long ucln = gcd(p->tu, p->mau);
    p->tu /= ucln;
    p->mau /= ucln;
}

int main() {
    PhanSo p;
    scanf("%lld %lld", &p.tu, &p.mau);
    rutGon(&p);
    printf("%lld/%lld\n", p.tu, p.mau);
    return 0;
}

