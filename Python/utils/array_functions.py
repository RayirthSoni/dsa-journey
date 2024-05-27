import numpy as np


def get_largest(my_list):
    """returns the largest element in a list

    Args:
        my_list (list): list for which you want largest element

    Returns:
        numeric: largest element in the list
    """
    maximum_element = -np.inf

    for element in my_list:
        if element > maximum_element:
            maximum_element = element

    return maximum_element


def get_smallest(my_list):
    """return the smallest element in a list

    Args:
        my_list (list): list for which you want smallest element

    Returns:
        numeric: smallest element in the list
    """
    minimum_element = np.inf

    for element in my_list:
        if element < minimum_element:
            minimum_element = element

    return minimum_element


def get_second_largest(my_list):
    """returns the second largest element in the list

    Args:
        my_list (list): list for which you want second largest element

    Returns:
        numeric: second largest element in the list
    """
    maximum_element = -np.inf
    second_maximum_element = -np.inf

    for element in my_list:
        if element > maximum_element:
            second_maximum_element = maximum_element
            maximum_element = element
        elif element < maximum_element and element > second_maximum_element:
            second_maximum_element = element

    return second_maximum_element


def get_second_smallest(my_list):
    """returns the second smallest element in the list

    Args:
        my_list (list): list for which you want second smallest element

    Returns:
        numeric: second smallest element in the list
    """

    minimum_element = np.inf
    second_minimum_element = np.inf

    for element in my_list:
        if element < minimum_element:
            second_minimum_element = minimum_element
            minimum_element = element
        elif element > minimum_element and element < second_minimum_element:
            second_minimum_element = element

    return second_minimum_element


def is_array_sorted(my_list):
    """checks if the list is sorted

    Args:
        my_list (list): list to be checked

    Returns:
        bool: True if list is sorted, False otherwise
    """
    size = len(my_list)
    for index in range(size - 1):
        if my_list[index] > my_list[index + 1]:
            return False
    return True


def remove_duplicates_from_sorted(my_list):
    """removes the duplicates from a sorted list

    Args:
        my_list (list): list from which you want to remove duplicates

    Returns:
        list: sorted list after removing duplicates
    """
    sorted_list = sorted(my_list)
    size = len(sorted_list)
    unique_index = 0
    
    for index in range(1, size):
        if sorted_list[unique_index] != sorted_list[index]:
            sorted_list[unique_index + 1] = sorted_list[index]
            unique_index += 1
    
    return sorted_list[:unique_index+1]


def linear_search(my_list, search_element):
    """performs linear search algorithm

    Args:
        my_list (list): list from which want to search element
        search_element (numeric): element you want to search in list

    Returns:
        numeric: index at which the element being searched is present in the list
    """
    
    for element in my_list:
        if element == search_element:
            return my_list.index(element)
    
    return 'Not present in the list'


def left_rotate(my_list, rte):
    pass


def right_rotate(my_list, rte):
    pass


def move_zeores_end(my_list):
    pass


def get_union():
    pass


def get_intersection():
    pass

