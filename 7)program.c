int main()
{
    int a,b,c,d;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("The Determinant is %d which is real & distinct root",d);
    }
    else if(d<0){
        printf("The Determinant is %d which is imaginary roots",d);
    }
    else{
        printf("The Determinant is %d which is equal root",d);
    }
    getch();
    return 0;
}
