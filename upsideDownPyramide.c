#include <stdio.h>
#include <stdlib.h>

#define inferior_limit 3
#define superior_limit 20

void upsideDownTriangle(int rows);
int readingRows();
int validating_Rows(int rows);

int main()
{

    int TRIANGLE_DIM = readingRows();
    upsideDownTriangle(TRIANGLE_DIM);

    return 0;
}

int readingRows()
{
    int number;
    printf("Enter rows%d and %d: ", inferior_limit, superior_limit);
    scanf("%d", &number);
    while(!validating_Rows(number))
    {
        printf("Error. Enter again: ");
        fflush(stdin);
        scanf("%d", &number);
    }
    return number;
}

int validating_Rows(int rows)
{
    return rows >= inferior_limit && rows <= superior_limit;
}

void upsideDownTriangle(int rows)
{
    int counterSpaces = 0;
    int i = 0;
    int counterSymbols = 0;

    for(i = 0; i < rows; i++)
    {
        for(int j = 0; j < counterSpaces; j++)
        {
            printf("%c", ' ');
        }
        
        
        for(int j = 0; j < counterSymbols; j++)
        {
            printf("%d ", rand()%5 + 1);
        }
         
        counterSpaces++;
        counterSymbols = rows - counterSpaces;
        printf("\n");
    }

}
