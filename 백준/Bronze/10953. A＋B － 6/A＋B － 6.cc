#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d",&c);
    for (int m = 0;m<c;m++)
    {
        scanf("%d,%d",&a,&b);
        printf("%d\n",a+b);    
    }
    return 0;
}
