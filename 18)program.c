int main()
{
    int m;
    printf("Enter the month number:");
    scanf("%d",&m);
    if(m==2)
    {
        printf("The month has 28 days");
    }
    else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        printf("The month has 31 days");
    }
    else{
        printf("The month has 30 days");
    }
    getch();
    return 0;
}
