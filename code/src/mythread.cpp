
#include "mythread.h"
#include <iostream>
#include <algorithm>

void bogosort(std::vector<int> seq, ThreadManager* pManager, std::vector<int>* soluce, size_t range_begin, size_t range_end, size_t nbThreads)
{
    double increment = 1./(range_end - range_begin + 1)/nbThreads;

    std::vector<int> temp;
    for(;range_begin <= range_end; range_begin++){

        if(PcoThread::thisThread()->stopRequested() ){
            return;
        }

        temp = get_permutation(seq,range_begin);

        if(is_sorted(temp.begin(),temp.end())){
            *soluce = temp;
            pManager->finished=true;
            break;
        }

        pManager->incrementPercentComputed(increment);
    }
}

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
