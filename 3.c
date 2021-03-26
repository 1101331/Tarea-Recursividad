#include <stdio.h>
#include <stdlib.h>

int sumT(int n, int r);
int sum(int n);
int fact(int n);
int factT(int n, int r);
int gcd(int x, int y);
int gcdT(int x, int y);



int main()
{
    int test = sum(10);
    printf("Sum T(10): %d\n", test);
    test = sumT(11, 1);
    printf("Sum(11): %d\n", test);
    test = fact(10);
    printf("Fact(10): %d\n", test);
    test = factT(11, 1);
    printf("Fact T(11): %d\n", test);
    test = gcd(1220, 516);
    printf("GCD(1220,516): %d\n", test);
    return 0;
}

int sumT(int n, int r)
{
    if (n == 1)
        return r;
    return sumT(n - 1, n + r);
}

int sum(int n)
{
    if (n == 1)
        return n;
    return sum(n - 1) + n;
}

int fact(int n)
{
    if (n == 1)
        return n;
    return fact(n - 1) * n;
}

int factT(int n, int r)
{
    if (n == 1)
        return r;
    return factT(n-1,n * r);
}

int gcd(int x, int y)
{
    return (x % y == 0) ? y : gcd(y,x % y);
}
