def main():

    precoCompra = float(input("digite o preco de compra: "))
    pagInicial = precoCompra * 0.1
    precoCompra = precoCompra - pagInicial
    saldo = precoCompra
    mes = 1
    print("Mês \t Saldo \t Juros \t Principal \t Pagamento \t Remanescente")
    print("_____________________________________________________________________")
    
    while saldo > 0:

        juroMes =saldo * 0.01
        pagMes = round(precoCompra * 0.05,2)
        principal = round(pagMes + juroMes,2)
        if(saldo >= pagMes):
            remanecente = round(saldo - pagMes + juroMes,2)
        else:
            pagMes = remanecente
            principal = round(pagMes + juroMes,2)
            remanecente = 0
        
        print("%d \t %0.2f \t %0.2f \t %0.2f \t \t %0.2f \t \t %0.2f" % (mes, saldo, juroMes, principal, pagMes, remanecente))
        saldo = remanecente
        mes += 1
        
if __name__ == "__main__":
    main()
        
    
