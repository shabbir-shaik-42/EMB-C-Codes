#include <stdio.h>
#include <stdlib.h>

int main()
{
       	int rows = 3;
        int cols = 3;
	 int **array = malloc(sizeof(int *) * rows);
	 for (int i = 0; i < rows; i++)
    array[i] = malloc(sizeof(int) * cols);
   for (int i = 0; i < rows; i++)
    free(array[i]);
    free(array);

  return 0;
}


  
