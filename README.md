# Trie Phone Number Storage

## Introduction
Ce projet illustre l'utilisation d'un **trie (arbre de préfixe)** pour optimiser le stockage des numéros de téléphone. L'objectif est de minimiser l'utilisation de la mémoire en exploitant les préfixes communs parmi les numéros. Ce type de structure est idéal pour les grandes collections de chaînes de caractères partageant des préfixes, rendant les opérations de recherche et d'insertion extrêmement efficaces.

## Contexte
Lors du stockage de numéros de téléphone, nombreux sont ceux qui partagent des préfixes communs. Un trie permet de stocker ces préfixes une seule fois, réduisant ainsi significativement la quantité de mémoire nécessaire. Ce projet démontre comment un trie peut être utilisé pour optimiser le stockage des numéros de téléphone en C++.

## Fonctionnement
Le programme crée un trie dans lequel chaque nœud représente un chiffre d'un numéro de téléphone. Si plusieurs numéros partagent un préfixe commun, ce préfixe est stocké une seule fois dans l'arbre. Chaque insertion vérifie si le chemin du numéro de téléphone à insérer existe déjà. Si un nœud n'existe pas pour un chiffre donné, il est créé. Cette approche minimise le besoin d'allouer de la mémoire pour les préfixes répétés, optimisant ainsi l'utilisation globale de la mémoire.

## Avantages du Trie
- **Efficacité de la recherche :** Les opérations de recherche, d'insertion et de suppression s'effectuent en temps linéaire par rapport à la longueur des chaînes.
- **Optimisation de l'espace :** Les préfixes communs aux numéros de téléphone sont stockés une seule fois, réduisant l'empreinte mémoire nécessaire.

## Installation
1. Clonez ce dépôt sur votre machine locale en utilisant `git clone git@github.com:Dutschke-julien/phone-optimization.git`.
2. Compilez le code source en utilisant un compilateur C++ (par exemple, `g++ -o trie main.cpp`).
3. Exécutez le programme compilé et suivez les instructions à l'écran pour insérer des numéros de téléphone.
