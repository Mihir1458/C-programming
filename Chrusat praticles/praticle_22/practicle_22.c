#include<stdio.h>

#define reserved 'B'
#define avalabile 'X'

void seatmatrix(int rows, int clons,char seats[rows][clons])
{
    printf("\t--------seat matrix------------\n");
    printf(" \t*");
    
    
   for(int k=0;k<clons;k++)
        {
            
            printf("\t%d",k+1);
        }
         printf("\n");
    for(int i=0;i<rows;i++)
    {
        {
         printf("\t%d",i+1);
        }
        for(int k=0;k<clons;k++)
        {
         printf("\t%c",seats[i][k]);
        }
         printf("\n");
    }
}


void bookaseat(int rows,int clons,char seats[rows][clons])
{
    
    int bk,r=0,c=0;
    printf("How many seats do you want to book:-");
    scanf("%d",&bk);
    int o=0;
    if(bk<=rows*clons)
    {   
        for ( o=0;o<bk;o++)
    {
          miss:
          
    
        printf("seat booking at which row:-");
        scanf("%d",&r);
        
        printf("seat booking at which clons:-");
        scanf("%d",&c);
        if(r<=rows && c<=clons && r>=0 && c>=0)
       { 
        seats[r-1][c-1]=reserved;
        printf("\n---Seat (%d,%d) booked succefully -------\n",r,c);
         }
         else if(seats[rows][clons]==reserved)
         {
            printf("the seat (%d,%d) alredy reserved ",rows,clons);
            goto miss;
         }
    else {
        printf("\n--------invalid input------- \n");
        printf("Reentre the seat number :- %d \n",o+1);
        
        
        goto miss;
        
    }
    }
    
    }
    else {
        printf("--------invalid input------- \n");
        
    }
}
    void cantick(int rows,int clons, char seats[rows][clons])
    {
        int r1,c1,k1;
        printf("how many seats do wants to cancel:-");
        scanf("%d",&k1);

        for(int k=0;k<k1;k++)
        {
            
           mmiss:
            
            printf("Entre row number :-");
            scanf("%d",&r1);
            printf("Entre clon number :-");
            scanf("%d",&c1);
            
            
            if(seats[r1-1][c1-1]==avalabile)
            {
                printf("Given seat (%d,%d) is alredy avalablie :- \n ",r1,c1);
                
                 goto mmiss;
               
              }
            else if (r1<=rows && c1<=clons && r1>=0 && c1>=0)
            {
                seats[r1-1][c1-1]=avalabile;
                printf("Your seat(%d,%d)  is suceeses fully canceled\n",r1,c1);
              
                
            }
            else {
                        printf("--------invalid input------- \n");
                      
                       goto mmiss;
                       
            }
            }
           }
           
           void check(int rows,int clons,char seats[rows][clons])
           {
            int ki,k5,c5,rf;
        
            printf("How seat data do want to refer :-\n");
            scanf("%d",&rf);
            
           
    if(rf<=rows*clons)
    {
            for (int h=0;h<rf;h++)
            {
                kim:

            
            printf("Entre Row of seat:-");
            scanf("%d",&k5);
            printf("Entre clon of seat:-");
            scanf("%d",&c5);
     
             if (k5<=rows && c5<=clons && k5>=0 && c5>=0)
            {
                printf("the seat (%d,%d) is %c\n ",k5,c5,seats[k5-1][c5-1]);
            }
            else {
                printf("Invalid input !!!");
            goto kim;
            }
           }
        }
    
    else { printf("Not a valid beacuse it is out of the range ");}
    }

           void noseat(int rows, int clons,char seats[rows][clons])
           {
            int ki=0;
               for(int i=0;i<rows;i++)
    {
        for(int k=0;k<clons;k++)
        {
            if(seats[i][k]==avalabile)
            {
                
                ki++;
            }
        }
    }
            
            printf("Total resevred seats :- %d\n",(rows*clons)-ki);
            printf("Total avaliable seats :- %d\n",ki);
            printf("Total  seats :- %d\n",rows*clons);
           }
    

int main(){
    int rows,clons; 
    printf("how many rows in the theater:- ");
    scanf("%d",&rows);
    printf("how many columns in the theater:- ");
     scanf("%d",&clons);
     char seats[rows][clons];
      for(int i=0;i<rows;i++)
    {
        for(int k=0;k<clons;k++)
        {
             seats[i][k]=avalabile;
        }
    }
    int choice;
     do{

printf("\n--- Theatre Seating Menu ---\n");
        printf("1. Display Seating Chart\n");
        printf("2. Reserve a Seat\n");
        printf("3. Cancel Reservation\n");
        printf("4. Check Seat Availability\n");
        printf("5. Show Reserved/Available Count\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

     
          
       switch(choice) {
            case 1:
                seatmatrix(rows,clons,seats);
                break;
            case 2:
                bookaseat(rows,clons,seats);
                break;
            case 3:
                cantick(rows, clons,seats);
                break;
            case 4:
            check(rows,clons,seats);    
            break;
            case 5:
               noseat(rows,clons,seats);
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
} while (choice !=6);

     
     return 0;
}