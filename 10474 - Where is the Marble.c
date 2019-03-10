#include<stdio.h>
int main()
{
    long long int ara[10050];
    long long int N,Q,i,j,temp,test=1,q,t;
    while(1){
        scanf("%lld %lld",&N,&Q);
        if(N==0&&Q==0){
            break;
        }
        printf("CASE# %lld:\n",test);
        test++;
        for(i=0;i<N;i++){
            scanf("%lld",&ara[i]);
        }
        for(i=1;i<=N;i++){
            for(j=0;j<(N-i);j++){
                if(ara[j]>ara[j+1]){
                    temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                }
            }
        }
        while(Q){
            scanf("%lld",&q);
            t=0;
            for(i=0;i<N;i++){
                if(q==ara[i]){
                    t=1;
                    break;
                }
            }
            if(t){
                printf("%lld found at %lld\n",q,i+1);
            }
            else{
                printf("%lld not found\n",q);
            }
            Q--;
        }
    }
    return 0;
}
