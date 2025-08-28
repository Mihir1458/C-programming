#include<stdio.h>
int main()
{
    int num=0,posi=0,nega=0,ev=0,odd=0;
    printf("how mny many number do you want to input:-");
    scanf("%d",&num);
    int nums[num];
    for(int i=0;i<num;i++)
    {
        printf("plz entre the number:-");
        scanf("%d",&nums[i]);
    }
    for (int k=0;k<num;k++)
    {
        if(nums[k]<0)
        {
            nega++;
        }
        else if (nums[k]>=0)
        {
            posi++;
        }
         if(nums[k]%2==0)
        {
            ev++;
        
        }
        else 
        {
            odd++;
        }
    }
    printf("****************************\n\tFinal evaulted values\n *****************************\n ");
    printf("total negaitive numbers :- %d \n",nega);
    printf("total positive numbers :- %d\n",posi);
    printf("total even numbers :- %d\n",ev);
    printf("total odd numbers :- %d \n",odd);
    return 0;
}