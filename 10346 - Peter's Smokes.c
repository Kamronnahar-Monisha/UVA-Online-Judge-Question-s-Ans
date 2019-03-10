#include<stdio.h>
int main()
{
   long long int n,k,sum,l;
    while(scanf("%lld %lld",&n,&k)!=EOF){
        sum=n;
        l=1;
        while(l){
            l=n/k;
            sum=sum+l;
            n=l+(n%k);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
