#include <stdio.h>

void print_Tryangle(int last_number);
void print_Numbers(int i);
void print_Spaces(int* spaces);

int main()
{
    int last_number = 7;
    print_Tryangle(last_number);
    return 0;
}

void print_Tryangle(int last_number)
{
    int spaces = last_number;
    for(int i = 1; i <= last_number; i++)
    {
        print_Spaces(&spaces);
        print_Numbers(i);
    }
}

void print_Spaces(int* spaces)
{
   int i = 0;
   while(i < *spaces)
   {
       printf(" ");
       i++;
   }
   --*spaces;
}

void print_Numbers(int i)
{
    for(int j = 0; j < i; j++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

