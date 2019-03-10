#include<stdio.h>
int main()
{
    long long int ampli,fre,test,i,j,a;
    scanf("%lld",&test);
    while(test){
        scanf("%lld %lld",&ampli,&fre);
        while(fre){
        a=1;
        for(i=1;i>0;i=i+a){
            for(j=0;j<i;j++){
                printf("%lld",i);
            }
              printf("\n");
              if(i==ampli){
                a=-1;
              }
        }
        fre--;
        if(fre!=0||test!=1){
        printf("\n");
        }
        }
        test--;
    }
    return 0;
}
