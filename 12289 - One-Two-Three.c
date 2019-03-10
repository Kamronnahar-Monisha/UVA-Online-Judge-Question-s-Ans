#include<stdio.h>
#include<string.h>
int main()
{
    int m,i,count,l;
    char str[4]="one";
    char str1[6];
    scanf("%d",&m);
    while(m){
        scanf("%s",str1);
        l=strlen(str1);
        if(l==5){
            printf("3\n");
            m--;
            continue;
        }
        count=0;
        for(i=0;i<3;i++){
            if(str[i]==str1[i]){
                count++;
            }
        }
        if(count>1){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
        m--;
    }
    return 0;
}
