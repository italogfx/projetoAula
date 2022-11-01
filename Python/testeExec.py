import time

problemSize=10000000
print ("%12s%16s" % ("Problem Size", "Seconds"))

for count in range (5) :
    start=time.time()
    # O início do algoritmo
    work = 1
    for x in range (problemSize):
        work += 1
        work -= 1
    # O fim do algoritmo
    elapsed=time.time() - start
    print ("%12d%16.3f" % (problemSize, elapsed))
    problemSize *= 2
