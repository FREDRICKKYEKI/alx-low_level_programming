#!/usr/bin/python3
"""Module that contains the island_perimeter function 
"""


def island_perimeter(grid):
    """Function that calculates perimeter of grid
    """
    perimeter = 0

    rows = len(grid)

    if grid != []:
        cols = len(grid[0])

    for a in range(rows):
        for b in range(cols):
            if grid[a][b] == 1:
                if (a - 1) < 1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == rows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) < 1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == cols or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter
