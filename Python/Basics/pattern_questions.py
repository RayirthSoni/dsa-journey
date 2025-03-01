"""
This script contains questions on pattern questions based on looping concepts
"""

# Ignore pylint warnings
# pylint: disable=line-too-long


def get_square_pattern(n):
    """
    Function is used to print square pattern of stars

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            * * *
            * * *
            * * *
    """
    for i in range(n):
        for j in range(n):
            print("*", end="")
        print()


def get_increasing_triangle_pattern_stars(n):
    """
    Function is used to print increasing pattern of triangle stars

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            *
            * *
            * * *
    """
    for i in range(n):
        for j in range(i + 1):
            print("*", end="")
        print()


def get_increasing_triangle_pattern_cols(n):
    """
    Function is used to print increasing pattern of triangle numbers columns

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            1
            1 2
            1 2 3
    """
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end="")
        print()


def get_increasing_triangle_pattern_rows(n):
    """
    Function is used to print increasing pattern of traingle numbers row

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            1
            2 2
            3 3 3
    """
    for i in range(1, n + 1):
        for j in range(i):
            print(i, end="")
        print()


def get_decreasing_triangle_pattern_stars(n):
    """
    Function is used to print decreasing pattern of triangle stars

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            * * *
            * *
            *
    """
    for i in range(n):
        for j in range(n, i, -1):
            print("*", end="")
        print()


def get_decreasing_triangle_pattern_cols(n):
    """
    Function is used to print decreasing pattern of triangle numbers row

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            1 2 3
            1 2
            1
    """
    for i in range(n, 0, -1):
        for j in range(1, i + 1):
            print(j, end="")
        print()


def get_decreasing_triangle_pattern_rows(n):
    """
    Function is used to print decreasing pattern of triangle numbers columns

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            3 3 3
            2 2
            1
    """
    for i in range(n, 0, -1):
        for j in range(i):
            print(i, end="")
        print()


def get_triangle_pattern(n):
    pass


def get_inverted_triangle_pattern(n):
    pass


def get_rhombus_pattern(n):
    pass
