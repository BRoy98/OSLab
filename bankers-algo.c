#include <stdio.h>

int processCount;
int resourcesCount;
char prsVals[4] = "ABCD";

#define ANSI_BG_BLUE "\x1b[44;1m"
#define ANSI_BG_RED "\x1b[41;1m"
#define ANSI_BG_BLACK "\x1b[40;1m"

int printTitle()
{
    system("clear");
    printf(ANSI_BG_BLUE "\n\n                            \n");
    printf("     Banker's Algorithm     \n");
    printf("                            \n" ANSI_BG_BLACK);
}

int takeInput()
{
    printTitle();
    printf("\nEnter the number process: ");
    scanf("%d", &processCount);
    printf("Enter the number resources: ");
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
        printf(ANSI_BG_RED "                            \n");
        printf("          Allocation        \n");
        printf("                            \n" ANSI_BG_BLACK);
        printf("\nEnter Process %d (P%d) Values  \n\n", a, a);
        for (int b = 0; b < resourcesCount; b++)
        {
            printf("%c: ", prsVals[b]);
            scanf("%d", &allocArray[a][b]);
        }
    }

    for (int a = 0; a < processCount; a++)
    {
        printTitle();
        printf(ANSI_BG_RED "                            \n");
        printf("             MAX            \n");
        printf("                            \n" ANSI_BG_BLACK);
        printf("\nEnter Process %d (P%d) Values  \n\n", a, a);
        for (int b = 0; b < resourcesCount; b++)
        {
            printf("%c: ", prsVals[b]);
            scanf("%d", &allocArray[a][b]);
        }
    }
}