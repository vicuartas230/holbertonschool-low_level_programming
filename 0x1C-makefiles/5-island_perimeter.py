#!/usr/bin/python3
""" This script defines a function island perimeter """


def island_perimeter(grid):
    """ This function that returns the perimeter
        of the island described in grid """
    perimeter = 0
    for main_list in range(len(grid)):
        """ if 1 not in grid(main_list):
            continue """
        for i in range(len(grid[main_list])):
            if grid[main_list][i] and not grid[main_list][i - 1]:
                perimeter += 1
            if grid[main_list][i] and not grid[main_list][i + 1]:
                perimeter += 1
            if grid[main_list][i] and not grid[main_list - 1][i]:
                perimeter += 1
            if grid[main_list][i] and not grid[main_list + 1][i]:
                perimeter += 1
    return perimeter
