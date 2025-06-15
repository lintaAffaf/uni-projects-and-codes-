def second_largest(numbers):
    unique_numbers = list(set(numbers))
    if len(unique_numbers) < 2:
        return None
    unique_numbers.sort()
    return unique_numbers[-2]
print(second_largest([1, 2, 3, 3]))  
print(second_largest([3]))         
