#!/usr/bin/python3
""" Perimeter. """


def island_perimeter(grid):
    """
    Function to find the perimeter of the island.
    grid: is a list of integer that describe an island.
        0: represents a water zone.
        1: represents a land zone.
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water,
            and there is one island (or nothing).
        The island doesn’t have “lakes”
            (water inside that isn’t connected to the water around the island).
    """
    peri = 0
    side = 0
    for row in range(len(grid)):  # size, number of rows.
        for col in range(len(grid[0])):  # size, number of columns.
            if grid[row][col] == 1:  # find a part of the island "1"
                peri += 1
                if col > 0 and grid[row][col - 1] == 1:
                    side += 1
                if row > 0 and grid[row - 1][col] == 1:
                    side += 1
    perimeter = (peri * 4) - (side * 2)
    return perimeter
