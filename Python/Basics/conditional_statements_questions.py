"""
This script contains basic questions on conditional statements
"""


def get_grade(marks: int) -> str:
    """Function is used to get grade for marks scored

    Args:
        marks (int): Marks scored by individual

    Returns:
        str: Grade for the marks scored
    """
    if marks < 25:
        return "F"
    elif marks < 44:
        return "E"
    elif marks < 49:
        return "D"
    elif marks < 59:
        return "C"
    elif marks < 79:
        return "B"
    else:
        return "A"


def job_eligibility(age: int) -> str:
    """Function is used to check if a person is eligible for a job based on age

    Args:
        age (int): Age of the person

    Returns:
        str: Status for eligibility of the person for a job
    """

    if age >= 18:
        return "Eligible"
    elif age >= 55 and age <= 57:
        return "Eligible, but retirement soon"
    else:
        return "Not Eligible"
