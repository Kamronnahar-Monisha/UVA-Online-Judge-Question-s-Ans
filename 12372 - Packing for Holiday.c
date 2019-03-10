#include<stdio.h>
int main()
{
    long long int h,w,l,test,cas;
    scanf("%lld",&test);
    cas=1;
    while(cas<=test){
        scanf("%lld %lld %lld",&h,&w,&l);
        if(h>20||w>20||l>20){
            printf("Case %lld: bad\n",cas);
        }
        else{
         printf("Case %lld: good\n",cas);
        }
        cas++;
    }
    return 0;
}
