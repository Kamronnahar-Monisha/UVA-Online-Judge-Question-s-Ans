#include<stdio.h>
#include<string.h>
int main()
{
    char rev[]="AAE3HHIIJLMMOOS2TTUUVVWWXXYYZ51188";
    int i,j,p,m,l;
    char str1[30],str2[30];
    while(scanf("%s",str1)!=EOF){
        p=0;
        m=1;
     
        l=strlen(str1);
    
        for(i=l-1,j=0;i>=0;i--,j++){
            str2[j]=str1[i];
        }
        str2[j]='\0';
        if(!strcmp(str1,str2)){
            p=1;
        }
        for(i=0;str2[i];i++){
            for(j=0;rev[j];j++){
                if(str2[i]==rev[j]){
                    if(j%2==0){
                        str2[i]=rev[j+1];
                    }
                    else{
                        str2[i]=rev[j-1];
                    }
                    break;
                }
            }
            if(!rev[j]){
                m=0;
                break;
            }
        }
        if(m){
            if(strcmp(str1,str2)){
                m=0;
            }
        }
        if(m&&p){
            printf("%s -- is a mirrored palindrome.\n\n",str1);
        }
        else if(m){
            printf("%s -- is a mirrored string.\n\n",str1);
        }
        else if(p){
            printf("%s -- is a regular palindrome.\n\n",str1);
        }
        else{
            printf("%s -- is not a palindrome.\n\n",str1);
        }
    }
    return 0;
}
