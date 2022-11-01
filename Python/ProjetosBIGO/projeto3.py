def calculaPotencia(a, b):

    if b == 0:
        return 1
    else:
        return base*expo(base, exponent - 1)

def main():

    a = int(input("digite o numero: "))
    b = int(input("digite o expoente: "))

    print(calculaPotencia(a,b))

if __name__ == "__main__":
    main()

#bigO O(n), onde n é o expoente
