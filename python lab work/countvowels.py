def count_vowels(s):
    vowels='aeiouAEIOU'
    count=0
    for char in s:
        if char in vowels:
            count+=1
    return count
input_string='hello world'
counting_vowels=count_vowels(input_string)
print ('original string:',input_string)
print('counted vowels in a string: ',counting_vowels)