#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// YABRE Mohamed-Haminou      Matricule: 10068824
//Kabré Aristide              Matricule: 10020224
//Gnazanga Dao               Matricule: 10050924


//PROJET: Gestion Des Volontaires

typedef struct VDP VDP;
struct VDP
 {
    int Id;
    char Nom[15];
    char Prenom[15];
    int Age;
    char Region[30];
    char NomChercher[15];
 };

int main()
{
	VDP V[10000];
	int nombre;
	int supprimeID;
	int i;
	int j;
	int choix;
	int Affichage;
	char NomChercher[15];
	int Boulien = 0;
	int IDsupp;
	int continuer = 1;
	
while (continuer)
  {
		  
	printf("\n\nQUE VOULEZ-VOUS FAIRE\n");
	printf("1.Ajoutez un volontaire\n");
	printf("2.Afficher la liste des volontaires\n");
	printf("3.Rechercher un volontaire\n");
	printf("4.Supprimer un volontaire\n");
	printf("5.Quitter Le Programme\n\n");
	printf("FAITES VOTRE CHOIX: ");
	scanf("%d",&choix);
	
	switch (choix)
	      {
	      	case 1:
			  { 
			  system("cls");
				printf("VOULEZ-VOUS ENREGISTRER COMBIEN DE VOLONTAIRE? : ");
	            scanf("%d",&nombre);
	
	            for(i=0; i<nombre; i++)
	             {
	               printf("ENTREZ L'Identifiant DU VOLONTAIRE %d: ",i+1);
	 	           scanf("%d",&V[i].Id);
	 	
	               printf("ENTREZ LE NOM DU VOLONTAIRE %d: ",i+1);
	 	           scanf("%s",V[i].Nom);
	 	
	 	           printf("ENTREZ LE PRENOM DU VOLONTAIRE %d: ",i+1);
	 	           scanf("%s",V[i].Prenom);
	
	               printf("ENTREZ L'AGE DU VOLONTAIRE %d: ",i+1);
	               scanf("%d",&V[i].Age);
	 	
	               printf("ENTREZ LA REGION DU VOLONTAIRE %d: ",i+1);
	               scanf("%s",V[i].Region);
                 }
	      	               break;
		      }
          
            
            case 2:
              {
		        printf("========================================================================\n");
                for(i=0; i<nombre; i++)
                 {
  	               printf("VDP %d",i+1);
				   printf("\nNOM: %s",V[i].Nom);
				   printf("\nPRENOM: %s",V[i].Prenom);
				   printf("\nID: %d",V[i].Id);
				   printf("\nAGE: %d",V[i].Age);
				   printf("\nREGION: %s",V[i].Region);
				   printf("\n\n");
                 } 
                printf("========================================================================\n\n");
                               break;
               }
            
				
				
			case 3:	
			  {
			   //system("cls");
			   Boulien = 0;
			    printf("ENTREZ LE NOM DU VOLONTAIRE A CHERCHER: ");
                scanf("%s",NomChercher);
                printf("\n");
                for(i=0; i<nombre; i++)
                 {
                  if(strcasecmp(NomChercher,V[i].Nom) == 0)
                    { 
                      printf("LE VDP RECHERCHER EST_\n");
                      printf("VDP %d",i+1);
				   printf("\nNOM: %s",V[i].Nom);
				   printf("\nPRENOM: %s",V[i].Prenom);
				   printf("\nID: %d",V[i].Id);
				   printf("\nAGE: %d",V[i].Age);
				   printf("\nREGION: %s",V[i].Region);
				   printf("\n\n");
                     Boulien = 1;
                    }
                 }
                if(Boulien == 0)
                 {
                  printf("CE VOLONTAIRE N'EST PAS ENREGISTRER");
                 }
			             break;
			  }

  
             case 4:
             	{
             		//system("cls");
					printf("\n\nENTREZ L'IDENTIFIANT DU VOLONTAIRE A SUPPRIMER: ");
                    scanf("%d",&IDsupp);
                    for(i=0; i<nombre; i++)
                      {
                        if(IDsupp == V[i].Id)
                          {
   	                        for (j=i; j<nombre-1; j++)
   	                          {
   	                            V[j] = V[j+1];
	                          }
	                            nombre = nombre - 1;
	                printf("\t\tLE VOLONTAIRE EST SUPPRIMER");
	                Boulien = 1;
                               break;    
	                     }
                     }
  
                      if (Boulien == 0)
                         {
   	                       printf("L'ID NE SE CORRESPOND PAS");
                    
					
					     }
					     
					      printf("\n\nLA NOUVELLE LISTE EST: \n");
  printf("========================================================================\n");
 for(i=0; i<nombre; i++)
  {
  	printf("VDP %d",i+1);
				   printf("\nNOM: %s",V[i].Nom);
				   printf("\nPRENOM: %s",V[i].Prenom);
				   printf("\nID: %d",V[i].Id);
				   printf("\nAGE: %d",V[i].Age);
				   printf("\nREGION: %s",V[i].Region);
				   printf("\n");
  }
 printf("========================================================================\n\n");
			    } 
			    
				case 5:
			    	{
			    	  continuer = 0;
			    	  printf("BONNE SUITE ET A BIENTOT\n\n");
			          break;
					}
					
					default: 
					    {
					    	printf("CHOIX INVALIDE");
						}
				}
}
return 0;
}