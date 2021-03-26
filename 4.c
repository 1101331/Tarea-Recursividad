#include <stdio.h>
#include <stdlib.h>

int sum(int n);
int fact(int n);
int gcd(int x, int y);

int main()
{
    int test = sum(10);
    printf("Sum T(10): %d\n", test);
    test = fact(10);
    printf("Fact(10): %d\n", test);
    test = gcd(1220, 516);
    printf("GCD(1220,516): %d\n", test);
    return 0;
}

int sum(int n)
{
    int s = 0;
    for (int i = 1; i < n + 1; i++)
        s += i;
    return s;
}

int fact(int n)
{
    int s = 1;
    for (int i = 1; i < n + 1; i++)
        s = i * s;
    return s;
}

int gcd(int x, int y)
{
    int s;
    while (x % y != 0)
    {
        s = x % y;
        x = y;
        y = s;
    }
    return y;
}