def main():


    alturaInicial = float(input("digite a altura inicial:"))
    quicadas = int(input("digite quantas vezes a bola quicou:"))

    indice = 0.6

    alturaQuicada = alturaInicial * indice

    totalAltura = alturaInicial + alturaQuicada * quicadas + alturaQuicada /2 + indice

    print("altura total: ", totalAltura)

if __name__ == "__main__":
    main()
