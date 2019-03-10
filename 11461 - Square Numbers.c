#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,count;
    double s;
    while(1){
        scanf("%lld %lld",&a,&b);
        if(a==0&&b==0){
            break;
        }
        s=sqrt(a);
        if(s!=(int)s){
            s=(int)s+1;
        }
        count=0;
        while((s*s)<=b){
            count++;
            s++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
