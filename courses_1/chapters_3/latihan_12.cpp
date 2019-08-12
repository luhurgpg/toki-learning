#include <cstdio>

int  a, b, c, x, hasil;

int main () {
    scanf("%d %d %d %d", &a, &b, &c, &x);
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("c= %d\n", c);
    printf("x= %d\n", x);
    hasil = a*x*x + b*x + c;
    printf("ax^2 + bx + c = %d\n", hasil);
}