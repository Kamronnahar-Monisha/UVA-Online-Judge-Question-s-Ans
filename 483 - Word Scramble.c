#include<stdio.h>
int main()
{
    char str[1000000];
    long long int i,j,m,k;
    char a;
    while(gets(str)){
        for(i=0;str[i];i++){
            if(str[i]!=' '){
                for(j=i;str[j]!=' '&&str[j];j++){
                }
                for(m=i,k=j-1;m<k;m++,k--){
                    a=str[m];
                    str[m]=str[k];
                    str[k]=a;
                }
                i=j-1;
            }
        }
        puts(str);
    }
    return 0;
}
