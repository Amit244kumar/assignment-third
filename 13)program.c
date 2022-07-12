int main()
{
    int n;
    printf("Enter the numebr:");
    scanf("%d",&n);
    if(n%3==0 && n%2==0)
    {
        printf("The number is divisible by 3 and 2");
    }
    else{
        printf("The number is not divisible");
    }
    getch();
    return 0;
}
