#include<stdio.h>

int firstdayinyear(int year)
{
    int day=(year+(year-1)/4-(year-1)/100+(year-1)/400)%7;
    return day;
}



int main()
{
    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int daysinmonths[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int spaceCounter=0;
    int weekday=0;
    int year;
    printf("Enter year : ");
    scanf("%d",&year);
    weekday=firstdayinyear(year);
    
    printf("***************Welcome to year %d*****************",year);

    if((year%4==0 && year%100!=0)||(year%400==0))
    {
        daysinmonths[1]==29;
    }
    
    for(int i=0;i<12;i++)
    {
        printf("\n\n   ===============%s=================\n",month[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");
        
        

        for(spaceCounter=1;spaceCounter<=weekday;spaceCounter++)
        {
            printf("      ");
        }

        int totaldays=daysinmonths[i];
        for(int j=1;j<=totaldays;j++)
        {
            printf("%6d",j);
            weekday++;
            if(weekday>6)
            {
                weekday=0;
                printf("\n");
            }
        }
    }

    return 0;
}