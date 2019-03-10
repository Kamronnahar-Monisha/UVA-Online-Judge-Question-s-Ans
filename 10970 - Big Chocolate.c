#include<stdio.h>
int main()
{
    long long int m,n;
    while(scanf("%lld %lld",&m,&n)!=EOF){
        printf("%lld\n",(m*n)-1);
    }
    return 0;
}