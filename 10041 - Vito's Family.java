#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int ara[6000];
    long long int test,nei,a,b,sum,vot,i,j,res;
    scanf("%lld",&test);
    while(test){
        scanf("%lld",&nei);
        a=0;
        b=0;
        scanf("%lld",&ara[0]);
        a=ara[0];
        b=ara[0];
        for(i=1;i<nei;i++){
            scanf("%lld",&ara[i]);
            if(ara[i]>a){
                a=ara[i];
            }
            if(ara[i]<b){
                b=ara[i];
            }
        }
    
        for(i=b;i<=a;i++){
                sum=0;
            for(j=0;j<nei;j++){
               sum=sum+abs(ara[j]-i);
            }
            if(i==b){
                res=sum;
            }
            if(res>sum){
                res=sum;
            }
        }
        printf("%lld\n",res);
        test--;
    }
    return 0;
}


