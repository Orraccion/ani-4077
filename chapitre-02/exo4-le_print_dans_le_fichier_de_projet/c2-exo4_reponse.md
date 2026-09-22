Quand je lance "jenga info" le message "configurations : ['Debug', 'Release']" apparait bel et bien

Une chose que j'ai remarqué quelque soit la position de la ligne du print (que ce soit avant le workspace ou apres tout le workspace) la ligne print est toujours afficher avant les infos du projet.
Après quelque lecture j'ai compris, le tout réside dans le "file=sys.stderr" il permet d'afficher un message sur canal des erreur tout en prenant les résultats du code si besoin


Lorsque j'exécute "jenga info" sur "NKRHI.jenga" du moteur ma sortie est:
rhiDeps =  ['NKMath', 'NKTime', 'NKLogger', 'NKEvent', 'NKWindow', 'NKContainers', 'NKMemory', 'NKCore', 'NKPlatform', 'NKThreading', 'NKFileSystem', 'NKSL', 'NKGlad', 'NKGLSlang', 'NKSPIRVCross']

Ca m'a rajouter des dépendances en plus des rhiDeps par défaut