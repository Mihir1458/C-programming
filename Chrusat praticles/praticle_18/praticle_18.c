#include<stdio.h>
int main()
{
        printf("Till which number you wants to print:-");

    int tb;
    scanf("%d",&tb);
       printf("For which number you want multiple :-");
    int mul;
     scanf("%d",&mul);
 
 for (int i=1 ; i<=tb;i++)
 {
    
    for (int k1=1; k1<=mul;k1++)
    {
        printf("%d * %d =%d\t",k1,i,k1*i);
        
    }
   printf("\n"); 
 }    
 return 0;
}
