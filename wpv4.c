#include<stdio.h>
int main()
{
    float W,T,H,wi;
    int n;
    printf("no. of predictions=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("\n*****PREDICTION %d*****\n",i+1);
    printf("Enter Temperature=");
    scanf("%f",&T);
    printf("Enter Humidity=");
    scanf("%f",&H);
    printf("Wind speed=");
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
}}