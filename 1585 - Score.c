#include<stdio.h>
int main()
{
    char str[90];
    long long int i,l,sum,test;
    scanf("%lld",&test);
    while(test){
        scanf("%s",str);
        l=1;
        sum=0;
        for(i=0;str[i];i++){
            if(str[i]=='X'){
                l=1;
                continue;
            }
            sum=sum+l;
            l++;
        }
        printf("%lld\n",sum);
        test--;
    }
    return 0;
}
