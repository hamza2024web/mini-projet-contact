#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct contact{
    char nom[50];
    char numero_de_telephone[50];
    char adresse_e_mail[50];
};
int main()
{
    int n=100;
    struct contact p1[100];
    int cpt;
    int multiple;
    int choice;
    int choice2;
    int choice3;
    int choice4;
    char modnom[50];
    char modnum[50];
    char modmail[50];
    do{
    printf("\tcontact Menu \n");
    printf("1/.Ajouter un contact .\n");
    printf("2/.Affichage de contact .\n");
    printf("3/.modification un contact .\n");
    printf("4/.suppremation de contacts .\n");
    printf("5/.Rechercher un contact .\n");
    printf("0/.quitter .\n");
    printf("veuillez entrer ton choice .\n");
    scanf("%d",&choice);
    switch(choice){
        case 1 :
            printf("\tles parametres de contact\n");
            printf("1/.Ajout simple .\n");
            printf("2/.Ajout multiple .\n");
            printf("choiser ton choice \n");
            scanf("%d",&choice2);
                if(choice2==1){
                    printf("veuillez saiser le nom de contact :");
                    scanf("%s",p1[cpt].nom);
                    printf("veuillez saiser le numero de telephone :");
                    scanf("%s",p1[cpt].numero_de_telephone);
                    printf("veuillez saiser adresse e-mail :");
                    scanf("%s",p1[cpt].adresse_e_mail);
                    cpt++;
                }
                if(choice2>=2){
                    printf("combien du contact souhaitez-vous ajoutez ? :");
                    scanf("%d",&multiple);
                    for(int i=0;i<multiple;i++){
                    printf("veuillez saiser le nom de contact :");
                    scanf("%s",p1[cpt].nom);
                    printf("veuillez saiser le numero de telephone :");
                    scanf("%s",p1[cpt].numero_de_telephone);
                    printf("veuillez saiser adresse e-mail :");
                    scanf("%s",p1[cpt].adresse_e_mail);
                    cpt++;
                }
                break;
                }
         break;
        case 2 :
            printf("\tles parametres d'affichage\n");
            printf("1/.Affichage simple .\n");
            printf("2/.affichage d'ordre ascendent .\n");
            printf("3/.Affichage d'ordre descendent .\n");
            printf("choiser ton choice :\n");
            scanf("%d",&choice3);
            if(choice3==1){
                    for(int i=0;i<cpt;i++){
                    printf("le nom de contact : %s\n",p1[cpt].nom);
                    printf("le numero de telephone : %s\n",p1[cpt].numero_de_telephone);
                    printf("adresse e-mail : %s\n",p1[cpt].adresse_e_mail);
                }break;
                }
        case 3 :
            printf("ton choice est la modification de contact.\n");
            printf("veuillez sp�cifier le type de modification.\n");
            printf("\tles parametres de modification .\n");
            printf("1/.modifier le nom .\n");
            printf("2/.modifier le numero de telephone .\n");
            printf("3/.modifier l'adresse e-mail .\n");
            printf("veuillez saiser ton choix :\n");
            scanf("%d",&choice4);
            switch (choice4){
            case 1 :
                printf("ton choice est la modification est de nom .\n");
                printf("veuillez choisir le nom :");
                scanf("%s",&modnom);
                for (int i=0;i<cpt;i++){
                    if(strcmp(p1[i].nom,modnom)==0){
                        printf("le nom %s est existe dans la liste de contact\n",modnom);
                        printf("veuillez entrer nouvelle nom\n");
                        scanf("%s",p1[i].nom);
                        printf("le nom est modifié avec succès.\n");
                        break;
                }
                }
            case 2 :
            printf("ton choice est la modification de numero de telephone .\n");
                printf("veuillez choisir le numero de telephone :");
                scanf("%s",&modnum);
                for (int i=0;i<cpt;i++){
                    if(strcmp(p1[i].numero_de_telephone,modnum)==0){
                        printf("le nom %s est existe dans la liste de contact\n",modnum);
                        printf("veuillez entrer nouvelle nom\n");
                        scanf("%s",p1[i].numero_de_telephone);
                        printf("le numero de telephone est modifié avec succès.\n");
                        break;
                }
                }
            case 3 :
            printf("ton choice est la modification de l'adresse e-mail .\n");
                printf("veuillez choisir l'adrese e-mail :");
                scanf("%s",&modmail);
                for (int i=0;i<cpt;i++){
                    if(strcmp(p1[i].adresse_e_mail,modnom)==0){
                        printf("le nom %s est existe dans la liste de contact\n",modmail);
                        printf("veuillez entrer nouvelle nom\n");
                        scanf("%s",p1[i].adresse_e_mail);
                        printf("l'adresse e-mail est modifié avec succès.\n");
                        break;
                   }
              }
            }
    }
    }while (choice!=0);
    printf("au revoir");
    return 0;
}
