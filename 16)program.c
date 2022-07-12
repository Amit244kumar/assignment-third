int main()
{
    char n;
    printf("Enter the something:");
    scanf("%c",&n);
    if(n>=65 && n<=90)
    {
        printf("The \'%c\' is a character in uppercase",n);
    }
    else if(n>=97 && n<=122){
        printf("The \'%c\' is a character in lowercase",n);
    }
    else if(n>=48 && n<=57){
        printf("The \'%c\' is a digit",n);
    }
    else{
        printf("The \'%c\' is a special character",n);
    }
    getch();
    return 0;
}
