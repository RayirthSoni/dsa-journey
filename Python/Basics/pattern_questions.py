"""
This script contains questions on pattern questions based on looping concepts
"""

# Ignore pylint warnings
# pylint: disable=line-too-long


def get_square_pattern_brute(n: int) -> None:
    """
    Function is used to print square pattern of stars in brute force way

    Args:
        n (int): Size of pattern
    """
    for i in range(n):
        for j in range(n):
            print("*", end="")
        print()


def get_square_pattern_optimal(n: int) -> None:
    """
    Function is used to print square pattern of stars in optimal way

    Args:
        n (int): Size of pattern
    """
    pattern = "*" * n
    for _ in range(n):
        print(pattern)


def get_increasing_triangle_pattern_brute(n: int) -> None:
    """
    Function is used to print increasing triangle pattern of stars in brute force way

    Args:
        n (int): Size of pattern
    """

    for i in range(n):
        for j in range(i + 1):
            print("*", end="")
        print()


def get_increasing_triangle_pattern_optimal(n: int) -> None:
    """
    Function is used to print increasing triangle pattern of stars in optimal way

    Args:
        n (int): Size of pattern
    """
    for i in range(n):
        print("*" * (i + 1))


def get_increasing_triangle_pattern_col(n: int) -> None:
    """
    Function is used to print increasing triangle pattern of numbers representing cols

    Args:
        n (int): Size of pattern
    """
    for i in range(1, n + 1):
        for j in range(1, i + 1):
            print(j, end="")
        print()


def get_increasing_triangle_pattern_row(n: int) -> None:
    """
    Function is used to print increasing triangle pattern of numbers representing rows

    Args:
        n (int): Size of pattern
    """
    for i in range(1, n + 1):
        for j in range(i):
            print(i, end="")
        print()


def decreasing_triangle_pattern_brute(n: int) -> None:
    """Function is used to print decreasing triangle pattern of stars in brute force way

    Args:
        n (int): Size of pattern
    """
    for i in range(n):
        for j in range(n, i, -1):
            print("*", end="")
        print()


def decreasing_triangle_pattern_optimal(n: int) -> None:
    """
    Function is used to print decreasing triangle pattern of stars in optimal way

    Args:
        n (int): Size of pattern
    """
    for i in range(n):
        print("*" * (n - i))


def decreasing_triangle_pattern_col(n: int) -> None:
    pass


def decreasing_triangle_pattern_row(n: int) -> None:
    pass


def get_triangle_pattern_brute(n: int) -> None:
    """
    Function is used to get triangle pattern of stars in brute force way

    Args:
        n (int): Size of pattern
    """
    for i in range(n):
        for _ in range(n - 1 - i):
            print(" ", end="")
        for _ in range(2 * i + 1):
            print("*", end="")
        print()


def get_triangle_pattern_optimal(n: int) -> None:
    """
    Function is used to get triangle pattern of stars in optimal way

    Args:
        n (int): Size of pattern
    """
    for i in range(n):
        print(" " * (n - 1 - i) + "*" * (2 * i + 1))


def get_binary_triangle_pattern(n: int) -> None:
    """
    Function is used to print binary triangle pattern

    Args:
        n (int): Size of pattern
    """
    for i in range(1, n + 1):
        for j in range(i):
            print(0, end="") if (i + j) % 2 == 0 else print(1, end="")
        print()
