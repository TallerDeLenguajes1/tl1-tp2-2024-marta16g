#include <stdio.h>
#include <time.h>
#define N 20

int main()
{
    time(NULL);
    int i;
    double vt[N], *ptrvt = &vt;

    for (i = 0; i < N; i++)
    {
        *(ptrvt) = 1 + rand() % 100;
        printf("%f \n", *ptrvt);
        ptrvt++;
    }

    return 0;
}