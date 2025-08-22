#include<stdio.h>

int main(){
    int item, a = 150,b = 200,c = 120,d = 100,e = 80;
    int aa=0,ab=0,ac=0,ad=0,ae=0;
    printf("******************************************************\n");
    printf("\t \t ::::::The menu::::: \t\t\n");
    printf("******************************************************\n");
   
    printf("\t 1. Burger price is Rs 150 \n");
    printf("\t 2. Pizza price is Rs 200 \n");
    printf("\t 3. Pasta price is Rs 120 \n");
    printf("\t 4. Sandawich price is Rs 100 \n");
    printf("\t 5. Frech fire price is Rs 80 \n");

    printf("*******************************************************\n");
    int sum=0;
     sum=sum+sum;
    
   for (int i = 0; i < 100; i++)
   {
       
     printf("*******************************************************\n");
    printf("\t Entre serial number for order \n");
     printf("*******************************************************\n");
    scanf("%d", &item);
    
   
   
   
    if( item == 0){
        printf("\n \t\tYour order is confirm and bills is :- %d \n \t\t      Thanks for ordering !!!! ",sum);
        
         break ;
    }    
    else if(item >= 1 && item <= 6)

{
    
          switch(item)
          {

    case 1: printf("\n As you order Burger ,your bill is Rs 150 \n");
    printf("how much quantity do you want :- ");
    scanf("%d",&aa);
    sum=a*aa;
    break;

    case 2: printf("\n As you order Pizza ,your bill is Rs 200 \n");
     printf("how much quantity do you want :- ");
    scanf("%d",&ab);
    sum=sum+b*ab;
    break;

    case 3: printf("\n As you order Pasta your bill is Rs 120 \n");
     printf("how much quantity do you want :- ");
    scanf("%d",&ac);
    sum=sum+c*ac;
    break;

    case 4: printf("\n As you order Sandawich ,your bill is Rs 100 \n ");
     printf("how much quantity do you want :- ");
    scanf("%d",&ad);
    sum=sum+d*ad;
    
    break;

    case 5: printf("\n As you order French Fries ,your bill is Rs 80 \n ");
     printf("how much quantity do you want :- ");
    scanf("%d",&ae);
    sum=sum+e*ae;
    break;

    default: printf("\n No item");
    }
    
}
    else{
    printf("invalid input \n");
    }
    }

    return 0;
}