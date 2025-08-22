#include<stdio.h>
int main()
{
    int i,k,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);    
    printf("Enter the elements you want to start from:\n");
    scanf("%d", &i);
   
   
    
    printf("Enter the special number for which you want speical no: ");
    int a;
    scanf("%d", &a);

    for (k = i; k <=n ; k++)
    {
          int m=k%a;
        if (m==0)
        {
            printf("it is speical book of ID no :-%d\n",k);
        }
        else{
            printf("book ID no is :-%d\n", k);
        }
        
    }
    return 0;
    
}
