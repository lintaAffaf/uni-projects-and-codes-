total = 0 
while True:  
    user_input = input("Enter a number to add to the sum (or type 'stop' to finish): ")
    
    if user_input.lower() == 'stop': 
        break 
    
    try:
        number = float(user_input)  
        total += number 
    except ValueError:
        print("Please enter a valid number or 'stop'.")  

print(f"The total sum is: {total}") 



 