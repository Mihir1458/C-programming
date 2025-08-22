#include<stdio.h>

int main()
{
    float km;
    float ti;
    float cv;
    printf("hoe many kilometer maraton is :-");
    scanf("%f",&km);
    printf("how much it runner in kilometer in your time :-");
    scanf("%f",&cv);
    printf("at what speed runner is running (in mintues) :-");
    scanf("%f",&ti);
   for (float k=0;k<=km;k=k+cv) 
    {
        for (float i=0;i<=10;i=i+ti)
        {
            printf("Mintues %f :- Distance coverage %f \n",i,k );
          break;
        }
    
    }

printf("Meraton is compeleted!!");
return 0;
}


