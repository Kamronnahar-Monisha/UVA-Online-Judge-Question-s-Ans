#include<stdio.h>
#include<string.h>
int main()
{
    char str[101][110];
    int ara[110];
    int i=0,j,l1=0,l2;
    while(gets(str[i])){
        l2=strlen(str[i]);
        ara[i]=l2;
        if(l1<l2){
            l1=l2;
        }
        i++;
    }
    l2=i-1;
    for(i=0;i<l1;i++){
        for(j=l2;j>=0;j--){
            if(i<ara[j]){
                printf("%c",str[j][i]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
