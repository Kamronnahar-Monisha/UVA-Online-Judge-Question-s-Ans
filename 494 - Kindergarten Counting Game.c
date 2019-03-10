#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int l,i,count;
    while(gets(str)){
        count=0;
        l=strlen(str);
        for(i=0;i<l;i++){
            if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
                    count++;
                while(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
                    i++;
                }
            }
        }
        printf("%d\n",count);
    }
}
