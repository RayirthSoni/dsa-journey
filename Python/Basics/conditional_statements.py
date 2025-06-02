'''
This script contains questions based on conditional statements.
'''


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


