import random
import math

def main():

    
    limiteMax = int(input("Limite Max: "))
    limiteMin = int(input("Limite Min: "))
    x = limiteMax - limiteMin
    tentativas = int((math.log(x, 2)) + 1)
    print(tentativas)

    count = 0
    
    while True:
        count += 1
        numeroPc = random.randint(limiteMin, limiteMax)
        resposta = input("O numero %d é <, > ou = ao seu numero?" % numeroPc)
        if resposta == '>':
            limiteMin = numeroPc
        elif resposta == '<':
            limiteMax = numeroPc
        elif resposta == '=':
            print("Acertei em %d tentativas!" % count)
            break
        else:
            print("Fala se é maior menor ou igual apenas burrão")
        if count == tentativas:
            print("Você está trapaceando maldito corno!!!!")
            break
        
           

if __name__ == "__main__":
    main()
