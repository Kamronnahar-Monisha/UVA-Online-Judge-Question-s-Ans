#include<stdio.h>
char str[50];
int fun(void)
{
    long long int i,num,sum=0;
    for(i=0;str[i];i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
            if(str[i]>='A'&&str[i]<='Z'){
                str[i]=str[i]+32;
            }
            sum=sum+(str[i]-96);
        }
    }
    while(sum/10){
        num=sum;
        sum=0;
        while(num){
            sum=sum+(num%10);
            num=num/10;
        }
    }
    return sum;
}
int main()
{
    double a,b,temp;
    while(gets(str)){
        a=fun();
        gets(str);
        b=fun();
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        printf("%.2lf %%\n",(a/b)*100);
    }
    return 0;
}
