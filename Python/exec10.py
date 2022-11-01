class Aluno:

    def __init__(self, nome, nota1, nota2, nota3):
        self.nome = nome
        self.nota1 = nota1
        self.nota2 = nota2
        self.nota3 = nota3

    def calcularMedia(self):
        media = (self.nota1 + self.nota2 + self.nota3) / 3
        return media

    def maiorNota(self):
        if self.nota1 > self.nota2 and self.nota1 > self.nota3:
            return self.nota1
        elif self.nota2 > self.nota1 and self.nota2 > self.nota3:
            return self.nota2
        elif self.nota3 > self.nota1 and self.nota3 > self.nota2:
            return self.nota3

    def get_nome(self):
        return self.__nome

    def set_nome(self, nome):
        self.__nome = nome

    def get_nota1(self):
        return self.__nota1

    def get_nota2(self):
        return self.__nota2

    def get_nota3(self):
        return self.__nota3

    def set_nota1(self, nota1):
        self.nota1 = nota1

    def set_nota2(self, nota2):
        self.nota2 = nota2

    def set_nota3(self, nota3):
        self.nota3 = nota3


if __name__ == "__main__":

    aluno = ("italo", 10, 3, 4)
    maiorNota = aluno.maiorNota()
    mediaNota = aluno.calcularMedia()
    print(aluno.get_nome())
    print( "maior nota %d e media %d" % maiorNota, mediaNota)


        
