#include<stdio.h>
#include<math.h>
int main()
{
    long long int sum,in=0,i,j;
    double l;
    long long int ara[1000];
    while(1){
        scanf("%lld",&ara[in]);
        if(ara[in]==0){
            break;
        }
        in++;
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0;i<in;i++){
        if(ara[i]==1){
            printf("%5d  DEFICIENT\n",ara[i]);
            continue;
        }
        sum=1;
        l=sqrt(ara[i]);
        for(j=2;j<l;j++){
            if((ara[i]%j)==0){
                sum=sum+j+(ara[i]/j);
            }
        }
        l=ara[i]/l;
        if(l==(int)l){
            sum=sum+l;
        }
        if(sum==ara[i]){
            printf("%5d  PERFECT\n",ara[i]);
        }
        else if(ara[i]>sum){
             printf("%5d  DEFICIENT\n",ara[i]);
        }
        else{
            printf("%5d  ABUNDANT\n",ara[i]);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
