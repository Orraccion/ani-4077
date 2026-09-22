``` python
from jenga import *

with workspace("MonRenderer-wks", location="."): #je donne le nom du projet et je le situe dans le meme dossier que le fichier .jenga # Si on oublie le workspace, le projet ne compilara rien et jenga enverra "aucun workspace trouvé"
    
    #Toutes les biliothèques : du code qui va compiler et etre construit mais sans main et donc sans exe sous windows
    with project ("Bilio1"):  # la premiere biliotheque qui ne dépend de rien
        staticlib() # la nature de la bibliotheque
        language(C++) #son language
        cppdialect("C++17") # sa version
        locaton (".") #on localise les fichiers du projet et donc le projet dans le dossier du .jenga en cours (autre solution connecter un autre .jenga pour le projet)
        file (["src/Bilio1/**.cpp"]) # où se trouve les fichiers du projets
        includedirs(["src"]) #où se trouve les repertoire des fichier a appele avec #include
        objdir("%{wks.location}/Build/Obj/"
                     "%{cfg.buildcfg}-%{cfg.system}/%{prj.name}") # où ranger les fichiers obj en fonction de configuration du build et de l'OS et le nomn du projet
        targetdir("%{wks.location}/Build/Lib/"
                     "%{cfg.buildcfg}-%{cfg.system}") #où ranger les fichiers .lib les bibliotheque compiler en fonction de la config de compilation et du systeme
    
       with project("Bilio2"): #Bilio qui utilise la premiere
              staticlib()
              language("C++")
              cppdialect("C++17")
              location(".")
              files(["src/Bilio2/**.cpp"])
              includedirs(["src"]) #Si on oublie les includedirs on obtient du compilateur "...... file not found"
              libdirs(["%{wks.location}/Build/Lib/"
                     "%{cfg.buildcfg}-%{cfg.system}"]) # Si on oublie les libdirs, on obtient du lieur l'erreur "cannot find -l...."
              links(["Bilio1"]) #cette ligne est justement là pour lier la biblio1 à la biblio2 #Si on oublie les links le lieur nous envois "undefined reference to ___fonction___"
              objdir("%{wks.location}/Build/Obj/"
                     "%{cfg.buildcfg}-%{cfg.system}/%{prj.name}")
              targetdir("%{wks.location}/Build/Lib/"
                     "%{cfg.buildcfg}-%{cfg.system}")
    
    #Ensuite on liste ainsi toutes les biliotheques

    #puis on construit le programme qui utilise toutes ces bibliotheques
    with project("ProjetConcret"):
              consoleapp()
              language("C++")
              cppdialect("C++17")
              location(".")
              files(["src/ProjetConcret/**.cpp"])
              includedirs(["src"])
              libdirs(["%{wks.location}/Build/Lib/"
                     "%{cfg.buildcfg}-%{cfg.system}"])
              links(["Bilio1","Bilio2"])#liste de toutes les biliotheques du projet classé par ordre du moins dépendant au plus dépendant
              objdir("%{wks.location}/Build/Obj/"
                     "%{cfg.buildcfg}-%{cfg.system}/%{prj.name}")
              targetdir("%{wks.location}/Build/Bin/"
                     "%{cfg.buildcfg}-%{cfg.system}/%{prj.name}")
```

Tous est commenté et le principe mentale est acquis
