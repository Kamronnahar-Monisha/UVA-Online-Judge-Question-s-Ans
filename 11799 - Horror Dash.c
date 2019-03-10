#include<stdio.h>
int main()
{
    long long test,temp=1,s,x,a;
    scanf("%lld",&test);
    while(temp<=test){
        scanf("%lld",&s);
        a=0;
        while(s){
            scanf("%lld",&x);
            if(a<x){
                a=x;
            }
            s--;
        }
        printf("Case %lld: %lld\n",temp,a);
        temp++;
    }
    return 0;
}
