def selection_sort(items): 


    for index, item in enumerate(items[:-1]): 
        smallest_index = index #considera o valor do índice mais 
        # baixo o índice item que está iterando no primeiro loop
        for index_to_compare, item_to_compare in enumerate(
                items[index::], index #itera somente os itens à #direita do índice
        ): 
            if item_to_compare < items[smallest_index]: 
                smallest_index = index_to_compare
        items[index], items[smallest_index] = (
                items[smallest_index],
                items[index]
        ) #Por fim, faz a troca de posição dos itens: o menor #encontrado com o item que está sendo iterado.
    print(items)


if __name__ == '__main__':
    selection_sort([5, 3, 1, 2, 4])
