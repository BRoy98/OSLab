#include <stdio.h>
#include <pthread.h>

void *printPrimeNumbers(int count)
{
    int printCount = 0;
    int num = 1;
    int i;
    while (printCount < count)
    {
        num++;
        for (i = 2; i <= num - 1; i++)
        {
            if (num % i == 0)
                break;
        }
        if (i >= num - 1)
        {
            printf("%d ", num);
            printCount++;
        }
    }
    printf("\n\n");
}

int main()
{
    int numCount;

    printf("\nEnter the number of prime numbers you want to print: ");
    scanf("%d", &numCount);

    if (numCount < 1)
    {
        printf("You must enter a value greater than 1");
        return 1;
    }
    printf("\nFirst %d prime numbers are: ", numCount);

    pthread_t primeThread;
    pthread_create(&primeThread, NULL, &printPrimeNumbers, numCount);
    pthread_join(primeThread, NULL);
}