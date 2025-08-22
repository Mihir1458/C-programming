//count down with real time is remaing not completed
#include <stdio.h>
#include <windows.h>
int i;
int main()
{
    int incountdown;
    printf("Enter the countdown number: ");
                scanf("%d", &incountdown); 
                if(incountdown < 0)
                {
                    printf("Invalid input! Please enter a non-negative number.\n");
                    return 0;
                }
      for (  i= incountdown; i >= 0; i--)
      if(i==0)
      {
        
          printf("countdown is complete");
          
          }
          else{
       printf("count is %d\n", i);
       Sleep(1000);
      }
      return 0;
                
    }