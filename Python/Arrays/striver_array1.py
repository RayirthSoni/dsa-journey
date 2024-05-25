# Largest Element, Smallest Element
# Second Largest Element, Second Smallest Element
# Check if array sorted
# Remove Duplicates from Sorted Array

def get_largest(my_list):
    return sorted(my_list)[-1]


def get_smallest(my_list):
    return sorted(my_list)[0]


def get_second_largest(my_list):
    pass


def get_second_smallest(my_list):
    pass


def is_sorted(my_list):
    pass


def remove_duplicates_from_sorted():
    pass


my_list = [31, 4363, 234, 843, 13, 4, 854, 98, 56, 4335,
           109, 59, 9898, 1943, -54, 234, 64, -324, -32, -11]

maxi = get_largest(my_list)
print(f"Largest Number is : {maxi}")
print(f"Smallest Number is : {maxi}")
