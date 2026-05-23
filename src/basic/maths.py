"""
This script contains questions on basic maths
"""

## Ignore pylint warnings
## pylint: disable=line-too-long
## pylint: disable=unused-variable


import numpy as np


def get_digit_count(number: int, apporach: str):
    """
    Function is used to compute count of digits in a number


    Brute:
        Extract the count of digits in number by division by 10 till n > 0

        Time Complexity = O(log n + 1)


    Optimized:
        To get count of digits in number by using log n + 1
        Here we will take log to base 10 as that will give digit count on intuition

        Time Complexity = O(1) -> As we use a simple mathematical formula


    Args:
        n (int): Number for computing digits count
        apporach (str): Approach level for computation
    """
    if apporach == "brute":
        cnt = 0
        while number > 0:
            number = number // 10
            cnt += 1

    if apporach == "optimized":
        cnt = int(np.log10(number)) + 1

    return cnt


def get_reverse_number(number: int):
    """Function is used to get reverse number of the given number

    Args:
        number (int): Number for which we need reverse number

    Optimized:
        Example = 1234
        Output = 4321

        1234 // 10 = 123 | 1234 % 10 = 4
        123 // 10 = 12 | 123 % 10 = 3 + 4 * 10
        and so on
    """
    reverse_number = 0
    while number > 0:
        remainder = number % 10
        reverse_number = reverse_number * 10 + remainder
        number = number // 10

    return reverse_number


def is_palindrome(number: int):
    """
    Function is used to flag if number is a palindrome or not

    
    Args:
        number (int): Number to check if palindrome or not


    Optimized:
        Example = 1221 
        Reverse = 1221

        reverse == input ; palindrome

        Algorithm:
            1. Compute reverse of the number
            2. Check if equal to original or not
    """
    duplicate = number
    reverse_number = 0
    while number > 0:
        last_digit = number % 10
        reverse_number = reverse_number * 10 + last_digit
        number = number // 10

    return duplicate == reverse_number


def get_gcd(a, b):
    pass


def is_armstrong_number(number):
    pass


def get_divisors(number):
    pass


def is_prime(number):
    pass
