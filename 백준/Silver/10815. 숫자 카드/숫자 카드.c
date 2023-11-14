#include <stdio.h>
#include <stdlib.h>

int arr[500001] = {0};

int cmp(const void*x,const void*y)
{
    if (*(int*) x > *(int*) y)
        return 1;
        
    else if (*(int*) x < *(int*) y)
        return -1;

    else
        return 0;
}

int main()
{
    int n,m;
    scanf("%d",&n);

    for (int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),cmp);

    scanf("%d",&m);
    for (int i =0;i<m;i++)
    {
        int x;
        scanf("%d",&x);
        int left = 0, right = n-1;
        int flag = 0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (x > arr[mid])
                left = mid + 1;
            else if (x < arr[mid])
                right = mid - 1;
            else
            {
                flag = 1;
                break;
            }
        }
    
    if (flag)
        printf("1 ");
    else
        printf("0 ");
    }
}