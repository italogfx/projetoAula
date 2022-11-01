from math import pi

def main():

    iteracoes = int(input("Digite o número de iterações: "))
    i = 1
    j = 1
    result = 0

    for i in range(iteracoes):

        result = result + (i/j)
        j += 2
        i = i * (-1)
        

    pi = result * 4
        
    print("O valor de pi é: ", pi)
    


if __name__ == "__main__":
    main()
