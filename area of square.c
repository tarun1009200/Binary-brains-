#include<conio.h>
#include<stdio.h>
void main()
{
    int side,area;
    printf("enter the side of the square:");
    scanf("%d",&side);
    area=side*side;
    printf("area of the square is %d ",area);
    getch();
}