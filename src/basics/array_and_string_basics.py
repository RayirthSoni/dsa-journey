"""
This scripts contains basics on arrays and strings
"""

# Question 1: Length of string
a = "Hello"
print("length of string a =" ,len(a))

# Question 2: Accessing Individual Characters
for i in range(len(a)):
    print(i, a[i])

# Question 3: Passing, Returning and Assigning Strings
original = "Hello"

def modify_string(og: str) -> str:
    new = og
    new += " World"
    return new

modified_string = modify_string(original)

print("original ->", original)
print("modified_string ->",modified_string)


# Question 4: String Comparison
chk1 = "abc"
chk2 = "abc"

print("chk1 == chk2 ->",chk1 == chk2)
