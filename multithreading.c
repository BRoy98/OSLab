#include <stdio.h>

void printPrimeNumbers(int count)
{
    int printCount = 0;
    int num = 1;
    int i;
    while (printCount < count)
    {
        num++;
        for (i = 2; i <= num - 1; i)
        {
            if (num % i == 0)
                break;
            i++;
        }
        if (i >= num - 1)
        {
            printf("%d ", num);
            count++;
        }
    }
    printf("\n");
}

int main()
{
    int numCount;

    printf("Enter the number of prime numbers you want to print: ");
    scanf("%d", &numCount);

    if (numCount < 1)
    {
        printf("You must enter a value greater than 1");
        return 1;
    }
    printf("First %d prime numbers are: ", numCount);
    printPrimeNumbers(numCount);
}