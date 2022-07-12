int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%100)
    {
        if(year%4){
            printf("The %d year is not leap year",year);
        }
        else{
            printf("The %d year is leap year",year);
        }
    }
    else{
        if(year%400){
            printf("The %d year is not leap year",year);
        }
        else{
            printf("The %d year is leap year",year);
        }
    }

    getch();
    return 0;
}
