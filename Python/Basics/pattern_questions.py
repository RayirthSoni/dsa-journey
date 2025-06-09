"""
This script contains the questions based on patterns on looping concepts
"""

## Ignore pylint warnings
## pylint: disable=line-too-long
## pylint: disable=unused-variable


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
            print("*", end="")
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
    for i in range(1, n + 1):
        for j in range(i):
            print("*", end="")
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
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end="")
        print()


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
            print(i, end="")
        print()


def get_inverted_right_pyramid(n: int):
    """
    Function is used to print inverted right pyramid

    Args:
        n (int): Number of rows

    Example:
        n = 5
        *****
        ****
        ***
        **
        *
    """
    for i in range(1, n + 1):
        for j in range(n + 1 - i):
            print("*", end="")
        print()


def get_inverted_numbered_right_pyramid(n: int):
    """
    Function is used to print inverted numbered right pyramid pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5
        12345
        1234
        123
        12
        1
    """
    for i in range(1, n + 1):
        for j in range(1, n + 2 - i):
            print(j, end="")
        print()


def get_star_pyramid(n: int):
    """
    Function is used to print star pyramid pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5
            *
           ***
          *****
         *******
        *********
    """
    for i in range(1, n + 1):
        for j in range(n - i):
            print(" ", end="")
        for j in range(2 * i - 1):
            print("*", end="")
        print()


def get_inverted_star_pyramid(n: int):
    """
    Function is used to print inverted star pyramid pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5
        *********
         *******
          *****
           ***
            *
    """
    for i in range(1, n + 1):
        for j in range(i - 1):
            print(" ", end="")
        for j in range(2 * (n - i) + 1):
            print("*", end="")
        print()


def get_diamond_star_pattern(n: int):
    """
    Function is used to print diamond star pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5
             *
            ***
           *****
          *******
         *********
        ***********
        ***********
         *********
          *******
           *****
            ***
             *
    """
    pass


def half_diamond_star_pattern(n: int):
    """
    Function is used to print half diamond star pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5
        *
        **
        ***
        ****
        *****
        ****
        ***
        **
        *
    """
    pass


def get_binary_number_triangle_pattern(n: int):
    """
    Function is used to print binary number triangle pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5
        1
        01
        101
        0101
        10101
    """
    for i in range(1, n + 1):
        for j in range(i):
            k = 0 if (i + j) % 2 == 0 else 1
            print(k, end="")
        print()


def get_number_crown_pattern(n: int):
    """
    Function is used to print number crown pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5
        1        1
        12      21
        123    321
        1234  4321
        1234554321
    """
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end="")

        for j in range(2 * (n - i)):
            print(" ", end="")

        for j in range(i, 0, -1):
            print(j, end="")

        print()


def get_increasing_number_triangle_pattern(n: int):
    """
    Function is used to print increasing number triangle pattern

    Args:
        n (int): Number of rows

    Example:
        n = 5
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
    """
    k = 1
    for i in range(1, n + 1):
        for j in range(i):
            print(k, end=" ")
            k += 1
        print()
