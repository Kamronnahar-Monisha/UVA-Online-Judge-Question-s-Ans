#include<stdio.h>
#include<string.h>
int main()
{
    char in[210],str[210],word[5009][210];
    long long int i,j,m=0,temp;
    while(gets(in)){
        for(i=0;in[i];i++){
            if((in[i]>='a'&&in[i]<='z')||(in[i]>='A'&&in[i]<='Z')){
                for(j=0;(in[i]>='a'&&in[i]<='z')||(in[i]>='A'&&in[i]<='Z');j++){
                    if(in[i]>='A'&&in[i]<='Z'){
                        in[i]=in[i]+32;
                    }
                    str[j]=in[i];
                    i++;
                }
                i--;
                str[j]='\0';
                if(m==0){
                    strcpy(word[m],str);
                    m++;
                    continue;
                }
                temp=1;
                for(j=0;j<=m-1;j++){
                    if(!strcmp(str,word[j])){
                        temp=0;
                        break;
                    }
                }
                if(temp){
                    strcpy(word[m],str);
                    m++;
                }
            }
        }
    }
    for(i=1;i<=m;i++){
        for(j=0;j<m-i;j++){
            if(0>strcmp(word[j],word[j+1])){
                strcpy(str,word[j]);
                strcpy(word[j],word[j+1]);
                strcpy(word[j+1],str);
            }
        }
        printf("%s\n",word[m-i]);
    }
    return 0;
}
