#include <stdio.h>

void reverseAndPrint(int num) 
{
    if (num == 0) 
    {
        return;
    }

    printf("%d", num % 10);
    reverseAndPrint(num / 10);
}

int main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Reversed number: ");
    reverseAndPrint(num);
    printf("\n");

    return 0;
}
