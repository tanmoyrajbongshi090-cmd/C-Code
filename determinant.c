#include<stdio.h>
#include<conio.h>
int main(void)
{
    int x=2;
    float y=2;
    printf("\n size of (x)=%d bytes", x);
    printf("\n size of (y)=%f bytes", y);
    printf("address of x=%u and y=%u",&x,&y);
    getch ();
}