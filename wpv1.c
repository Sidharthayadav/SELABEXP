//weather predictor v1
#include<stdio.h>
int main()
{
    float W,T,H,wi;
    T=28;
    H=65;
    wi=20;
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
