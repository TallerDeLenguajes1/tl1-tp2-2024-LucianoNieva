#include <stdio.h> // codigo a completar
#include <stdlib.h>
#define N 20

int main()
{
    int i;
    double vt[N];
    double * punt;
    punt = vt;
    for (i = 0; i < N; i++)
    {
        punt[i] = 1 + rand() % 100;
        printf("%.2f\n", punt[i]);
    }
    return 0;
}
