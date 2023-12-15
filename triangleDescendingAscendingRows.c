#include <stdio.h>

void triangleNumbers(int nRows);
void showSpaces(int spaces);
void writeRow(int i, int nRows);

int main()
{
    int numberOfRows = 10;
    triangleNumbers(numberOfRows);

    return 0;
}

void triangleNumbers(int nRows)
{
    int spaces = nRows - 1;
    for(int i = 0; i < nRows; i++)
    {
        showSpaces(spaces);
        writeRow(i, nRows);
        spaces--;
        printf("\n");
    }
}

void showSpaces(int spaces)
{
    for(int i = 0; i < spaces; i++)
    {
        printf("%c ",' ');
    }
}

void writeRow(int i, int nRows)
{
    int n = 2*i + 1;
    int counter = 0;
    for(int i = 0; i <= n/2; i++)
    {
        printf("%d ", i + 1);
        counter++;
    }
    for(int i = counter; i > 1; i--)
    {
        printf("%d ", i - 1);
    }
}
