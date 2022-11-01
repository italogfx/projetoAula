from statistics import mode

def main():

    linha = input("digite todos os valores da lista separados por espaco: ")
    itens = linha.split()
    vetor = list(map(int, itens))
    tamanho = len(vetor)
    vetor.sort()
    if tamanho % 2 != 0:
        pos = int(tamanho/2)
        print("Mediana: %d" % vetor[pos])
    else:
        medianaFrente = int(tamanho/2 + 0.5)
        medianaTras = int(tamanho/2 - 0.5)
        mediana = (vetor[medianaTras] + vetor[medianaFrente])/2
        print("Mediana: %2d" % mediana)

    moda = mode(vetor)
    print("Moda: %d" % moda)

if __name__ == "__main__":
    main()
            


                  
