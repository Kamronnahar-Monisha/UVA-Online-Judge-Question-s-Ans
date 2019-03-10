#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,c;
    while(scanf("%d",&n)==1){
        i=0;
        c=0;
        int ara[n],ara1[n-1];
        while(i<n){
            scanf("%d",&ara[i]);
            i++;
         }
        for(i=0;i<(n-1);i++){
            ara1[i]=abs(ara[i]-ara[i+1]);
        }
        for(i=1;i<=(n-1);i++){
            for(j=0;j<(n-1);j++){
                if(i==ara1[j]){
                    c++;
                    break;
                }
            }
        }
        if(c==(n-1)){
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
        fflush(stdin);
    }
    return 0;
}
