#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000001];
    char str2[1000001];
    int i,j,count,l1,l2;
    while(scanf("%s %s",str1,str2)!=EOF){
        l1=strlen(str1);
        l2=strlen(str2);
        count=0;j=0;
        for(i=0;i<l1;i++){
            while(j<l2){
                if(str1[i]==str2[j]){
                    count++;
                    j++;
                    break;
                }
                j++;
            }
            if(count!=(i+1)){
                printf("No\n");
                break;
            }
        }
        if(count==l1){
            printf("Yes\n");
        }
    }
    return 0;
}
