#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>


int main()
{
    int tab[4]= {123,456,323,212 }, i=0,cpt=0,oumy;
    char code_secret[80];

    printf("saisir un code_secret ici \n");
    scanf("%s" , code_secret);

    // declaration d'une variable à d'état vrai 
    bool isNumeric = true;

   //    recupération de la taille de la chaine caractère (code secret)
    int tailleChaine = strlen(code_secret);

    // / boucle pour controler le nombre de saisi (utilisateur) en se basant sur le compteur i
    while (i < 3)
    {
        // vérafication du contenu de la chaine de caractère
            for (int k= 0; k < tailleChaine; k++)
            {
            //verification caractère par caractère dans le if
              if (!isdigit(code_secret[k]))
              {
                //changement de la variable d'état si l'utilisateur saisi des caractères alpha nuùérique
                isNumeric = false;
                
              }
              
            }
            // vérification de la nature de la variable numérique pour savoir s'il est toujours vrai
            if (isNumeric)
            {
                // transformation du tableau de chaine de caractère en un nombre entier
                oumy = atoi(code_secret);
        
                // boucle pour parcourir le tableau tab deja déclarer en se basant sur le compteur cpt
                while (cpt<4)
                {
                    //condition de vérification du contenu du tableau 
                   if (tab[cpt]== oumy)
                   {
                    // affichage du message si l'utilisateur à saisi le bon code
                    printf("code_secret correct");
                    return 0;
                   }
                // incrémentation du compteur
                  cpt++;
                }
                if (i == 0)
                {
                    printf("code secret incorrect veuillez reesayer \n");
                    scanf("%s", &code_secret);
                }
                else if (i == 1)
                {
                    printf("code secret incorrcte il vous reste une seule tentative \n");
                    scanf("%s" ,&code_secret);
                }
                else
                {
                    printf("fin tentative");
                    return 0;
                }
                
            }
            else
            {
                if (i == 0)
                {
                    printf("saisir un entier :\n");
                    scanf("%s", &code_secret);
                }
                else if (i == 1)
                {
                    printf("code secret incorrcte il vous reste une seule tentative \n");
                    scanf("%s" ,&code_secret);
                }
                else
                {
                    printf("fin tentative");
                    return 0;
                }
            }
            
            
        i++;    
    }
    
    return 0;
}

  