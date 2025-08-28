#include<stdio.h>
int main()
{
    for (int i=0;i<=6;i++)
    {
        for(int k=0;k<=i;k++)
        {
        if(k%2==0)
        {
         printf(" 1");
        }
        else{
            printf(" 0");
        }
       }
    printf("\n");
}
    return 0;
}