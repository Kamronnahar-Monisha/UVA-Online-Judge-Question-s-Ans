#include<stdio.h>
int main()
{
    char ara[1000][1000];
    char count;
    int field=0,i,j,a,b,c,d,m,n,t;
    while(1){
        scanf("%d %d",&m,&n);
        if(m==0&&n==0){
            return 0;
        }
        field++;
        for(i=0;i<m;i++){
                scanf("%s",ara[i]);
        }
        if(field!=1){
            printf("\n");
        }
        printf("Field #%d:\n",field);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(ara[i][j]!='*'){
                    count='0';
                    a=((i-1)>=0)?(i-1):i;
                    b=((i+1)<m)?(i+1):i;
                    c=((j-1)>=0)?(j-1):j;
                    d=((j+1)<n)?(j+1):j;
                    t=c;
                    while(a<=b){
                        c=t;
                        while(c<=d){
                            if(ara[a][c]=='*'){
                                count++;
                            }
                            c++;
                        }
                        a++;
                    }
                    ara[i][j]=count;
                }
            }
             printf("%s\n",ara[i]);
        }
    }
    return 0;
}

