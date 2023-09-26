#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) 
    {
        for (int p = 1;p<=N-i;p++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
