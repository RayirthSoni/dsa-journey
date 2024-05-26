def get_largest(my_list):
    """returns the largest element in a list

    Args:
        my_list (list): list for which you want largest element

    Returns:
        numeric: largest element in the list
    """
    return sorted(my_list)[-1]


def get_smallest(my_list):
    """return the smallest element in a list

    Args:
        my_list (list): list for which you want smallest element

    Returns:
        numeric: smallest element in the list
    """
    return sorted(my_list)[0]


def get_second_largest(my_list):
    """returns the second largest element in the list

    Args:
        my_list (list): list for which you want second largest element

    Returns:
        numeric: second largest element in the list
    """
    
    sorted_list = sorted(my_list)
    
    for element in sorted_list[::-1]:
        if element != sorted_list[-1]:
            return element
    
    return 'All elements are equal.'


def get_second_smallest(my_list):
    """returns the second smallest element in the list

    Args:
        my_list (list): list for which you want second smallest element

    Returns:
        numeric: second smallest element in the list
    """
    sorted_list = sorted(my_list)

    for element in sorted_list:
        if element != sorted_list[0]:
            return element

    return 'All elements are equal.'