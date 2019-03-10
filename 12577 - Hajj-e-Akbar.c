#include<stdio.h>
int main()
{
    char str[10];
    long long int c=0;
    while(1){
        scanf("%s",str);
        if(str[0]=='*'){
            break;
        }
        c++;
        if(str[0]=='H'){
            printf("Case %lld: Hajj-e-Akbar\n",c);
        }
        else{
            printf("Case %lld: Hajj-e-Asghar\n",c);
        }
    }
    return 0;
}
