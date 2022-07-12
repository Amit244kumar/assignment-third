int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n&1)
    {
        printf("The %d is odd",n);
    }
    else{
        printf("The %d is even",n);
    }
    getch();
    return 0;
}
