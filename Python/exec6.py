def main():

    f=open("arquivo.txt",'r')
    print("----------***FOLHA SALARIAL***----------")
    print("Sobrenome \t Horas trabalhadas \t Salário")
    for linha in f:
        linha = linha.rstrip()
        linhaTratada = linha.split(" ")
        horasTrabalhadas = int(linhaTratada[2])
        salarioHora = int(linhaTratada[1])
        salario = salarioHora * horasTrabalhadas
        print(linhaTratada[0], "\t \t", linhaTratada[2], "\t \t \t", salario)
    
if __name__ == "__main__":
    main()
