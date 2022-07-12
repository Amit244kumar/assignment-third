int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
    {
        printf("The number is divisible");
    }
    else{
         printf("The number is not divisible");
    }
    getch();
    return 0;
}
