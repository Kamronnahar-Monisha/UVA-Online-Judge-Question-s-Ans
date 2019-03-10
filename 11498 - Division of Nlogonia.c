#include<stdio.h>
int main()
{
    long long int k,N,M,x,y;
    while(1){
        scanf("%lld",&k);
        if(k==0){
            break;
        }
        scanf("%lld %lld",&N,&M);
        while(k){
            scanf("%lld %lld",&x,&y);
            if(x==N||y==M){
                printf("divisa\n");
            }
            else if(x>N&&y>M){
                printf("NE\n");
            }
            else if(x<N&&y>M){
                printf("NO\n");
            }
            else if(x<N&&y<M){
                printf("SO\n");
            }
            else if(x>N&&y<M){
                printf("SE\n");
            }
            k--;
        }
    }
    return 0;
}
