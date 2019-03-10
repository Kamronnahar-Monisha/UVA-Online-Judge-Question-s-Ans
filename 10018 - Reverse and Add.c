#include<stdio.h>
int main()
{
    int n,i,count;
    scanf("%d",&n);
    long int ara[n];
    long int temp,revs,rem;
    for(i=0;i<n;i++){
        scanf("%ld",&ara[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        while(1){
            revs=0;
            temp=ara[i];
            while(ara[i]>0){
                rem=ara[i]%10;
                revs=revs*10+rem;
                ara[i]/=10;
            }
            if(temp==revs){
                printf("%d %ld\n",count,temp);
                break;
            }
            else{
                ara[i]=temp+revs;
                count++;
            }
        }
    }
    return 0;
}
