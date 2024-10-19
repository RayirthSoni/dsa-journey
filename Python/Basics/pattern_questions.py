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


