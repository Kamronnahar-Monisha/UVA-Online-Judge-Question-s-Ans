#include<stdio.h>
int main()
{
    unsigned int n1,n2,a,b,carry,sum,count;
    while(1){
        scanf("%u %u",&n1,&n2);
        if(n1==0&&n2==0){
            return 0;
        }
        carry=0;
        count=0;
        if(n1<n2){
            a=n1;
            n1=n2;
            n2=a;
        }
        while(n1>0){
            a=n1%10;
            n1/=10;
            b=n2%10;
            n2/=10;
            sum=a+b+carry;
            carry=sum/10;
            if(carry!=0){
                count++;
            }

        }
        if(count==0){
            printf("No carry operation.\n");
        }
        else if(count==1){
            printf("1 carry operation.\n");
        }
        else{
            printf("%u carry operations.\n",count);
        }

    }
    return 0;
}
