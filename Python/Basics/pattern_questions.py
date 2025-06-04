'''
This script contains the questions based on patterns on looping concepts
'''


## Ignore pylint warnings
## pylint: disable=line-too-long


def get_rectangular_pattern(n: int):
    """
    Function is used to print rectangular pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5

        *****
        *****
        *****
        *****
        *****
    """
    for i in range(n):
        for j in range(n):
            print("*", end='')
        print()


def get_right_angled_triangle_star_pattern(n: int):
    """Function is used to print right angled triangle pattern of stars.

    Args:
        n (int): Number of rows

    Example:
        n = 5
        *
        **
        ***
        ****
        *****
    """
    for i in range(1, n+1):
        for j in range(i):
            print("*", end='')
        print()


def get_right_angled_triangle_number_pattern(n: int):
    """
    Function is used to print right angled triangle pattern of numbers.

    Args:
        n (int): Number of rows

    Example:
        n = 5
        1
        12
        123
        1234
        12345
    """
    pass


def get_right_angled_triangle_number_2_pattern(n: int):
    """
    Function is used to print 2nd right angled triangle number pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5
        1
        22
        333
        4444
        55555
    """
    for i in range(1, n + 1):
        for j in range(i):
            print(i, end='')
        print()


def get_inverted_right_pyramid():
    pass


get_right_angled_triangle_number_2_pattern(4)
