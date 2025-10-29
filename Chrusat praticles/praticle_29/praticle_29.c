#include<stdio.h>
#include<string.h>
struct teamdetails
{
    char teamname[100];
    char sporttype[100];
    char coachname[100];
    int coachage;
    int coachexp;
};
int main()
{ int k,tn=1;
    char check[100];
        int res=0;
    struct teamdetails TEAM[100];     
    while (1)
    {
    printf("===== CHARUSAT Sports Management System =====\n");
    printf("1. Add New Team\n2. Search Team by Name\n3. Display All Teams\n4. Exit");
    printf("\nEntre your choice :- ");
   
    scanf("%d",&k);
    getchar();
        switch (k)
        {
        case 1:
        printf("Enter Team Name: ");
        fgets(TEAM[tn].teamname,sizeof(TEAM[tn].teamname),stdin);
         TEAM[tn].teamname[strcspn(TEAM[tn].teamname, "\n")] = 0;
        
        printf("Enter Sport Type: ");
        fgets(TEAM[tn].sporttype,sizeof(TEAM[tn].sporttype),stdin);
         TEAM[tn].sporttype[strcspn(TEAM[tn].sporttype, "\n")] = 0;
        
         printf("Enter Coach Name: ");
        fgets(TEAM[tn].coachname,sizeof(TEAM[tn].coachname),stdin);
         TEAM[tn].coachname[strcspn(TEAM[tn].coachname, "\n")] = 0;
        
        printf("Entre Coach Age: ");
        scanf("%d",&TEAM[tn].coachage);
        getchar();
        printf("Enter Coach Experience (in years): ");
        scanf("%d",&TEAM[tn].coachexp);
        printf("Team added successfully!\n----------------------------------------------------------------\n");
        tn++;
      
        break;
        case 2:
        
        printf("Entre team name:-");
         fgets(check,sizeof(check),stdin);
         check[strcspn(check,"\n")] = 0;   
         for(int j=1;j<tn;j++)
         {
          res=strcmp(TEAM[j].teamname,check);
          if (res==0)
          {
            printf("Team NO :- %d\n",j);
            printf("Team Name :- %s\n",TEAM[j].teamname);
            printf("Sport Name :- %s\n",TEAM[j].sporttype);
            printf("Coach Name :- %s\n",TEAM[j].coachname);
            printf("Coach age :- %d\n",TEAM[j].coachage);
            printf("Coach Experience (in years):- %d\n",TEAM[j].coachexp);
            printf("Found the TEAM............\n");
            break; 
          }
         }

                
        break;
        case 3:
        for(int p=1;p<tn;p++)
        {
            printf("Team NO :- %d\n",p);
            printf("Team Name :- %s\n",TEAM[p].teamname);
            printf("Sport Name :- %s\n",TEAM[p].sporttype);
            printf("Coach Name :- %s\n",TEAM[p].coachname);
            printf("Coach age :- %d\n",TEAM[p].coachage);
            printf("Coach Experience (in years):- %d\n",TEAM[p].coachexp);
            printf("----------------------------------------------------------------\n");

        }
        break;

        case 4:
        printf("\nthank you...........");
        return 0;

        default: printf("\n Invalid input");
            break;
        }
    }
    return 0;
    
}
