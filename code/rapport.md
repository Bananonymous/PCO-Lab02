# Rapport de Laboratoire de Programmation Concurrente

## Informations Générales
- **Auteurs**: Berberat Alex, Surbeck Léon
- **Cours**: Laboratoire de Programmation Concurrente
- **Semestre**: Automne 2024
- **Sujet**: Initiation Thread Management / Bogosort
- **Temps à disposition**: 4 périodes

## 1. Objectifs pédagogiques
- Se familiariser avec la gestion des threads
- Stopper élégamment des threads

### Étapes de développement appliquées:
1. Création de threads
Les étapes de la fonction StartSorting sont les suivantes :

1.1. Initialisation d'un drapeau booléen `finished` à false, qui sera utilisé pour contrôler l'exécution des threads.
1.2. Création d'un vecteur `thread_list` pour stocker les pointeurs uniques vers les objets `PcoThread`.
1.3. Création d'un vecteur `result` pour stocker la séquence triée.
1.4. Calcul du nombre total de permutations (`total_order`) de la séquence d'entrée `seq`.
1.5. Division du nombre total de permutations par le nombre de threads (`nbThreads`) pour déterminer la plage de permutations que chaque thread traitera.
1.6. Création de `nbThreads` threads, chacun responsable du tri d'une partie des permutations en utilisant l'algorithme Bogosort. Chaque thread est ajouté à la `thread_list`.
1.7. Entrée dans une boucle qui continue jusqu'à ce que le drapeau `finished` soit mis à true, indiquant que le tri est terminé.
1.8. Demande à chaque thread de s'arrêter et attend qu'ils se rejoignent (fin d'exécution).
1.9. Retourne la séquence triée stockée dans le vecteur `result`.



Note : L'algorithme Bogosort est très inefficace et est utilisé ici à des fins de démonstration. Il permute aléatoirement la séquence jusqu'à ce qu'elle soit triée.



2. Implémentation d’une fonction bogosort dans les fichiers `mythread.h` et `mythread.cpp`
3. Passage des paramètres nécessaires à ces threads
5. Mise en place d’une terminaison des threads permettant d’obtenir le résultat sans devoir attendre toutes les exécutions


## 5. Travail à rendre
- Les modalités du rendu se trouvent dans les consignes qui vous ont été distribuées.
- La description de l’implémentation, ses différentes étapes, la manière dont vous avez vérifié son fonctionnement et toute autre information pertinente doivent figurer dans un fichier nommé `rapport.pdf`.
- Inspirez-vous du barème de correction pour savoir là où il faut mettre votre effort.
- L’archive à rendre doit être générée avec le script de rendu `pcorendu.sh`.

