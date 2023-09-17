#!/usr/bin/python3
"""Get the perimeter of an island surrounded by a grid"""


def neighbours(grid, n, m):
    """Returns an integer for water neighbours"""

    val = 0

    if n <= 0 or not grid[n - 1][m]:
        val += 1
    if m <= 0 or not grid[n][m - 1]:
        val += 1
    if m >= len(grid[n]) - 1 or not grid[n][m + 1]:
        val += 1
    if n >= len(grid) - 1 or not grid[n + 1][m]:
        val += 1

    return val


def island_perimeter(grid):
    """Get the perimeter of the isalnd grid"""

    perimeter = 0
    for n in range(len(grid)):
        for m in range(len(grid[n])):
            if grid[n][m]:
                perimeter += neighbours(grid, n, m)

    return perimeter
