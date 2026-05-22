#include <stdio.h>

int main(void)
{
    long long int a, b, c, min, max;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a >= -100000 && a <= 100000 && b >= -100000 && b <= 100000 && c >= -100000 && c <= 100000)
    {
        if (a >= b && a >= c)
        {
            max = a;
            if (b >= c)
            {
                min = c;
            }
            else
            {
                min = b;
            }
        }
        else if (b >= a && b >= c)
        {
            max = b;
            if (a >= c)
            {
                min = c;
            }
            else
            {
                min = a;
            }
        }
        else
        {
            max = c;
            if (a >= b)
            {
                
                min = b;
            }
            else
            {
                min = a;
            }
        }
        printf("%lld %lld", min, max);
    }

    return 0;
}
