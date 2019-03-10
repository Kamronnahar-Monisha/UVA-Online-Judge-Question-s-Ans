#include <stdio.h>
long long int ara[2000000];
long long int a[2000000];
void merg(long long int low, long long int mid,long long int high)
{
    long long int i, j, k;
    for (i = low, j = mid + 1, k =low;i<=mid&& j <= high; k++)
    {
        if (ara[i] <=ara[j])
        {
            a[k] = ara[i++];
        }
        else
        {
            a[k] = ara[j++];
        }
    }
    while(i<=mid){
        a[k++]=ara[i++];
    }
    while(j<=high){
        a[k++]=ara[j++];
    }
    for (i = low; i <= high; i++)
    {
        ara[i] = a[i];
    }
    return;
}
void devide(long long int low,long long int high)
{
    if (low >= high)
    {
        return;
    }
    long long int mid;
    mid = (high + low) / 2;
    devide(low, mid);
    devide(mid + 1, high);
    merg(low, mid, high);
    return;
}
int main()
{
    long long int i, s;
    while(1){
        scanf("%lld", &s);
        if(s==0){
            break;
        }
        for (i = 0; i < s; i++)
        {
            scanf("%lld", &ara[i]);
        }
        devide(0, s - 1);
        for (i = 0; i < s; i++)
        {
            printf("%lld",ara[i]);
            if(i<s-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
