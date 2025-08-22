#include <stdio.h>
int main()
{
    int balance=8500;
    int withdraw;
    int deposit;
    int pin=1234;
    int enteredPin;
    int choice;
    int loop;
    int limit=0;
    printf("****************Welcome to the ATM!*************\n");
    printf("\tPlease enter what do you want to do:\n");
    printf("*************************************************************************************************\n");
    printf("\t1. Withdraw\n");
    printf("\t2. Deposit\n");
    printf("\t3. Check Balance\n");   
    printf("\t4. Exit\n");
    printf("*************************************************************************************************\n");
      printf("Enter your pin: ");
    scanf("%d", &enteredPin);
      printf("*************************************************************************************************\n");    
    if (enteredPin != pin) {
        printf("Incorrect PIN! Please try again.\n");
        return 0; 
    }
    else {
        printf("PIN accepted.\n");
   for (int i = 0; i < 1000; i++)
   {
     
    printf("\tEnter your choice: ");
    scanf("%d", &choice);
    printf("*************************************************************************************************\n");
    
    
    if (choice < 1 || choice > 4)
     {
        printf("Invalid choice! Please select a valid option.\n");
        return 0; 
    }
    else
    {
       

        if(choice==1)
        {
            if(limit<=4)
            {
                printf("Entrer the amount you want to withdraw: ");
            scanf("%d", &withdraw);
            if(withdraw <= 0)
             {
                printf("Invalid amount! Please enter a positive amount to withdraw.\n");
                printf("*************************************************************************************************\n");
            }
            else{
            if(withdraw > balance) {
                printf("Insufficient balance! You can withdraw up to %d.\n", balance);
            } 
            else
             {
                balance =balance- withdraw;
                printf("Withdrawal successful! Your new balance is: %d\n", balance);
                  printf("*************************************************************************************************\n");
                  limit++;
            }
        }
        }
            else 
            {
                 printf("you reached your maximum limit of 5 withdrawals.\n");
                 printf("*************************************************************************************************\n");
            }

        }
     else if(choice==2)
        {
            printf("Entrer the amount you want to deposit: ");
            scanf("%d", &deposit);
            {
                balance =balance+deposit;
                printf("Deposite successful! Your new balance is: %d\n", balance);
                  printf("*************************************************************************************************\n");
            }
        }
       
    else if(choice==3)
        {
            printf("Your current balance is: %d\n", balance);
              printf("*************************************************************************************************\n");
        }
        else if(choice==4)
        {
            printf("Thank you for using the ATM! Goodbye!\n");
              printf("*************************************************************************************************\n");
            break;
        }
    }

}  
   }
return 0;
}