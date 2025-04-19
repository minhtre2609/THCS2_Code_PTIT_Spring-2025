#include <stdio.h>
#include <stdlib.h>

typedef struct PhanSo{
    int tu;
    int mau;
} PS;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

PS rutGon(PS ps) {
    int ucln = gcd(abs(ps.tu), abs(ps.mau));
    ps.tu /= ucln;
    ps.mau /= ucln;
    return ps;
}

void quyDong(PS *p, PS *q) {
    int mc = p->mau * q->mau / gcd(p->mau, q->mau);
    p->tu *= (mc / p->mau);
    q->tu *= (mc / q->mau);
    p->mau = q->mau = mc;
}

PS tongPhanSo(PS p, PS q) {
    PS tong;
    tong.tu = p.tu * q.mau + q.tu * p.mau;
    tong.mau = p.mau * q.mau;
    return rutGon(tong);
}

PS thuongPhanSo(PS p, PS q) {
    PS thuong;
    thuong.tu = p.tu * q.mau;
    thuong.mau = p.mau * q.tu;
    return rutGon(thuong);
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        PS p, q;
        scanf("%d %d %d %d", &p.tu, &p.mau, &q.tu, &q.mau);

        p = rutGon(p);
        q = rutGon(q);

        PS pQD = p, qQD = q;
        quyDong(&pQD, &qQD);

        PS tong = tongPhanSo(p, q);
        PS thuong = thuongPhanSo(p, q);

        printf("Case #%d:\n", i);
        printf("%d/%d %d/%d\n", pQD.tu, pQD.mau, qQD.tu, qQD.mau);
        printf("%d/%d\n", tong.tu, tong.mau);
        printf("%d/%d\n", thuong.tu, thuong.mau);
    }
    return 0;
}

