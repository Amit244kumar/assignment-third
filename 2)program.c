int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%5)
    {
        printf("The %d is not divisible by 5",n);
    }
    else{
        printf("The %d is divisible by 5",n);
    }
    getch();
    return 0;
}
