#include <stdio.h>

void arrowShaped_Triangle(int rows);
void printLine(int stop);

int main()
{
    
    int rows = 14;
    
    arrowShaped_Triangle(rows);

    return 0;
}

void arrowShaped_Triangle(int rows)
{
    int i;
    
    int decrease = rows/2;
    
    for(i = 0; i < rows; i++)
    {
        decrease = rows - i - 1;
        
        if(i <= rows/2 - 1){
            
            printLine(i + 1);
            
        }else{
            
            printLine(decrease);
            
        }
        printf("\n\n");
    }
}

void printLine(int stop)
{
    for(int j = 0; j < stop; j++)
    {            
        printf("%d    ", j + 1);
    }
}
