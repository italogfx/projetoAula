def main():

    salarioHora = float(input("digite o salario por hora: "))
    totalHorasRegulares = int(input("digite o total de horas regulares: "))
    totalHorasExtras = int(input("digite o total de horas extras: "))

    horasExtras = (salarioHora * 1.5) * totalHorasExtras
    pagamentoSemanal = (salarioHora * totalHorasRegulares) + horasExtras
    print(pagamentoSemanal)


if __name__ == "__main__":
    main()
