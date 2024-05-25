# Largest Element, Smallest Element
# Second Largest Element, Second Smallest Element
# Check if array sorted
# Remove Duplicates from Sorted Array

def get_largest(my_list):
    pass


def get_smallest(my_list):
    pass


def get_second_largest(my_list):

    for element in sorted(my_list)[-1::-1]:
        if element != my_list[-1]:
            return element

    return 'All Elements are Equal'


def get_second_smallest(my_list):

    for element in sorted(my_list)[1:]:
        if element != my_list[0]:
            return element

    return 'All Elements are Equal'


def is_sorted(my_list):

    for index, element in enumerate(my_list):
        for next_element in my_list[index+1:]:
            if element > next_element:
                return False
    return True


def remove_duplicates_from_sorted(my_list):

    return sorted(list(set(my_list)))


my_list = [31, 13, -22, 82, 13, 4, 88, 99, 56, 67,
           99, 59, 24, -23, -54, -9, 64, -3, -32, -11, -98, 98, -98]


print(f"Largest Element: {get_largest(my_list)}")
print(f"Smallest Element: {get_smallest(my_list)}")
print(f"Second Largest Element: {get_second_largest(my_list)}")
print(f"Seocnd Smallest Element: {get_second_smallest(my_list)}")
print(f"Is Sorted ? : {is_sorted(my_list)}")
print(f"Is Sorted ? : {is_sorted(my_list)}")
print(f"Before removing duplicates\n{sorted(my_list)}\nAfter removing duplicates\n{
      (remove_duplicates_from_sorted(my_list))}")
