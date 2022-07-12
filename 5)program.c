int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n)
    {
        n/=10;
        if(n)
        {
            n/=10;
            if(n)
            {
                n/=10;
                if(n==0)
                {
                    printf("The number is three digit");
                }
                else{
                    printf("The number is not three digit");
                }
            }
            else{
                printf("The number is not three digit");
            }

        }else{
            printf("The number is not three digit");
        }
    }else{
       printf("The number is not three digit");
    }

    getch();
    return 0;
}
