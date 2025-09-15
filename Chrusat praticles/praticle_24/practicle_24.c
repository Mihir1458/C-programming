#include<stdio.h>
int main()
{ 
     char other[500];
      char temp ;   char merge[1000];
     int cp,cp2;  
    char merge1[500];
     char merge2[500];
     char snec[1000];
     char casnec[1000];
     int i;
      char copy[500];
    int l;
     
    char snec1[1000];
     char casnec1[1000];
     
     char note[1000];
  char sencfc2[1000];
    int cho;
     char length[500];
    int lg=0;
    printf("Entre the Sentence :-\n");
    scanf("%s",&length);
    do{
    printf("\n \nwhat task do you want execute :- \n 1. Find the length of strings \n 2. Wants to reverse the string \n 3. Compare string \n 4. Copy the string \n 5.merge two strings \n 6. Capital all the string \n 7. Lower case whole string \n 8. Upercase all first letter of word \n Entre '0' to end the task \n");
   scanf("%d",&cho);
   
    switch (cho)
    {
    case 1:    
   
    for(int i=0; length[i]!='\0';i++)
    {
        lg++;
    }
    
    printf("\n the length is :- %d",lg);
    break ;
   

    case 2:
    for(int i=0; length[i]!='\0';i++)
    {
        lg++;
    }
    for(int k=0;k<=lg/2;k++)
    {
      
        temp= length[k];
     length[k]=length[lg-k-1];
       length[lg-k-1]=temp;
    }
    printf("\n");
      length[lg]='\0';
      for(int i=0; length[i]!='\0';i++)
    {
        printf("    %c",length[i]);
    }
       break ;
   

    case 3:
    
   
    printf("\nentre the string:-");
    scanf("%s",&other);
  
  
       for (i = 0; length[i] != '\0' && other[i] != '\0'; i++) {
        if (length[i] != other[i]) {
            break; 
        }
    }
    if (length[i] == other[i]) {
        printf("0 s\n"); 
    } else {
        printf("1 d\n"); 
    }

    break ;
    

  case 4:
  
   


    for(l=0;length[l] != '\0';l++)
    {
        copy[l]=length[l];
       
    }
    copy[l]='\0';
    printf("%s", copy);
    break ;
     


     case 5:
     
     printf("Entre the string first :- ");
     scanf("%s",&merge1);
     
     printf("Entre the string second :- ");
     scanf("%s",&merge2);
   
     for(cp=0;merge1[cp]!='\0';cp++)
     {
        merge[cp]=merge1[cp];
     }
    
     for(cp2=cp;merge2[cp2-cp]!='\0';cp2++)
     {
        merge[cp2]=merge2[cp2-cp];
     }
     merge[cp2]='\0';
     printf("Joint is :- %s",merge);
break; 
   
     

    case 6:
    
     
     printf("Entre the sentence :- ");
     scanf("%s",&snec);
     
       for(i=0;snec[i]!='\0';i++)
       {
        if(snec[i]>='a'&&snec[i]<='z')
        {
        casnec[i]=snec[i]-32;
       }
       else {
        casnec[i]=snec[i];
       }
    }
       casnec[i]='\0';
       printf("%s",casnec);
       break;
 

    case 7:
     
     printf("Entre the sentence :- ");
     scanf("%s",&snec1);
       for(i=0;snec1[i]!='\0';i++)
       {
        if(snec1[i]>='A'&&snec1[i]<='Z')
        {
        casnec1[i]=snec1[i]+32;
       }
       else {
        casnec1[i]=snec1[i];
       }
       }
       casnec1[i]='\0';
       printf("%s",casnec1);
   break;
   
  case 8:
 
  printf("Entre the sentence :-");
  scanf("%s", &note);
  

        
  int newWord = 1;
    for (int i = 0; note[i] != '\0'; i++) {
        if (note[i] == ' ') {
            newWord = 1;
        } else {
            if (newWord == 1 && note[i] >= 'a' && note[i] <= 'z') {
                note[i] = note[i] - 32;
            } else if (newWord == 0 && note[i] >= 'A' && note[i] <= 'Z') {
                note[i] = note[i] + 32;
            }
            newWord = 0;
        }
    }
}
        
  
   break;
    }while(cho !=0);
    
    return 0;
    }
