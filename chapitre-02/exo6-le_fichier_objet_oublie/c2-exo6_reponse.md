J'ai repris les fichiers de l'exercice 1 

Avant d'ajouter la fonction inutile (en l'ocurrence un factorielle)
MonRhi.lib pèse 81,4ko et le Essaie.exe pèse 214ko

Après un "jenga clean", j'ajoute le fichier Inutile.cpp et le Inutile.h, j'y met la fonction factorielle, je ne l'appele nulle part ni ne l'importe
MonRhi.lib pèse 95,3ko soit une augmentation de 13,9ko preuve que la fonction a été embarqué dans la bibliotheque meme si personne ne l'utilise
Le Essaie.exe lui est toujours à 214ko