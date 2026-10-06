#include<stdio.h>

int main()
{
    int count = 0;
    long long n;

    scanf("%lld", &n);

    for(; n != 0; n = n / 10)
    {
        count++;
    }

    printf("%d", count);

    return 0;
}