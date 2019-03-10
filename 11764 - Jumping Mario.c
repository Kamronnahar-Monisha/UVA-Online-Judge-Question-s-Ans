#include<stdio.h>
int main()
{
    int test,temp=1,s,a,b,high,low;
    scanf("%d",&test);
    while(temp<=test){
        scanf("%d",&s);
        high=0;
        low=0;
        scanf("%d",&a);
        s=s-1;
        while(s){
            scanf("%d",&b);
            if(a<b){
                high++;
            }
            else if(a>b){
                low++;
            }
            a=b;
            s--;
        }
        printf("Case %d: %d %d\n",temp,high,low);
        temp++;
    }
    return 0;
}
