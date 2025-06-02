"""
This script contains questions based on conditional statements.
"""


def can_vote(age: int):
    """
    Function is used to evaluate if a person can vote or not based on their age.

    Args:
        age (int): Age of the individual for which checking voting eligibility
    """
    if age > 18:
        print("Person can vote.")
    else:
        print("Person can't vote.")


def get_grade(marks: int):
    """
    Function is used to print grade of the individual based on their marks

    Args:
        marks (int): Marks of individual for which we need to print the grade
    """

    if marks < 25:
        print("Grade: F")
    elif marks <= 44:
        print("Grade: E")
    elif marks <= 49:
        print("Grade: D")
    elif marks <= 59:
        print("Grade: C")
    elif marks <= 69:
        print("Grade: B")
    elif marks <= 100:
        print("Grade: A")
    else:
        print("Invalid Marks !")


def get_day(day: int):
    """
    Function is used to print the day based on number

    Args:
        day (int): Count of day in week based on which day name needs to be printed
    """

    match day:

        case 1:
            print("Monday")
        case 2:
            print("Tuesday")
        case 3:
            print("Wednesday")
        case 4:
            print("Thursday")
        case 5:
            print("Friday")
        case 6:
            print("Saturday")
        case 7:
            print("Sunday")
        case _:
            print("Invalid day.")

