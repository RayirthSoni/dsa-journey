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

        @staticmethod
        def get_increasing_triangle_brute(n: int) -> None:
            """
            Function is used to get increasing triangle pattern using brute force approach

            Args:
                n (int): Size of triangle pattern
            
            """
            for i in range(n):
                for j in range(i + 1):
                    print("*", end="")
                print()

        @staticmethod
        def get_increasing_triangle_optimized(n: int) -> None:
            """
            Function is used to get increasing triangle pattern using optimized approach

            Args:
                n (int): Size of triangle pattern
            """
            for i in range(n):
                pattern = "*" * (i + 1)
                print(pattern)

        @staticmethod
        def get_increasing_triangle_numbers_brute(n: int) -> None:
            for i in range(1, n+1):
                for j in range(i):
                    print(j, end="")
                print()


    class Rhombus:
        pass
