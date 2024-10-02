
#include "mythread.h"
#include <iostream>

void bogosort(std::vector<int> seq, ThreadManager* pManager /* TODO */)
{
    // TODO
    printf("PROUT\n");
    // Exemple de mise à jour de la barre de progression
    pManager->incrementPercentComputed(0.1);
    pManager->finished=true;
}
