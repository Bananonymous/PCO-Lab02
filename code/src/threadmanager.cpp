
#include <QRandomGenerator>
#include <iostream>

#include "threadmanager.h"

#include <QMainWindow>
#include <qthread.h>

#include "mythread.h"
#include "pcosynchro/pcothread.h"



ThreadManager::ThreadManager(QObject *parent) :
    QObject(parent)
{}


/**
 * @brief Cette fonction trie une séquence générée aléatoirement
 * @param seq séquence à trier
 * @param nbThreads le nombre de threads à lancer
 * @return séquence triée
 */
std::vector<int> ThreadManager::startSorting(std::vector<int> seq,unsigned int nbThreads){
    finished = false;

    std::vector<std::unique_ptr<PcoThread>> thread_list;
    std::vector<int> result;

    // DONE création des threads et du vecteur de résultats
    // DONE lancement des threads avec la fonction Bogosort
    // TODO arrêt des threads et récupération du tableau trié
    // DONE retourner le tableau trié


    size_t total_order=1;
    for(unsigned i=1;i<= seq.size();i++){
        total_order *=i;
    }
    size_t temp = total_order / nbThreads;



    for(unsigned i = 0; i < nbThreads; ++i) {
            PcoThread *currentThread = new PcoThread(bogosort,seq, this,&result, i * temp, (i+1)*temp - 1);
            thread_list.push_back(std::unique_ptr<PcoThread>(currentThread));
    }

    while(!finished){}

    for(unsigned i = 0; i < nbThreads; ++i) {
        thread_list[i]->requestStop();
    }

    //sleep 5s
     QThread::sleep(5);


    return result;
}


void ThreadManager::incrementPercentComputed(double percentComputed)
{
    emit sig_incrementPercentComputed(percentComputed);
}
