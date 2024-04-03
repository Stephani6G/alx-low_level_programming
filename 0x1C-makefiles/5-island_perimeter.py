#!/usr/bin/python3

"""calculates the perimeter of  island in a grid."""


def num_water_neighbors(grid, i, j):
    """Returns the number of water neighbors in a grid."""

    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Return perimeter of the island in grid"""

    perime = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perime += num_water_neighbors(grid, i, j)

    return perime
