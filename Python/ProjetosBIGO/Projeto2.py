def main():

    a = [1,2,3,4,5,6,7,8,9,0]
    a.sort()
    print(a)

    posicaoFinal = len(a) - 1
    posicaoInicio = 0;

    while(posicaoInicio < posicaoFinal):
        auxiliar = a[posicaoInicio]
        a[posicaoInicio] = a[posicaoFinal]
        a[posicaoFinal] = auxiliar
        posicaoFinal -= 1
        posicaoInicio += 1

    print(a)

if __name__ == "__main__":
    main()

#bigO O(1) (constante)
