#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int or = 0;
int PV = 100;
typedef struct Chapitre{
    char desc[120];
    int index;
    int or;
    int PV;
    int id[3];
}chapitre;

void voyage(chapitre * varvoyage){
    printf("%s\n", (*varvoyage).desc);
    printf("Gain (ou perte) d'or : %d\n", (*varvoyage).or);
    if((or + (*varvoyage).or)>=0){
    or += (*varvoyage).or;
    }
    printf("Gain (ou perte) de points de vie : %d\n", (*varvoyage).PV);
    if((PV +(*varvoyage).PV) >= 0 && (PV +(*varvoyage).PV)<100){
    PV += (*varvoyage).PV;
    }
    printf("Ou souhaitez vous vous rendre ? : %d %d %d\n", (*varvoyage).id[0],(*varvoyage).id[1],(*varvoyage).id[2]);
}


int main(){
    int destination = 0;

    chapitre chapitre1 = {"Les plaines de l'Aube: vous êtes en pays civilisé bien que les campagnes soient vastes.", 1, 5, 15, {1, 3, 2} };
    chapitre chapitre2 = {"La Colline du Vieux Cèdre: une colline surplombée d'un arbre millénaire mystique.", 2, 20, 5, {1, 2, 3} };
    chapitre chapitre3 = {"Le palais de la Princesse Brita: nul endroit n'est aussi sécurisé qu'ici.", 5, 0, -7, {1, 2, 3} };

    printf("Vous vous trouvez dans une taverne de Britania, et vous discutez avec le tavernier.\nBonjour aventurier ! Etes-vous ici pour chasser les maléfiques chiens-loups ?\n");
    printf("Où souhaitez-vous aller ?\n");

    while(PV>=0){
        scanf("%d", &destination);

        switch (destination){

            case 1 :
                voyage(&chapitre1);
                printf("Il vous reste %d points de vie\n et %d pièces d'or.\n", PV, or);

            break;

            case 2 :
                voyage(&chapitre2);
                printf("Il vous reste %d points de vie\n et %d pièces d'or.\n", PV, or);
            break;

            case 3 :
                voyage(&chapitre3);
                printf("Il vous reste %d points de vie\n et %d pièces d'or.\n", PV, or);
            break;
        }
    };
    return 0;
}
