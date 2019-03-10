#include<stdio.h>
char str[1000][1000];
int m,n;
void fun(int x,int y)
{
    str[x][y]='*';
    if(y+1<n){
        if(str[x][y+1]=='@'){
            fun(x,y+1);
        }
    }
    if(y-1>=0){
        if(str[x][y-1]=='@'){
            fun(x,y-1);
        }
    }
    if(x+1<m){
        if(str[x+1][y]=='@'){
            fun(x+1,y);
        }
    }
    if(x-1>=0){
        if(str[x-1][y]=='@'){
            fun(x-1,y);
        }
    }
    if(x+1<m&&y+1<n){
        if(str[x+1][y+1]=='@'){
            fun(x+1,y+1);
        }
    }
    if(x+1<m&&y-1>=0){
        if(str[x+1][y-1]=='@'){
            fun(x+1,y-1);
        }
    }
    if(x-1>=0&&y+1<n){
        if(str[x-1][y+1]=='@'){
            fun(x-1,y+1);
        }
    }
    if(x-1>=0&&y-1>=0){
        if(str[x-1][y-1]=='@'){
            fun(x-1,y-1);
        }
    }
    return;

}
int main()
{
    int i,j;
    long long int a;
    while(1){
        scanf("%d %d",&m,&n);
        if(m==0){
            break;
        }
        for(i=0;i<m;i++){
            scanf("%s",str[i]);
        }
        a=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(str[i][j]=='@'){
                    a++;
                    fun(i,j);
                }
            }
        }
        printf("%lld\n",a);
    }
    return 0;
}
