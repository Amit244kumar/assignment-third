int main()
{
    int CP=60,SP=40;
    float prInPer,lsInPer,profit,loss;
    printf("Enter the cost price:");
    scanf("%d",&CP);
    printf("Enter the selling price:");
    scanf("%d",&SP);
    if(CP>SP)
    {
        //Cost price is greater than selling price
        loss=CP-SP;
        lsInPer=loss/CP*100;
        printf("The loss in percentage is %f",lsInPer);
    }
    else if(CP<SP)
    {
        //Selling price is greater than cost price
        profit=SP-CP;
        prInPer=(profit/CP)*100;
        printf("The profit in percentage is %f",prInPer);

    }
    else{
        //Selling price and Cost price are same
        printf("The selling price and cost price both are same no profit no loss");
    }
    getch();
    return 0;
}
