#include<stdio.h>
int main()
{
    long int a,b;
    int i,n;
    while(scanf("%d",&n)==1){
        for(i=1;i<=n;i++){
            scanf("%ld %ld",&a,&b);
            if(a>b){
                printf(">\n");
            }
            else if(a<b){
                printf("<\n");
            }
            else{
                printf("=\n");
            }
        }
    }
    return 0;
}
