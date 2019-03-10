#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int stacks,i,sum,test=1,bricks;
    long int ara[1000];
    while(1){
        scanf("%ld",&stacks);
        if(stacks==0){
            break;
        }
        sum=0;
        for(i=0;i<stacks;i++){
            scanf("%ld",&ara[i]);
            sum+=ara[i];
        }
        bricks=sum/stacks;
        sum=0;
        for(i=0;i<stacks;i++){
            sum=sum+abs(ara[i]-bricks);
        }
        printf("Set #%ld\nThe minimum number of moves is %d.\n\n",test,sum/2);
        test++;
    }
    return 0;
}
