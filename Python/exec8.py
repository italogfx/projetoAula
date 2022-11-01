def main():

    f=open("arquivo2.txt", 'r')
    linhas = f.readlines()
    pos = 1
    while pos != 0: 
        
        pos = int(input("Qual linha do texto vc deseja ver?"))
        posvetor = pos - 1
        if posvetor >= len(linhas):
            print("Vc digitou um numero maior do que a quantidade de linhas existentes no documento")
        elif pos != 0:
            print(linhas[posvetor])


if __name__ == "__main__":
    main()
