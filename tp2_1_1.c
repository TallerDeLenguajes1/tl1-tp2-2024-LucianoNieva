#include <stdio.h> // codigo a completar
#include <stdlib.h>
#define N 20

int main()
{
    int i;
    double vt[N];
    for (i = 0; i < N; i++)
    {
        vt[i] = 1 + rand() % 100;
        printf("%.2f\n", vt[i]);
    }
    return 0;
}
