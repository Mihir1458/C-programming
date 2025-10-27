#include<stdio.h>
int main (){
    float m1=0,m2=0,sum=0,amt=0;
    int n=0;
     printf("\n Saving in 1 month :-");
     scanf("%f",&m1);
     printf("\n Saving in 2 month :-");
     scanf("%f",&m2);
     printf("\n For how many month do want to see savings :-");
     scanf("%d",&n);
     float fb1=m1,fb2=m2;
     sum=m1;
     printf("Saving in 1 month :- %f",m1);
     if(n>=2){
        sum=sum+m2;
         printf("\n Saving in 2 month :- %f",m2);
     }
     for (int k=3 ;k<=n;k++)
     {
        amt=fb1+fb2;
        printf("\n Saving in %d month :- %f",k,amt);
         sum=amt+sum;
          fb1=fb2;
        fb2=amt;

     }
printf("\n total saved in %d months :- %f",n,sum);

return 0;
}