#include<stdio.h>
int main()
{
    int T,t=0,a,b,sum;
    scanf("%d",&T);
    while(T){
        scanf("%d",&a);
        scanf("%d",&b);
        sum=0;
        while(a<=b){
            if(a%2!=0){
                sum+=a;
            }
            a++;
        }
        t++;
        printf("Case %d: %d\n",t,sum);
        T--;
    }
    return 0;
}
