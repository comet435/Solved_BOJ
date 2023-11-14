#include <stdio.h>
#include <stdlib.h>

long long arr[10000001] = {0};

int cmp(const void*x,const void*y)
{
    if (*(long long*) x > *(long long*) y)
        return 1;
        
    else if (*(long long*) x < *(long long*) y)
        return -1;

    else
        return 0;
}

int main()
{
    long long n,m;
    scanf("%lld%lld",&n,&m);
    for (int i =0;i<n;i++)
        scanf("%lld",&arr[i]);
    qsort(arr,n,sizeof(long long),cmp);

    
long long left = 1, right = arr[n-1];
long long ans = 0;

while (left <= right)
{
    long long mid = left + (right - left) / 2;
    long long sum = 0;
    for (long long i = 0;i<n;i++)
       if(arr[i] > mid)
       sum += arr[i] - mid;
    if (sum >= m)
    {
        if (ans < mid)
            ans = mid;
        left = mid + 1;
    }
    else
        right = mid - 1;
}
printf("%lld",ans);
return 0;
}