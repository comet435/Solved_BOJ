#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T); 

    while (T--) 
    {
        int A, B;
        scanf("%d %d", &A, &B); 

        int result = A + B;
        printf("%d\n", result); 
    }

    return 0;
}
