int main()
{
    for(int i=1;i<=9;i++)
    {

    for(int j=1;j<=9;j++)
    {  if(i<=4)
    {
        if(j<=i || j>=10-i)
            printf("*");
        else
            printf(" ");


    }
     if(i>4)
    {
        if(j<=10-i || j>=i)
            printf("*");
        else
            printf(" ");


    }
    }
    printf("\n");
        }

}
