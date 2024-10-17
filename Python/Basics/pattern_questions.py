'''
This script contains questions on pattern questions based on looping concepts
'''

def get_square_pattern(n: int) -> None:
    pattern = '*' * n
    for _ in range(n):
        print(pattern)

pattern_size = int(input("Enter size of pattern: "))
get_square_pattern(pattern_size)