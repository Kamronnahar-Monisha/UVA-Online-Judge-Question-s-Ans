#include<stdio.h>
#include<string.h>
int main()
{
    char key[50]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char line[1000];
    int i,j,l;
    while(gets(line)){
        l=strlen(line);
        for(i=0;i<l;i++){
            if(line[i]==' '){
                continue;
            }
            for(j=0;j<47;j++){
                if(line[i]==key[j]){
                    line[i]=key[j-1];
                    break;
                }
            }
        }
        printf("%s\n",line);
    }
    return 0;
}
