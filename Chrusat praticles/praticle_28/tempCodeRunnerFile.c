#include<stdio.h>
#include<string.h>
union lib
    {
        int bookno;
        char booknm[50];
        char authornm[50];
        int price;
        int issur;
    };
int main()
{
   union lib b1;
   printf("\nBook number :-");
   scanf("%d",&b1.bookno);
    getchar(); 
printf("\n Book Name :-");
fgets(b1.booknm,sizeof(b1.booknm),stdin);
printf("\n Book author Name :-");
fgets(b1.authornm,sizeof(b1.authornm),stdin);
printf("\n Book price :- ");
scanf("%d",&b1.price);
printf("\nif book is issue '0' or '1':- ");
scanf("%d",&b1.issur);

printf("\n********************************************");
printf("\nbook number %d",b1.bookno);
printf("\nbook name %s ",b1.booknm);
printf("\nbook author name %s ",b1.authornm);
printf("\n book prize :- %d",b1.price);
printf("\n issue or nor :- %d",b1.issur);
return 0;
}
