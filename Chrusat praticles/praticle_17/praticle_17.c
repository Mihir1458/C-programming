#include<stdio.h>

int main()
{
    double km,ti,cv;
    printf("hoe many kilometer maraton is :-");
    scanf("%lf",&km);
    printf("how much it runner in kilometer in your time :-");
    scanf("%lf",&cv);
    printf("at what speed runner is running (in mintues) :-");
    scanf("%lf",&ti);
    double i=0;
   for (double k=cv;k<=km;k=k+cv) 
    {
       double i=(i+ti);
        {
            printf("Mintues %lf :- Distance coverage %lf \n",i,k);
          
        }
        
    
    }

printf("Meraton is compeleted!!");
return 0;
}
