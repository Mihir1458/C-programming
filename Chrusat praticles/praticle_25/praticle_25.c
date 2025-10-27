#include<stdio.h>
#include<string.h>
#define tmax 100
char lib[tmax];

void display()
{
{
strcpy(lib[0],"book first");
strcpy(lib[1],"book second");
strcpy(lib[2],"book third");
strcpy(lib[3],"book fourth");
strcpy(lib[4],"book fifth");
}
    printf("_______________Library_______________\n");
    for(int i=0;i<=tmax;i++)
    {
        if(lib[i]=='\0')
        {
            break;
        }
        else {
            printf("%d :-  %s\n",i,lib[i]);
        }
    }
}
int main()
{

void display();
return 0;
}