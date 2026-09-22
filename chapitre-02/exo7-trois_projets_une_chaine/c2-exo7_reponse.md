mon fichier main.cpp du projet essaie n'importait que le MonRhi.h, mais pour faire fonctionner le programme j'ai été obligé de nommer la biliotheque MonUtil dans les links du projet.
Sans cela le lieur ne trouvait pas et on avait un "undefined reference to"

Mon projet MonUtil refinis une fonction afficher en console, et le projet MonRhi prend cette fonction pour afficher un texte d'initialisation à l'écran. Une fois les links mis en place tout marche correctement.

J'ai inversé l'ordre des porjet dans le links de Essaie et  mon programme compile toujours et s'execute normalement. Je suis sous WINDOWS 11