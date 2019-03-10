#include<stdio.h>
int main()
{
    double test,x,count,n;
    long long int i;
    double ara[1050];
    scanf("%lf",&test);
    while(test){
        scanf("%lf",&n);
        x=0;
        for(i=0;i<n;i++){
            scanf("%lf",&ara[i]);
            x=x+ara[i];
        }
        x=x/n;
        count=0;
        for(i=0;i<n;i++){
            if(ara[i]>x){
                count++;
            }
        }
        printf("%.3lf%%\n",(count*100)/n);
        test--;
    }
    return 0;
}
