"""
This script contains questions on pattern questions based on looping concepts

Questions: https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
"""

# Ignore pylint warnings
# pylint: disable=line-too-long
# pylint: disable=expression-not-assigned


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


def get_half_diamond_star(n):
    """
    Function is used to print half diamond star pattern

    Args:
        n (int): Size of input

    Example:
        Input: n = 3
        Output:
            *
            **
            ***
            **
            *
    """
    for i in range(1, 2 * n):
        k = 2 * n - i if i > n else i

        for _ in range(k):
            print("*", end="")

        print()


def get_inverted_half_diamond_star(n):
    """
    Function is used to print half diamond star pattern

    Args:
        n (int): Size of input

    Example:
        Input: n = 3
        Output:
              *
             **
            ***
             **
              *
    """
    for i in range(2 * n - 1):
        k = n - 1 - i if i < n else i - n + 1
        for j in range(k):
            print(" ", end="")

        k = i + 1 if i < n else 2 * n - i - 1
        for j in range(k):
            print("*", end="")

        print()


def get_binary_number_triangle(n):
    """
    Function is used to print binary number triangle pattern

    Args:
        n (int): Size of pattern


    Example:
        Input: n = 3
        Output:
            1
            01
            101
    """
    for i in range(1, n + 1):
        for j in range(i):
            print(1, end="") if (((i + j) % 2) != 0) else print(0, end="")
        print()


def get_number_crown_pattern(n):
    """
    Function is used to print number crown pattern

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            1    1
            12  21
            123321
    """
    for i in range(1, n + 1):

        for j in range(1, i + 1):
            print(j, end="")

        for j in range(2 * (n - i)):
            print(" ", end="")

        for j in range(i, 0, -1):
            print(j, end="")

        print()


def get_increasing_number_triangle(n):
    """
    Function is used to print increasing number triangle pattern

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            1
            2 3
            4 5 6
    """
    k = 0
    for i in range(n):
        for j in range(i + 1):
            k += 1
            print(k, end=" ")
        print()


def get_increasing_letter_triangle(n):
    """
    Function is used to print increasing letter triangle pattern

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            A
            A B
            A B C
    """
    for i in range(1, n + 1):
        for j in range(i):
            print(chr(ord("A") + j), end=" ")
        print()


def get_reverse_letter_triangle(n):
    """
    Function is used to print reverse letter triangle

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            A B C
            A B
            A
    """
    for i in range(n, 0, -1):
        for j in range(i):
            print(chr(ord("A") + j), end=" ")
        print()


def get_alpha_ramp(n):
    """
    Function is used to print alpha ramp pattern

    Args:
        n (int): Size of input

    Example:
        Input: n = 3
        Output:
            A
            B B
            C C C
    """
    for i in range(n):
        for j in range(i + 1):
            print(chr(ord("A") + i), end=" ")
        print()


def get_alpha_hill(n):
    """
    Function is used to print alpha hill pattern

    Args:
        n (int): Size of input

    Example:
        Input: n = 3
        Output:
              A
             ABA
            ABCBA
    """
    for i in range(n):
        for j in range():
            pass

        for j in range():
            pass

        print()


def get_alpha_trinangle(n):
    """
    Function is used to print alpha triangle pattern

    Args:
        n (int): Size of input

    Example:
        Input: n = 3
        Output:
            C
            B C
            A B C
    """
    for i in range():
        for j in range():
            print(chr(ord("A") + i - j), end=" ")
        print()


def get_symmetric_void(n):
    """
    Function is used to print symmetric void pattern

    Args:
        n (int): Size of pattern

    Example:
        Input: n = 3
        Output:
            ******
            **  **
            *    *
            *    *
            **  **
            ******
    """
    pass


def get_symmetric_butterfly(n):
    """
    Functions is used tor print symmetric butterfly pattern

    Args:
        n (int): Size of input

    Example:
        Input: n = 3
        Output:
            *    *
            **  **
            ******
            **  **
            *    *
    """
    for i in range():
        for j in range():
            pass

        for j in range():
            pass

        for j in range():
            pass

        print()


def get_hollow_rectangle(n):
    """
    Function is used to print hollow rectangle pattern

    Args:
        n (int): Size of input

    Example:
        Input: n = 3
        Output:
            ***
            * *
            ***
    """
    for i in range(n):
        for j in range(n):
            if j == 0 or j == n - 1 or i == 0 or i == n - 1:
                print("*", end="")
            else:
                print(" ", end="")
        print()


def get_number_pattern(n):
    """
    Function is used to print number pattern

    Args:
        n (int): Size of input

    Example:
        Input: n = 3
        Ouput:
            3 3 3 3 3
            3 2 2 2 3
            3 2 1 2 3
            3 2 2 2 3
            3 3 3 3 3
    """
    pass
