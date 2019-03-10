#include<stdio.h>
#include<string.h>
int main()
{
    char str[1010];
    long long int i,num,a,x;
    while(1){
        scanf("%s",str);
        if(!strcmp(str,"0")){
            break;
        }
        num=0;
        for(i=0;str[i];i++){
            a=str[i]-'0';
            num=((num*10)+a)%11;
        }
        if(!num){
            printf("%s is a multiple of 11.\n",str);
        }
        else{
            printf("%s is not a multiple of 11.\n",str);
        }
    }
    return 0;
}
