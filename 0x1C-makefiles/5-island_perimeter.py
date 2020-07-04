#!/usr/bin/python3


def island_perimeter(grid):
    """calculate the perimeter of an island

    Args:
        grid (list): list of lists

    Returns:
        int: perimeter of the island
    """
    perim = 0
    unions = 0
    ones = 0
    num_list = len(grid)
    for i in range(num_list):
        row_len = len(grid[i])
        for j in range(0, row_len):
            current_item = grid[i][j]
            # horizontal unions
            if current_item == 1:
                ones += 1
            if j > 0:
                if current_item == 1:
                    previous_col = grid[i][j - 1]
                    if previous_col == 1 and current_item == 1:
                        unions += 1
            if i > 0:
                if current_item == 1:
                    row_prev = grid[i - 1][j]
                    if row_prev == 1 and current_item == 1:
                        # print(i)
                        unions += 1

    perim = (ones * 4) - (unions * 2)
    # print("unions", unions)
    # print("ones", ones)
    # print("perim", perim)
    return perim
