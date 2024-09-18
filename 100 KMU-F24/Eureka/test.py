# def convert(n, b=2):
#     letters = '0123456789ABCDEF'
    
#     if n == 0:
#         return '0'
    
#     if n > 0:
#         return convert(n // b, b) + letters[n % b]

# if __name__ == '__main__':
#     n = int(input('Enter a number: '))
#     print(convert(n))
#     print(convert(n, 16))


def convert(n, b=2):
    print("========")
    
    letters = '0123456789ABCDEF'

    # Base case for zero
    if n == 0:
        return '0'
    
    # Recursive case for positive numbers
    if n > 0:
        result = convert(n // b, b)
        # print("print"+ str(result))
        if result == '0':  # If the result of the recursive call is 0, don't append
            return letters[n % b]
        return result + letters[n % b]

if __name__ == '__main__':
    n = int(input('Enter a number: '))
    print(convert(n))
    print(convert(n, 16))


