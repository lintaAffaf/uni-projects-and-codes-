def factorial_iterative(n):
    input("enter the number")
   
    if n < 0:
        return "Factorial is not defined for negative numbers."
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result
number = input

print(f"Factorial of {number}: {factorial_iterative(number)}")
