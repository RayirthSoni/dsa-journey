"""
This script contains questions based on conditional statements.
"""

# Question 1: An indivial is adult or not.
age = int(input("Enter your age: "))

if age >= 18:
    print("You are an adult")
else:
    print("You are not an adult")


# Question 2: Grade and Marks of a User
marks = int(input("Enter your marks: "))

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
