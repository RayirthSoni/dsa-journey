'''
This script contains questions on pattern questions based on looping concepts
'''

# Ignore pylint warnings
# pylint: disable=line-too-long

def get_square_pattern(n: int) -> None:
    """Function is used to print square pattern

    Args:
        n (int): Size of the square pattern
    """
    def get_brute_pattern(n: int) -> None:
        """Function is used to print square pattern using brute force approach

        Args:
            n (int): Size of the square pattern
        """
        for i in range(n):
            for j in range(n):
                print("*", end=" ")
            print()

    def get_optimized_pattern(n: int) -> None:
        """Function is used to print square pattern using optimized approach

        Args:
            n (int): Size of the square pattern
        """
        for i in range(n):
            print("*" * n)




pattern_size = int(input("Enter size of pattern: "))
get_square_pattern(pattern_size)
