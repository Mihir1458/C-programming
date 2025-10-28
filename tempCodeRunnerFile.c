#include <stdio.h>
#include <string.h>

// Declare a union to represent a book
union Book {
    int accession_no;
    char title[50];
    char author[50];
    float price;
    int isIssued; // 1 = issued, 0 = available
};

int main() {
    union Book book; // Only one book data at a time
    int choice;

    printf("===== CHARUSAT LIBRARY BOOK MANAGEMENT =====\n");

    // Input section
    printf("\nEnter Accession Number: ");
    scanf("%d", &book.accession_no);

    printf("Enter Book Title: ");
    getchar(); // To clear newline from buffer
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = '\0'; // Remove newline

    printf("Enter Author Name: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = '\0';

    printf("Enter Book Price: ");
    scanf("%f", &book.price);

    printf("Enter Book Status (1 = ISSUED, 0 = AVAILABLE): ");
    scanf("%d", &book.isIssued);

    // Output section
    printf("\n===== BOOK DETAILS =====\n");
    printf("Accession Number : %d\n", book.accession_no);
    printf("Title            : %s\n", book.title);
    printf("Author           : %s\n", book.author);
    printf("Price            : %.2f\n", book.price);

    if (book.isIssued == 1)
        printf("Status           : ISSUED\n");
    else
        printf("Status           : AVAILABLE\n");

    printf("=========================\n");

    return 0;
}
