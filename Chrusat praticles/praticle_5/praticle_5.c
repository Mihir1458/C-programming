#include<stdio.h>

float main()
{
    float population= 1441981744 ;
    float totalwomen=population*0.484;
    float totalmen=population-totalwomen;
    float overallliteracy=population*0.8595;
    float overallillliteracy=population-overallliteracy;
    float menliteracy=population*0.8095;
    float menillliteracy=population-menliteracy;
    float womenliteracy=population*0.6284;
    float womenillliteracy=population-womenliteracy;
    printf ("********************************************************************************\n");
     printf("\t\t all values  in float \n");
     printf ("********************************************************************************\n");
    printf("The total population :- %f  \t \n",population);
    printf("The total women :- %f \t \n",totalwomen);
    printf("The total men :- %f  \t \n",totalmen);
    printf("The total literate population :- %f  \t \n",overallliteracy);
    printf("The total non-literate population :- %f  \t \n",overallliteracy);
    printf("The total non-literate population :- %f  \t \n",overallillliteracy);
    printf("The total men literate population :- %f  \t \n",menliteracy);
    printf("The total men non-literate population :- %f  \t \n",menillliteracy);
    printf("The total women literate population :- %f  \t \n",womenliteracy);
    printf("The total women non-literate population :- %f  \t \n",womenillliteracy);
 printf ("********************************************************************************\n");

 
    return 0;
}
                               // in int datatype

/*

int main()
  {   
    int population= 1441981744 ;
    int totalwomen=population*0.484;
    int totalmen=population-totalwomen;
    int overallliteracy=population*0.8595;
    int overallillliteracy=population-overallliteracy;
    int menliteracy=population*0.8095;
    int menillliteracy=population-menliteracy;
    int womenliteracy=population*0.6284;
    int womenillliteracy=population-womenliteracy;

    printf ("********************************************************************************\n");
     printf("\t\t all values  in float \n");
     printf ("********************************************************************************\n");
    
    printf("The total population :- %d  \t \n",population);
    printf("The total women :- %d \t \n",totalwomen);
    printf("The total men :- %d  \t \n",totalmen);
    printf("The total literate population :- %d  \t \n",overallliteracy);
    printf("The total non-literate population :- %d  \t \n",overallliteracy);
    printf("The total non-literate population :- %d  \t \n",overallillliteracy);
    printf("The total men literate population :- %d  \t \n",menliteracy);
    printf("The total men non-literate population :- %d  \t \n",menillliteracy);
    printf("The total women literate population :- %d  \t \n",womenliteracy);
    printf("The total women non-literate population :- %d  \t \n",womenillliteracy);
    return 0;
  }
*/
