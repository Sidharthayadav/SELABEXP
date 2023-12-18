#include <stdio.h>
void main()
{
    //file reading
    FILE *f;
    f=fopen("t1.txt", "r");
    float a[3];
    int i;
    for(i=0;i<3;i++)
    {
        fscanf(f,"%f",&a[i]);
    }
    
    //assigning T,H,wi values
    float W,T,H,wi;
    T=a[0];
    H=a[1];
    wi=a[2];
    
    //computing W
    W=(0.5*T*T)-(0.2*H)+(0.1*wi)-15;
    printf("value of W=%.2f\n",W);
    
    //predicting the weather
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