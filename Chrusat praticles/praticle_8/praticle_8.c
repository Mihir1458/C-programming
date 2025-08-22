#include<stdio.h>
int main()
{
    int age;
    printf("what is your age :- ");
    scanf("%d",&age);
    
        if (age>0 && age<18)
        {
         printf("sorry, you can not open bank account :( \n ");
        }
        else if(age>17 && age<61)
        {
            printf("you can make bank account \n");
        }
        else if (age>61 && age<150)
        {
            printf("tou are senior citizen , you can make senior citizen account \n");
        }
    
    return 0;
}