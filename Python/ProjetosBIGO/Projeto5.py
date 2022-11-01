def selectionSort(lyst, reverse):

    if reverse == 0:
        

        for i in range(len(lyst)):
            mini = i
            for j in range (i + 1, len(lyst)):
                if lyst[j] < lyst[mini]:
                    mini = j

            lyst[i], lyst[mini] = lyst[mini], lyst[i]

    if reverse == 1:

        for i in range(len(lyst)):
            mini = i
            for j in range (i + 1, len(lyst)):
                if lyst[mini] < lyst[j]:
                    mini = j

            lyst[i], lyst[mini] = lyst[mini], lyst[i]

    

def main():
    lyst = [3,5,7,2,1,8,0,2,4,10]
    selectionSort(lyst, 0)
    print(lyst)
    selectionSort(lyst, 1)
    print(lyst)


if __name__ == "__main__":
    main()

# BigO: O(n²)
# Calculo de complexidade: O(n) + O(n) * O(n)
