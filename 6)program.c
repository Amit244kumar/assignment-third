int main()
{
    int n,r;
    printf("Enter two numbers");
    scanf("%d%d",&n,&r);
    if(n>=r)
    {
        printf("The greater number is %d",n);
    }
    else{
        printf("The greater number is %d",r);
    }
    getch();
    return 0;
}
