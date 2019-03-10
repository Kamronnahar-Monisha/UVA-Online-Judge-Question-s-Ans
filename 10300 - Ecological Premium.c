#include<stdio.h>
int main()
{
    long long int ara[20];
    long long int sum,a,b,c;
    int i,j,cases,farmer;
    while(scanf("%ld",&cases)!=EOF){
        for(i=0;i<cases;i++){
            scanf("%ld",&farmer);
            sum=0;
            for(j=0;j<farmer;j++){
                scanf("%lld %lld %lld",&a,&b,&c);
                sum+=(a*c);
            }
            ara[i]=sum;
        }
        for(i=0;i<cases;i++){
            printf("%lld\n",ara[i]);
        }
    }
    return 0;
}
