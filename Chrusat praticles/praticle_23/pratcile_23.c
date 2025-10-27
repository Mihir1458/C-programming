#include<stdio.h>
int profitmax(int arr[],int n)
{
    int max,min;
     arr[0]=min;
    max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=min)
        {
           
            min=arr[i];
        
        }
        else
        {
            int pmax=arr[i]-min;
            if(pmax>=max)
            {
                max=pmax;
            }
        }
    }
return max;
}

int main()
{
    int f1[]={20, 25, 15, 30,10, 50};
    int fs=sizeof(f1)/sizeof(f1[0]);
    printf("Max profit is :- %d\n",profitmax(f1,fs));
    int f2[]={10, 8, 6, 4, 2};
    int fs1=sizeof(f2)/sizeof(f2[0]);
    printf("Max profit is :- %d\n",profitmax(f2,fs1));
    int f3[]={100, 180, 260, 310, 40, 535,695};
    int fs2=sizeof(f3)/sizeof(f3[0]);
    printf("Max profit is :- %d\n",profitmax(f3,fs2));
    int f4[]={30, 20, 25, 40, 25, 50, 35};
    int fs3=sizeof(f4)/sizeof(f4[0]);
    printf("Max profit is :- %d\n",profitmax(f4,fs3));
    int f5[]={5, 5, 5, 5, 5};
    int fs4=sizeof(f5)/sizeof(f5[0]);
    printf("Max profit is :- %d\n",profitmax(f5,fs4));
    
    return 0;
}