def is_palindrome(s):
    cleaned = ''.join(char.lower() for char in s if char.isalnum())
    return cleaned == cleaned[::-1]
print(is_palindrome("A man, a plan, a canal: Panama")) 
