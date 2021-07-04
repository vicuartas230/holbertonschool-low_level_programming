#!/usr/bin/python3
""" This script defines a function island perimeter """


def island_perimeter(grid):
    """ This function that returns the perimeter
        of the island described in grid """
    for main_list in grid:
        if 1 not in main_list:
            continue
        for item in main_list:
            if item and
