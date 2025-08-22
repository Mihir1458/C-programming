#include<stdio.h>

int main()
{
    int l;
    printf("for how many customer you want to entre data:-  \n");

    scanf("%d",&l);

    for(int o=0;o<=l;o++)
    {
        float rupees;

    printf(" Enter rupees:- ");

    scanf("%f", &rupees);

     float dm,famount;
    

    if(rupees >= 0 && rupees  <= 1000)
    {
        printf(" No Available Discount \n\n\n");

      
        
     char cp;

    

printf("If have any promocode, then pls entre and get 20 percentage discount \n\n");
   
     scanf(" %c",&cp);

    if (cp=='c')

    { 
        float di=rupees*0.20;

        float fik=rupees-di;
        printf("discount price of promo card :- %f\n\n",di);

        printf("the bill you need to pay :- %f\n\n",fik);

        float gst1=fik*0.05;
        
        float fgst1=gst1+fik;
        
         printf("amount of 5 percentage gst :- %f\n\n\n",gst1);

    printf("final bill you had to pay :- %f\n\n\n",fgst1);
     printf("If you entre your moblie number than you can get 5 percent discount on final amount \nif your does not want to entre the tpye 0 \n\n\n");
  
  //moblie  
    long long int number;

    scanf("%lld",&number);

    if (number==0)
    {
        printf("amount of 5 percentage gst :- %f\n\n\n",gst1);

    printf("final bill you had to pay :- %f\n\n\n",fgst1);
    }
    else
    {
        float numm11=fik*0.05;

        float fkkm00225=fik-numm11;
        
        float ggstt3114=fkkm00225*0.05;
        float fggsst1005=ggstt3114+fkkm00225;

        printf("discounted amount as you entred your number :- %f\n\n\n",numm11);

        printf("After applying all the discount the final amount you want to pay is :- %f\n\n\n",fkkm00225);
    
        printf("amount of 5 percentage gst :- %f\n\n\n",ggstt3114);

    printf("final bill you had to pay :- %f\n\n\n",fggsst1005);

   
    }

    }
    else
    {
        float gst=rupees*0.05;

    float fmi=gst+rupees;
        printf("invalid promo code \n");
           printf("If you entre your moblie number than you can get 5 percent discount on final amount \nif your does not want to entre the tpye 0 \n\n\n");
  
  //moblie  
    long long int number;

    scanf("%lld",&number);

    if (number==0)
    {
      
        printf("amount of 5 percentage gst :- %f\n\n\n",gst);
        
        printf("final you had to pay %f\n\n",fmi);
    }
    else
    {
        float numm1=rupees*0.05;

        float fkkm0025=rupees-numm1;
        
        float ggstt314=fkkm0025*0.05;
        float fggsst105=ggstt314+fkkm0025;

        printf("discounted amount as you entred your number :- %f\n\n\n",numm1);

        printf("After applying all the discount the final amount you want to pay is :- %f\n\n\n",fkkm0025);
    
        printf("amount of 5 percentage gst :- %f\n\n\n",ggstt314);

    printf("final bill you had to pay :- %f\n\n\n",fggsst105);

   
    }
        
    }
    
    }
    else if(rupees > 1000 && rupees <= 5000)
    {
        printf("\n 10 Percent Available Discount \n\n\n");

        dm=rupees*0.10;

        famount=rupees-dm;

         printf("The total discounted prices:- %f \n\n\n",dm);

printf("The total  prices after discount :- %f\n\n\n",famount);

        

printf("If have any promocode, then pls entre and get 20 percentage discount\n\n");
   
     char cp;

    scanf(" %c",&cp);

    if (cp=='c')

    { 
        float pro=famount*0.20;

        float fi=famount-pro;

        printf("the amount you get discounted by promo code :- %f\n\n",pro);

        printf("toatl dicounted price after both promo and store dicount :-%f\n\n ",pro+dm);

        printf("the bill you need to pay :- %f \n\n",fi);
        
         float gst12=fi*0.05;
         
        float fgst12=gst12+fi;
         printf("If you entre your moblie number than you can get 5 percent discount on final amount \nif your does not want to entre the tpye 0 \n\n\n");
  
  //moblie  
    long long int number;

    scanf("%lld",&number);

    if (number==0)
    {
        printf("amount of 5 percentage gst :- %f\n\n\n",gst12);

    printf("final bill you had to pay :- %f\n\n\n",fgst12);
    }
    else
    {
        float num1=fi*0.05;

        float fkm0025=fi-num1;
        
        float ggst314=fkm0025*0.05;
        float fggst105=ggst314+fkm0025;

        printf("discounted amount as you entred your number :- %f\n\n\n",num1);

        printf("After applying all the discount the final amount you want to pay is :- %f\n\n\n",fkm0025);
    
        printf("amount of 5 percentage gst :- %f\n\n\n",ggst314);

    printf("final bill you had to pay :- %f\n\n\n",fggst105);

   
    }
        
       
    
    }
    else
    {
        printf("invalid promo code \n");
        
 
          float gst2=famount*0.05;
          
         
        float fgst2=gst2+famount;
        
    
        printf("If you entre your moblie number than you can get 5 percent discount on final amount \nif your does not want to entre the tpye 0 \n\n\n");
  
  //moblie  
    long long int number;

    scanf("%lld",&number);

    if (number==0)
    {
       printf("amount of 5 percentage gst :- %f\n\n\n",gst2);

    printf("final bill you had to pay :- %f\n\n\n",fgst2);
    }
    else
    {
        float num15=famount*0.05;

        float fm024=famount-num15;
        
        float ggsst314=fm024*0.05;
        float fggst105=ggsst314+fm024;

        printf("discounted amount as you entred your number :- %f\n\n\n",num15);

        printf("After applying all the discount the final amount you want to pay is :- %f\n\n\n",fm024);
    
        printf("amount of 5 percentage gst :- %f\n\n\n",ggsst314);

    printf("final bill you had to pay :- %f\n\n\n",fggst105);

   
    }
    

    }

    }
    else
    {
        printf("20 Percent Available Discount\n\n\n");

      float  dm1=rupees*0.20;

        float famount1=rupees-dm1;

        printf("The total discounted prices:- %f\n\n\n",dm1);

printf("The total prices after discount :- %f\n\n\n",famount1);

    
    float gst13=famount1*0.05;


    float fm14=gst13+famount1;
    
    printf("If have any promocode, then pls entre and get 20 percentage discount \n\n");
   
    char cp;

    scanf(" %c",&cp);
    float dik=famount1*0.20;

        float fik1=famount1-dik;

    if (cp=='c')
    

    { 
        float dik=famount1*0.20;

        float fik1=famount1-dik;
        printf("discount price of promo card :- %f\n\n",dik);

        printf("the bill you need to pay :- %f\n\n",fik1);

        float gst3=fik1*0.05;
        float fgst13=gst3+fik1;
       

    printf("If you entre your moblie number than you can get 5 percent discount on final amount \nif your does not want to entre the tpye 0 \n\n\n");
  
  //moblie  
    long long int number;

    scanf("%lld",&number);

    if (number==0)
    {
        printf("amount of 5 percentage gst :- %f\n\n\n",gst3);

    printf("final bill you had to pay :- %f\n\n\n",fgst13);
    }
    else
    {
        float num=fik1*0.05;

        float fk025=fik1-num;
        
        float gst314=fk025*0.05;
        float fgst105=gst314+fk025;

        printf("discounted amount as you entred your number :- %f\n\n\n",num);

        printf("After applying all the discount the final amount you want to pay is :- %f\n\n\n",fk025);
    
        printf("amount of 5 percentage gst :- %f\n\n\n",gst314);

    printf("final bill you had to pay :- %f\n\n\n",fgst105);

   
    }
    

    }
    else
    {
        printf("invalid promo code \n");
         
       printf("If you entre your moblie number than you can get 5 percent discount on final amount \nif your does not want to entre the tpye 0 \n\n\n");
  
  //moblie  
    long long int number;

    scanf("%lld",&number);
     float gst13k=famount1*0.05;


    float fm184=gst13+famount1;
    

    if (number==0)
    {
        printf("amount of 5 percentage gst :- %f\n\n\n",gst13k);

    printf("final bill you had to pay :- %f\n\n\n",fm184);
    }
    else
    {
      float num2=famount1*0.05;

        float fk025p=famount1-num2;
        
        float gst314l=fk025p*0.05;
        float fgst105p=gst314l+fk025p;

        printf("discounted amount as you entred your number :- %f\n\n\n",num2);

        printf("After applying all the discount the final amount you want to pay is :- %f\n\n\n",fk025p);
    
        printf("amount of 5 percentage gst :- %f\n\n\n",gst314l);

    printf("final bill you had to pay :- %f\n\n\n",fgst105p);

   
    }

   
    }
    
    
}
}

    return 0;
}