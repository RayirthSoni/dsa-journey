"""
This script contains functions for pattern questions
"""


class Pattern:
    """
    Pattern configurations
    """

    class Square:

        @staticmethod
        def get_brute_pattern(n: int) -> None:
            """
            Function is used to print square pattern using brute force approach

            Args:
                n (int): Size of the square pattern
            """
            for i in range(n):
                for j in range(n):
                    print("*", end="")
                print()

        @staticmethod
        def get_optimized_pattern(n: int) -> None:
            """
            Function is used to print square pattern using optimized approach

            Args:
                n (int): Size of square pattern
            """
            pattern = "*" * n
            for _ in range(n):
                print(pattern)

    class Triangle:
        pass

    class Rhombus:
        pass
