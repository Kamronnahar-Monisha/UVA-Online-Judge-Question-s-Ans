#include<stdio.h>
int main()
{
    long long int i=1,j,temp;
    long long int ara[10000];
    while(scanf("%lld",&ara[i])!=EOF){
        for(j=i;j>1;j--){
            if(ara[j]<ara[j-1]){
                temp=ara[j-1];
                ara[j-1]=ara[j];
                ara[j]=temp;
            }
        }
        if(i%2!=0){
            printf("%lld\n",ara[(1+i)/2]);
        }
        else{
            printf("%lld\n",(ara[(1+i)/2]+ara[((1+i)/2)+1])/2);
        }
        i++;
    }
    return 0;
}
