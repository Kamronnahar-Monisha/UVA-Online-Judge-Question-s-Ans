#include<stdio.h>
int main()
{
    long long int f;
    while(1){
        scanf("%lld",&f);
        if(f==0){
            break;
        }
        if(f>100){
            printf("f91(%lld) = %lld\n",f,(f-10));
        }
        else{
             printf("f91(%lld) = 91\n",f);
        }
    }
    return 0;
}
