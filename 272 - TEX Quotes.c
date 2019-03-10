#include<stdio.h>
int main()
{
    char ch;
    int i=1;
    while(scanf("%c",&ch)!=EOF){
        if(ch=='"'){
            if(i==1){
                printf("``");
                i=2;
            }
            else{
                printf("''");
                i=1;
            }
        }
        else{
            printf("%c",ch);
        }
    }
    return 0;
}
