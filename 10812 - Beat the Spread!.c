#include<stdio.h>
int main()
{
    long long int x,y,m,n,test;
    scanf("%lld",&test);
    while(test){
        scanf("%lld %lld",&x,&y);
        if(x<y||(x+y)%2!=0){
            printf("impossible\n");
            test--;
            continue;
        }
        m=(x+y)/2;
        n=x-m;
        printf("%lld %lld\n",m,n);
        test--;
    }
    return 0;
}
