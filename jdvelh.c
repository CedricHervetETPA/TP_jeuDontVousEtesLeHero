#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
int choixJoueur=0;

printf ("Vous incarnez un jeune chasseur de monstres, et vous etes en Britania afin de chasser le monstre le plus immonde de tous, le chien-loup.\n");
printf ("Ou voulez-vous aller ? \n");
printf ("1: Foret des Chiens-Loups \n");
printf ("2: Colline du Vieux Cedre \n");

scanf ("%d",&choixJoueur);

if (choixJoueur==1){
		printf("Vous vous rendez dans la Terrifiante Forêt des Chiens-Loups.\n");
}

else if (choixJoueur==2){
	printf("Vous vous dirigez vers la colline du Vieux Cedre.\n");
}
return 0;
}