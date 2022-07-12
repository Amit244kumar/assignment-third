int main()
{
    char n;
    printf("Enter the character:");
    scanf("%c",&n);
    if(n>=65 && n<=90)
    {
        printf("The  \'%c\' character is in uppercase",n);
    }
    else if(n>=97 &&n<=122){
        printf("The \'%c\' character is in lowercase",n);
    }
    getch();
    return 0;
}
