#include<stdio.h>
int main()
{
    float W,T,H,wi;
    printf("Enter Temperature=");
    scanf("%f",&T);
    printf("\nEnter Humidity=");
    scanf("%f",&H);
    printf("\nWind speed=");
    scanf("%f",&wi);
    W=(0.5*T*T)-(0.2*H)+(0.1*wi)-15;
    printf("value of W=%.2f\n",W);
    if(W>300)
    {
        printf("Sunny day");
    }
    else if(W>200 && W<=300)
    {
        printf("Cloudy");
    }
    else if(W>100 && W<=200)
    {
        printf("Rainy");
    }
    else
    {
        printf("Stormy");
    }
}
