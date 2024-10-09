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

### Étapes de développement suggérées:
1. Création de threads
2. Implémentation d’une fonction bogosort dans les fichiers `mythread.h` et `mythread.cpp`
3. Passage des paramètres nécessaires à ces threads
4. Répartition du travail entre les différents threads
5. Mise en place d’une terminaison des threads permettant d’obtenir le résultat sans devoir attendre toutes les exécutions

Attention à la manière de partager de l’information entre les threads, et notamment de ne pas accéder à des emplacements mémoires non alloués ou à des threads non existants.

## 5. Travail à rendre
- Ne pas créer de nouveau fichier. Modifiez et utilisez judicieusement les fichiers `mythread.h` et `mythread.cpp`, ainsi que la fonction `startSorting()`.
- Les modalités du rendu se trouvent dans les consignes qui vous ont été distribuées.
- La description de l’implémentation, ses différentes étapes, la manière dont vous avez vérifié son fonctionnement et toute autre information pertinente doivent figurer dans un fichier nommé `rapport.pdf`.
- Inspirez-vous du barème de correction pour savoir là où il faut mettre votre effort.
- Vous devez travailler en équipe de deux personnes.
- L’archive à rendre doit être générée avec le script de rendu `pcorendu.sh`.

