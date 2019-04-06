#include <stdio.h>
int main()
{
    int processCount;
    int resourcesCount;

    printf("\nEnter the number process: ");
    scanf("%d", &processCount);
    printf("\nEnter the number resources: ");
    scanf("%d", &resourcesCount);

    if (processCount > 6 || processCount < 1)
    {
        printf("\nProcess must be less than 6 and greter than 0!");
    }
    if (processCount > 4 || resourcesCount < 1)
    {
        printf("\nResources must be less than 4 and greter than 0!");
    }

    int allocArray[processCount][resourcesCount];
    int maxArray[processCount][resourcesCount];
}