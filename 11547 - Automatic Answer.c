#include<stdio.h>
int main()
{
    long long int test,n;
    scanf("%lld",&test);
    while(test){
        scanf("%lld",&n);
        n=((((((n*567)/9)+7492)*235)/47)-498);
        n=(n%100)/10;
        if(n<0){
            n=-n;
        }
        printf("%lld\n",n);
        test--;
    }
    return 0;
}
