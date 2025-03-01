"""
This script contains questions on pattern questions based on looping concepts
"""

# Ignore pylint warnings
# pylint: disable=line-too-long


def get_rectangular_star(n):
    """
    Function is used to print rectangular pattern of stars

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


def get_right_angle_triangle(n):
    """
    Function is used to print right angled * triangle pattern

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


def get_right_angle_number_pyramid(n):
    """
    Function is used to print right angled number pyramid pattern

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


def get_right_angled_number_pyramid_2(n):
    """
    Function is used to print right angled number pyramid pattern - 2

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


def get_inverted_right_pyramid(n):
    """
    Function is used to print inverted right * pyramid pattern

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


def get_inverted_right_number_pyramid(n):
    """
    Function is used to print inverted right number pyramid pattern

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


def get_inverted_right_number_pyramid_2(n):
    """
    Function is used to print inverted right number pyramid pattern - 2

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


def get_star_pyramid(n):
    """
    Function is used to print star pyramid pattern

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            *
           ***
          *****
    """
    for i in range(1, n + 1):
        for j in range(n - i):
            print(" ", end="")

        for j in range(2 * i - 1):
            print("*", end="")

        print()


def get_inverted_star_pyramid(n):
    """
    Function is used to print inverted star pyramid pattern

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
          *****
           ***
            *
    """
    for i in range(n, 0, -1):
        for j in range(n - i):
            print(" ", end="")

        for j in range(2 * i - 1):
            print("*", end="")

        print()


def get_diamond_star(n):
    """
    Function is used to print diamond star pattern

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            *
           ***
          *****
          *****
           ***
            *
    """
    get_star_pyramid(n)
    get_inverted_star_pyramid(n)



def get_right_half_rhombus():
    pass


def get_left_half_rhombus():
    pass


def 