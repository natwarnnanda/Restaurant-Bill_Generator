#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    int q[10],i,j,x;
    float r[10],p[10],t=0;
    char n[10][25];
    printf("\n Welcome to cafe point \n");
    for(i=1;i<=10;i++)
    {
        gets(n[i]);
        printf("\n Enter product name :- ");
        gets(n[i]);
        printf("\n Enter Quantity :- ");
        scanf("%d",&q[i]);
        printf("\n Enter Rate :- ");
        scanf("%f",&r[i]);
        p[i]=r[i]*q[i];
        j=i;
        t=t+p[i];
        printf("\n Enter 1 to Add more OR Enter 0 to make bill : ");
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
    }

    printf("\n \t                         MY CAFE                   ");
    printf("\n \t                Kiit University, Bhubaneswar          ");
    printf("\n\n \t -------------****************************--------------");
    printf("\n \t Product  \t\t Qty \t Rate \t\t Price ");

    for(i=1;i<=j;i++)
    {
        printf("\n\t %s \t\t   %d \t %0.2f \t %0.2f",n[i],q[i],r[i],p[i]);

    }
    
    printf("\n\n \t\t\t\t\t\t Total :- %0.2f",t);
    printf("\n\n \t -------------****************************--------------");
    printf("\n\n Thank you visit again ");
}