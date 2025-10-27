#include<stdio.h>
#include<math.h>
int validation(float a,float b,float c){
    if(a>0 || b>0 || c>0)
    {
        if(a+b>c && a+c>b && b+c>a)
        {
            printf("\n Sides of triangle are valid");
            return 1;
        }
        else{
            printf("Invalide sides does not follow the rules");
            return 0;
        }

    }else {
        printf("\n invalid input should not be negative");
        return 0;
    }

}
void type(float a,float b,float c)
{
      if (a == b && b == c) {
        printf("Type:     Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Type:     Isosceles\n");
    } else {
        printf("Type:     Scalene\n");
    }
}
void perimeter(float a,float b,float c)
{
    float p=0;
    p=a+b+c;
    printf("\nthe perimeter of the trinagle is :- %f",p);
}
void area(float a,float b,float c)
{
    float s=0,ar=0;
    s=(a+b+c)/2;
     ar=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("\n The area of the triangle is %f",ar);

}

int main(){
float a=0,b=0,c=0;
while(1)
{
    printf("\nFor existing the loop entre '0' ");
printf("\nEntre side 1:- ");
scanf("%f",&a);
printf("\nEntre side 2:- ");
scanf("%f",&b);
printf("\nEntre side 3:- ");
scanf("%f",&c);
if (a == 0 || b == 0 || c == 0) {
    printf("Exting.......");
            break; // Exit the while loop
        }
if ( validation(a,b,c)==1)
{
type(a,b,c);
perimeter(a,b,c);
area(a,b,c);
} 
}

return 0;
}