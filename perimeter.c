include<stdio.h>
include<conio.h>
void main()
{
    float l,b,p;
    printf("enter the length:");
    scanf("%f",&l);
    printf("enter the breadth:");
    scanf("%f",&b);
    p=2*(l+b);
    printf("the perimeter is %f",p);
    getch();
}