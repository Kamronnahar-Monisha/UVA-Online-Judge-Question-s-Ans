#include<stdio.h>
int main()
{
    long long int n,m,test,count,i,j;
    scanf("%lld",&test);
    while(test){
        scanf("%lld %lld",&n,&m);
        count=0;
        n=n-2;
        m=m-2;
        for(i=1;i<=n;i=i+3){
            for(j=1;j<=m;j=j+3){
                count++;
            }
        }
        printf("%lld\n",count);
        test--;
    }
    return 0;
}
