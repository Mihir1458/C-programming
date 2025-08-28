#include<stdio.h>
int main()
{
    int i,k,sum=0,sums=0;
    printf("how many total id's are there :-");
    scanf("%d",&i);
     int ids[i-1];

    printf("list out those id's which are entred %d:-",i-1);

    for (k=1;k<=i-1;k++){
        
    scanf("%d",&ids[k]);
    sum += ids[k];
           
}
    
sums=i*(i+1)/2;


    printf("miss is is %d",sums-sum);
    return 0;
}