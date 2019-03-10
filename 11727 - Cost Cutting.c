#include<stdio.h>
int main()
{
    int test,a,b,c,count=1;
    scanf("%d",&test);
    while(count<=test){
        scanf("%d %d %d",&a,&b,&c);
        printf("Case %d: %d\n",count,((a<b)&&(b<c))||((c<b)&&(b<a))?b:((b<a)&&(a<c))||((c<a)&&(a<b))?a:((a<c)&&(c<b))||((b<c)&&(c<a))?c:((a==b)||(a==c))?a:((c==b)||(c==a))?c:b);
        count++;
    }
    return 0;
}
