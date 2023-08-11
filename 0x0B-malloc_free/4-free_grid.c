#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - frees a 2 dimensional grid previously created
  * @grid: two dimensional grid
  * @height: height of grid
  * Description: frees memory of two dimensional grigs
  * Return: no return
  */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
