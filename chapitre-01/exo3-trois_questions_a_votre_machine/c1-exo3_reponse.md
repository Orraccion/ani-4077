 1. Quelle carte graphique avez-vous ?
wmic path win32_VideoController get name

Réponse : Name Intel(R) UHD Graphics 620


2. Quelle version d'opengl avons nous?
# Linux
sudo apt install mesa-utils
glxinfo | grep "OpenGL version"

#windows n'as pas de ligne de commande pour ça



3. Facteur d'échelle de l écran

Get-CimInstance Win32_DesktopMonitor | Select-Object PixelsPerXLogicalInch

Réponse : PixelsPerXLogicalInch 144 (soit 1,5 car 96 vaut 1)

