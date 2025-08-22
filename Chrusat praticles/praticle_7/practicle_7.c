#include<stdio.h>
int main()
{
    int age;
    printf("what is your age ,plz enter :-");
    scanf("%d",&age);
    if(age<12)
    {
        printf("yahhhh!!! you get a free entry as you are children of age %d",age);
    }
    else if(age>60)
    {
        printf("as you are senior citizen you a discount of 10percent and you have to pay now 90rs");
    }
    else
    {
        printf("you have to pay for the ticket of 100rs ");
    }
    
    
    return 0;
}