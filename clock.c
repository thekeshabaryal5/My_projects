//watch in 24hrs format along with date.
#include<stdio.h>
#include<windows.h>
char *week_day(int );
char *_month(int);
int main(void)
{
    int year,month,day,weekday,hour,minute,second,del=1000;
    system("color 75");
    top:
    printf("\n\t\tEnter the current date and time:\n");
    printf("\t\t(enter all details in number(digit)) \n");
    printf("Year(BS): ");
    scanf("%d",&year);
    printf("Month: ");
    scanf("%d",&month);
    printf("Day: ");
    scanf("%d",&day);
    printf("Week day: ");
    scanf("%d",&weekday);
    printf("Hours: ");
    scanf("%d",&hour);
    printf("Minute: ");
    scanf("%d",&minute);
    printf("Seconds: ");
    scanf("%d",&second);
    if((year<1)||(month>12)||(month<1)||(day>30)||(day<1)||(weekday>7)||(weekday<1)||(hour>24)||(hour<0)||(minute>59)||(minute<0)||(second>59)||(second<0))
    {
        printf("\n\t\t\t\"Invalid Date or Time\"\n\n");
        printf("\n\t\t\tPlease enter the correct date or time:\n\n");
        goto top;

    }
    while(1)
    {
        second++;
        if(second>59)
        {
            second=0;
            minute++;
        }
        if(minute>59)
        {
            minute=0;
            hour++;
        }
        if(hour>23)
        {
            hour=0;
            day++;
            weekday++;
        }
        if(day>30)
        {
            day=1;
            month++;

        }
        if(weekday>7)
        {
            weekday=1;
        }
        if(month>12)
        {
            year++;
            month=1;
        }

        printf("\n\n\t\t\tCurrent Date & Time:\n\n");
        printf("\t\t\t%d %s %d\n",year,_month(month),day);
        printf("\t\t\t%s\n",week_day(weekday));
        printf("\n\t\t\t%02d:%02d:%02d\n",hour,minute,second);
        if(month==1 && day==1)
        {
            printf("\n\t\t\tHappy New Year %d!!!\n\n",year);
        }
        if(month==8 && day==23)
        printf("\n\t\t\tHappy Birthday keshab!!\n");
        Sleep(del);
        system("cls");
    }
    return 0;
}
char *week_day(int weekday)
{
    switch(weekday)
    {
        case 1:
        return "Sunday";
        break;
        case 2:
        return "Monday";
        break;
        case 3:
        return "Tuesday";
        break;
        case 4:
        return "Wednesday";
        break;
        case 5:
        return "Thursday";
        break;
        case 6:
        return "Friday";
        break;
        case 7:
        return "saturday";
    }
}
char *_month(int month)
{
    switch(month)
    {
        case 1:
        return "Baishakh";
        break;
        
        case 2:
        return "Jestha";
        break;
        case 3:
        return "Ashadh";
        break;
        case 4:
        return "Shrawan";
        break;
        case 5:
        return "Bhaadra";
        break;
        case 6:
        return "Ashwin";
        break;
        case 7:
        return "Kaartik";
        break;
        case 8:
        return "Mangshir";
        break;
        case 9:
        return "Paush";
        break;
        case 10:
        return "Maagh";
        break;
        case 11:
        return "Faalgun";
        break;
        case 12:
        return "Chaitra";
        break;

    }
}