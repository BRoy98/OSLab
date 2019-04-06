#include <stdio.h>

int processCount;
int resourcesCount;

int printTitle()
{
    system("clear");
    printf("\n\n..----------------------..\n");
    printf("||  Banker's Algorithm  ||\n");
    printf("||______________________||\n");
}

int takeInput()
{

    printTitle();
    printf("\nEnter the number process: ");
    scanf("%d", &processCount);
    printf("\nEnter the number resources: ");
    scanf("%d", &resourcesCount);

    if (processCount > 6 || processCount < 3)
    {
        printf("\nProcess must be in between 3 and 6!");
    }
    if (processCount > 4 || resourcesCount < 3)
    {
        printf("\nResources must be in between 3 and 4!");
    }
}

int main()
{
    takeInput();

    int allocArray[processCount][resourcesCount];
    int maxArray[processCount][resourcesCount];

    for (int a = 0; a < processCount; a++)
    {
        printTitle();
        printf("\nEnter Process %d Values -> \n", a + 1);
        for (int b = 0; b < resourcesCount; b++)
        {
            // printf("\n");
            // scanf("%d", &processCount);
        }
    }
}