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

    Optimized:
        To get count of digits in number by using log n + 1
        Here we will take log to base 10 as that will give digit count on intuition

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
