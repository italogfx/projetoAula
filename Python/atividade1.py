from math import pi

def main():

    raio = float(input("insira o raio: "))
    diametro = round(raio ** 2, 2)
    circunferencia = round(2 * pi * raio, 2)
    area = round(pi * raio** 2, 2)
    volume = round((4/3) * pi * raio, 2)

    print("diametro: ", diametro)
    print("circunferencia: ", circunferencia)
    print("area: ", area)
    print("volume: ", volume)

if __name__ == "__main__":
    main()
