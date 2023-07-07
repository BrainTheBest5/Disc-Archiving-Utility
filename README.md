# Disc-Archiving-Utility
Un programma che semplifica l'archiviazione di dischi ottici su Linux
## Compilazione
Per compilarlo, basta usare una versione recente di GCC (ho usato la 12.2 e funziona).
Su una riga di comando, invia `gcc DAU.c -o DAU` e lancia il programma con `sudo ./DAU` o `doas ./DAU`.
É preferibile lanciare il programma come superutente per evitare errori inerenti ai mancati permessi per leggere il disco/scrivere l'immagine.
## Problemi Noti
Per ora il programma non supporta nomi immagine contenenti spazi, leggendo solanto la parte prima dello spazio.
Il programma interrompe l'esecuzione se specificato un numero di dischi da archiviare superiore a 1
