

def expo(number, exponent):

    if exponent == 0:

        return 1
    
    if exponent % 2 != 0:

        return number * expo(number, exponent-1)
    
    if exponent % 2 == 0:

        result = expo(number, exponent/2)
        return result * result

def main():

    number = int(input("digite o numero"))
    exponent = int(input("digite o expoent"))

    print(expo(number, exponent))

main()

#bigO O(log n)
    
    
