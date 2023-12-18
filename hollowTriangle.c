#include <stdio.h>

void triangle(int rows, char symbol);

int main()
{
    char symbol = '$';
    int rows = 7;
    triangle(rows, symbol);

    return 0;
}

void triangle(int rows, char symbol)
{
    int spaces = rows;
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        
        if(i == 0)
        {
            printf("%c", symbol);
            
        }else if(i == rows - 1){
            
                for(int j = 0; j < rows; j++)
                {
                    printf("%c ", symbol);
                }
                
          }else{
                
                printf("%c", symbol);
                
                for(int j = 0; j < rows - spaces - 1 + i; j++)
                {
                    printf(" ");
                }
                
                printf("%c", symbol);
                
            }
        spaces--;
        printf("\n");
    }
}
