#include<stdio.h>
int main()
{
    long long int n,a,sum;
    while(1){
        scanf("%lld",&n);
        if(n==0){
            break;
        }
        while(n>9){
            sum=0;
            a=n;
            while(a){
                sum=sum+(a%10);
                a=a/10;
            }
            n=sum;
        }
        printf("%lld\n",n);
    }
    return 0;
}
