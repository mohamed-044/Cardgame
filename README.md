# Card Game - Jeu de Cartes en C++

Ce projet est un jeu de cartes de type RPG développé en C++ qui met en œuvre des concepts avancés de programmation orientée objet (POO), notamment l'héritage et la composition. Le jeu propose plusieurs personnages jouables, chacun ayant ses propres capacités spéciales, ainsi qu'un système d'équipement d'armures et d'armes avec des bonus aléatoires.

## Fonctionnalités

- **Personnages jouables** :
  - **Personnage de base** : Un personnage jouable avec des attaques basiques.
  - **SnowQueen** : Un personnage amélioré avec des capacités évoluées comme *Javelot de glace*, *Vent glacial*, et une action spéciale nommée *LetItGo*.
  - **Berserker** : Un personnage aux caractéristiques propres avec des attaques spéciales.

- **Système de Combat** :
  - Chaque personnage a des points de vie, des points d'attaque, et peut exécuter des attaques basiques, avancées et spéciales.
  - Les actions de combat se déroulent en tours. Le personnage avec la plus grande vitesse joue en premier.
  - Le vainqueur est celui qui a encore des points de vie lorsque l'adversaire est à zéro.

- **Équipement** :
  - Chaque personnage peut s'équiper d'objets comme des armes et des pièces d'armure (casque, gilet, gants, bottes).
  - Les équipements apportent des bonus aléatoires aux caractéristiques du personnage (points de vie, attaque, défense, et vitesse).

## Structure du Projet

- **main.cpp** : Point d'entrée du programme où le combat et les règles sont gérés.
- **Berserker.cpp / Berserker.h** : Contient la classe `Berserker` avec ses caractéristiques et ses actions spéciales.
- **SnowQueen.cpp / SnowQueen.h** : Contient la classe `SnowQueen`, héritant des caractéristiques du personnage de base, avec des capacités évoluées.
- **Perso.cpp / Perso.h** : Définit la classe de base pour tous les personnages, incluant les méthodes et attributs communs.
- **output/** : Contient les fichiers générés et les résultats des tests.
- **Mini-Projet-Cardgame.pdf** : Document détaillant les spécifications et règles du projet.

## Exemple

![Exemple Jeu Cardgame](./Exemple%20Jeu%20Cardgame.PNG)

## Prérequis

- **Compilateur C++** compatible avec le standard C++11 ou supérieur.
- **CMake** (optionnel) pour une compilation facilitée.

## Installation et Compilation

1. Clonez le repository :
   ```bash
   git clone https://github.com/votre_utilisateur/card-game.git
   cd card-game
2. Compilez le projet :

    Avec g++ :

    ```bash

    g++ -std=c++11 main.cpp Berserker.cpp SnowQueen.cpp Perso.cpp -o card-game

3.  Avec CMake :
    ```bash
    mkdir build
    cd build
    cmake ..
    make

4. Exécutez le jeu :
    ```bash
    ./card-game

## Utilisation

  Lancez le jeu depuis la console.
  Choisissez votre personnage parmi le personnage de base, SnowQueen, ou Berserker.
  Sélectionnez vos actions en fonction des options disponibles :
      1 pour une attaque de base,
      2 pour une attaque avancée,
      3 pour une action spéciale (nécessite 100 points d'énergie).
  L'objectif est de réduire les points de vie de l'adversaire à zéro pour gagner.

## Documentation

Pour plus de détails sur les personnages, les capacités spéciales, et les règles de combat, référez-vous au fichier Mini-Projet-Cardgame.pdf et aux exemples d'interface (voir Exemple Jeu Cardgame.PNG).

## Contribution

Les contributions sont les bienvenues ! Vous pouvez soumettre des issues pour proposer des améliorations ou ouvrir une Pull Request.

