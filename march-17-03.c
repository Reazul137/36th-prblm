#include<stdio.h>
int main()
{
    int password, x=10;

    while( x != 0)
    {
    {
        printf("Input the password : ");
        scanf("%d",&password);
    }

    if( password == 1234)
    {
        printf("Correct password! :) ");
        x = 0;
    }
    else
    {
        printf("Wrong password! :( try again!! ");
    }
    printf("\n");
    }

    return 0;
}
