#include <stdio.h>
#include <math.h>

double x[128 * 1024];

int main()
{
    int i = 0;
    unsigned long long n;

    while (scanf("%llu",&n) != EOF)
    {
        x[i++] = (double) sqrt(n * 1.0);
    }

    for (; --i >= 0; )
    {
        printf("%.4lf\n", x[i]);
    }

    return 0;
}
