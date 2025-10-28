#include<stdio.h>
#include<string.h>

union lib {
    int bookno;
    char booknm[50];
    char authornm[50];
    int price;
    int issur;
};

int main() {
    union lib b1;
    int choice;

    printf("\n--- CHARUSAT Library Book Management ---\n");
    printf("1. Enter Book Number\n");
    printf("2. Enter Book Name\n");
    printf("3. Enter Author Name\n");
    printf("4. Enter Book Price\n");
    printf("5. Enter Issue Status (1 = issued, 0 = available)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();

    switch (choice) {
        case 1:
            printf("Enter Book Number: ");
            scanf("%d", &b1.bookno);
            printf("Book Number: %d\n", b1.bookno);
            break;

        case 2:
            printf("Enter Book Name: ");
            fgets(b1.booknm, sizeof(b1.booknm), stdin);
            printf("Book Name: %s\n", b1.booknm);
            break;

        case 3:
            printf("Enter Author Name: ");
            fgets(b1.authornm, sizeof(b1.authornm), stdin);
            printf("Author Name: %s\n", b1.authornm);
            break;

        case 4:
            printf("Enter Book Price: ");
            scanf("%d", &b1.price);
            printf("Book Price: %d\n", b1.price);
            break;

        case 5:
            printf("Enter Issue Status (1 = issued, 0 = available): ");
            scanf("%d", &b1.issur);
            if (b1.issur == 1)
                printf("Status: ISSUED\n");
            else
                printf("Status: AVAILABLE\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
/*
IN STRUCT TYPE 
#include<stdio.h>
#include<string.h>
struct lib
    {
        int bookno;
        char booknm[50];
        char authornm[50];
        int price;
        int issur;
    };
int main()
{
   struct lib b1;
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
*/