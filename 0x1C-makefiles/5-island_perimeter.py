#!/usr/bin/python3
"""
Calculates the perimeter of an island
"""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                num = 0

                if i <= 0 or not grid[i - 1][j]:
                    num += 1
                if j <= 0 or not grid[i][j - 1]:
                    num += 1
                if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
                    num += 1
                if i >= len(grid) - 1 or not grid[i + 1][j]:
                    num += 1
                perimeter += num
    return perimeter
