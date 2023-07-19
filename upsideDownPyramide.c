#include <stdio.h>
#include <stdlib.h>

#define inferior_limit 7
#define superior_limit 20

void upsideDownTriangle(int entering_Dimension);
int readingDimension();
int validating_Dimension(int entering_Dimension);

int main()
{

    //The program allows to create an upside down triangle filled with random numbers between 1 and 5.
    int TRIANGLE_DIM = readingDimension();
    upsideDownTriangle(TRIANGLE_DIM);

    return 0;
}

int readingDimension()
{
    int number;
    printf("Enter triangle dimension between %d and %d\n", inferior_limit, superior_limit);
    scanf("%d", &number);
    while(!validating_Dimension(number))
    {
        printf("Error. Enter again: ");
        fflush(stdin);
        scanf("%d", &number);
    }
    return number;
}

int validating_Dimension(int entering_Dimension)
{
    return entering_Dimension >= inferior_limit && entering_Dimension <= superior_limit;
    //We make sure that the dimension entered is in the right range of values to be entered.
}

void upsideDownTriangle(int entering_Dimension)
{
    char space = ' '; 
    int i = 0;
    int left_spaces_counter = i;
    int right_spaces_counter = entering_Dimension - i - 1;

    for(i = 0; i < entering_Dimension/2; i++)
    {
        for(int j = 0; j < left_spaces_counter; j++)
        {
            printf("%c", space);
        }
        //The loop prints spaces to the left of the triangle.
        
        for(int j = left_spaces_counter; j < right_spaces_counter; j++)
        {
            printf("%d", rand()%5 + 1);
        }
        //Pringing random numbers forming the triangle.
        
        for(int j = right_spaces_counter; j < entering_Dimension; j++)
        {
            printf("%c", space);
        }
        //The loop prints spaces to the right of the triangle.
        
        left_spaces_counter++; 
        right_spaces_counter--; 
        printf("\n");
    }

}
