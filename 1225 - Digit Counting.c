#include<stdio.h>
int main()
{
    long long int ara[10];
    long long int i,n,test,num;
    scanf("%lld",&test);
    while(test){
        scanf("%lld",&num);
        for(i=0;i<10;i++){
            ara[i]=0;
        }
        for(i=1;i<=num;i++){
            n=i;
            while(n){
                ara[n%10]++;
                n=n/10;
            }
        }
        for(i=0;i<10;i++){
            printf("%lld",ara[i]);
            if(i!=9){
                printf(" ");
            }
        }
        printf("\n");
        test--;
    }
    return 0;
}
