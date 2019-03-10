#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    double a;
    while(1){
        scanf("%lld",&n);
        if(n==0){
            return 0;
        }
        a=sqrt(n);
        n=a;
        if(n==a){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
