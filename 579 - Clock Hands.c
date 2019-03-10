#include<stdio.h>
int main()
{
    double h,m,ans;
    while(1){
        scanf("%lf:%lf",&h,&m);
        if(h==0&&m==0){
            return 0;
        }
        h=(h*30)+(0.5*m);
        if(m==0.0){
            m=60;
        }
        m=m*6;
        ans=(h>m)?h-m:m-h;
        if(ans>180){
            ans=360-ans;
        }
        printf("%.3lf\n",ans);
    }
    return 0;
}
