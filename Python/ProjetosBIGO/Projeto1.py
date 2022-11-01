def main():

    list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
    busca = int(input("digite o numero que deseja buscar: "))
    print(list1)
    count = 0

    for count in range(len(list1)):
        if(busca == list1[count]):
            count += 1
            print("Numero encontrado na posição %d!" % count)
            break;
        count+=2;
        if(count > len(list1)):
           print("Numero não encontrado.")
           break;
        if(count == len(list1)):
           count = 1

if __name__ == "__main__":
    main()

#O algoritmo pesquisa em todos os pares e depois em todos os impares.

#bigO:
# melhor:O(1)
# medio: O(n)
# pior: O(n)
