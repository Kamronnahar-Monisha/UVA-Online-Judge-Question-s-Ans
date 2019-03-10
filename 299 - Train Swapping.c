#include<stdio.h>
int main()
{
    int ara[50];
    int length,test,swaps,temp,e,i;
    scanf("%d",&test);
    while(test){
        e=1;
        swaps=0;
        scanf("%d",&length);
        for(i=0;i<length;i++){
            scanf("%d",&ara[i]);
        }
        while(e){
            e=0;
            for(i=0;i<(length-1);i++){
                if(ara[i]>ara[i+1]){
                    temp=ara[i];
                    ara[i]=ara[i+1];
                    ara[i+1]=temp;
                    e=1;
                    swaps++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",swaps);
        test--;
    }
    return 0;
}
