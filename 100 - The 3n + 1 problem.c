#include<stdio.h>
int main()
{
    long long int l1,l2,count,max,n,i,a1,a2;
    while(scanf("%lld %lld",&l1,&l2)!=EOF){
       if(l1>l2){
            a1=l2;
            a2=l1;
        }
        else{
            a1=l1;
            a2=l2;
        }
        max=0;
        for(i=a1;i<=a2;i++){
            count=0;
            n=i;
            while(1){
                if(n==1){
                    count++;
                    break;
                }
                if(n%2==0){
                    n=n/2;
                    count++;
                }
                else{
                    n=(3*n)+1;
                    count++;
                }
            }
            if(count>max){
                max=count;
            }
        }
        printf("%lld %lld %lld\n",l1,l2,max);
    }
    return 0;
}
