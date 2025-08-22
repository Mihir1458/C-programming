#include<stdio.h>
#include<windows.h>
int main()
{
    float t;
    printf("Enter the capacity of tanks (in liters):- ");
    scanf("%f", &t);
    printf("\nTank incially filled with how many liters of water:- ");
    float k;
  
  scanf("%f", &k);
    printf("\nAt what rate the tank is being filled (in liters per hours):- ");
    int h;
    scanf("%d", &h);

    
    for (int i = k; i <= t;i=i+10)
    {
        if(i >= t)
        {
             printf("tank is full\n");
        }
       
        else
        {
            float k =(i/t)*100;
            printf("tank is filled:-%d liters\n",i);
            Sleep(k*100);
            printf("tank is %.2f %% full\n", k);
            
        }
    
    }
     printf("tank is 100 %% full\n");
    return 0;
    
}