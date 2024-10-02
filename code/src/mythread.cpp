
#include "mythread.h"
#include <iostream>
#include <algorithm>

void bogosort(std::vector<int> seq, ThreadManager* pManager, std::vector<int>* soluce, size_t range_begin, size_t range_end/* TODO */)
{
    // TODO if seq already sorted


    std::vector<int> temp;
    for(;range_begin <= range_end; range_begin++){
        temp = get_permutation(seq,range_begin);

        if(is_sorted(temp.begin(),temp.end())){
            *soluce = temp;
            return;
        }
    }


    // Exemple de mise à jour de la barre de progression
    pManager->incrementPercentComputed(0.1);
    pManager->finished=true;
}

/*
function getPermutation(sequence: List[int], k: int) -> List[int]:
    n = length of sequence
    permutation = []               # To store the k-th permutation
    availableElements = sequence    # Copy of the original sequence

    for i from 0 to n-1:
        fact = factorial(n - 1 - i)      # Calculate (n-1)! to determine the block size
        index = k / fact                 # Determine which element to select
        select the element at position 'index' from availableElements
        remove the selected element from availableElements
        append the selected element to permutation
        k = k % fact                     # Update k to find the next element

    return permutation
*/

std::vector<int> get_permutation(std::vector<int> seq, size_t k){
    size_t n = seq.size() -1;
    std::vector<int> permutation;

    for(size_t i = 0; i<=n; i++){
        size_t factorial=1;

        for(size_t j =1; j<=n-i;j++){
            factorial *= j;
        }

        size_t index = k/factorial;

        permutation.push_back(seq.at(index));
        seq.erase(seq.begin()+index);

        k = k%factorial;
    }

    return permutation;
}
