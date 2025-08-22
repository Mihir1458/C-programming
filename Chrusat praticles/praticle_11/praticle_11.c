#include<stdio.h>

int main()
{

    int marks;
    int n;
    printf("\n Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        
    

    printf("\n Enter your marks for student %d:- ",i+1);
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100){
        printf("\n A Grade");
        printf("\n Excellent Performance");
    }
    else if(marks >= 80 && marks < 90)
    {
        printf("\n B Grade");
        printf("\n Good Performance");
    }
    else if(marks >= 70 && marks < 80)
    {
        printf("\n C Grade");
        printf("\n Average Performance");

    }
    else if(marks >= 60 && marks < 70)
    {
        printf("\n D Grade");
        printf("\n Below Average Performance");
    }
    else if(marks >= 0 && marks < 60)
    {
        printf("\n F Grade");
        printf("\n Poor Performance");  
    }
    else
    {
        printf("\n Wrong Marks");
        
    }

    }
return 0;
}