int main()
{
    int side1,side2,side3;
    printf("Enter the triangle sides:");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1+side2<side3){
        printf("The invalid triangle");
    }else if(side1+side3<side2){
         printf("The invalid triangle");
    }else if(side2+side3<side1){
       printf("The invalid triangle");
    }
    else{
        printf("The valid triangle");
    }
    getch();
    return 0;
}
