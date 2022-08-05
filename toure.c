
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
   
char *matieres[4]={"math","pc","informatique","svt"},nom[30],prenom[30];
int coeffmath=5,coeffpc=5,coeffinformatique=2,coeffsvt=4;
float somme=0,noteMath[2],notePc[2],noteInformatique[2],noteSvt[2];
float moyenneGenerale=0,moyMath,moyPc,moyInformatique,moySvt;
float sommeMath,sommePc,sommeInformatique,sommeSvt;
int i=0, sommeCoeff=(coeffmath+coeffpc+coeffinformatique+coeffsvt);

printf("veuillez saisir le nom et le prenom \n");
scanf("%s",&nom,&prenom);
for ( i = 0; i < 2; i++)
{
   printf("saisir noteMath %d:\n",i+1);
   scanf("%f",&noteMath[i]);
   if (noteMath[i]<0|| noteMath[i]>20)
   {
      printf("saisir un nombre compris entre 0 et 20\n");
   }
   
      sommeMath=sommeMath+noteMath[i];
}
moyMath=sommeMath/2;
 printf("c'est votre moyenne en math %f:\n",moyMath);

 for ( i = 0; i < 2; i++)
 {
   printf("saisir notePc %d:\n",i+1);
   scanf("%f",&notePc[i]);
   if (notePc[i]<0 || notePc[i]>20)
   {
     printf("saisir un nombre compris entre 0 et 20\n");
   }
   sommePc=sommePc+notePc[i];
 }
 moyPc=sommePc/2;
printf("c'est votre moyenne en pc %lf:\n",moyPc);
 
 
 for ( i = 0; i < 2; i++)
 {
   printf("saisir noteInformatique %d:\n",i+1);
   scanf("%f",&noteInformatique[i]);
   if (noteInformatique [i]<0 ||noteInformatique [i]>20)
   {
       printf("saisir un nombre compris entre 0 et 20\n");
   }
   sommeInformatique=sommeInformatique+noteInformatique[i];
 }
 moyInformatique=sommeInformatique/2;
printf("c'est votre moyenne en informatique %f:\n",moyInformatique);


 for ( i = 0; i < 2; i++)
 {
   printf("saisir note svt %d:\n",i+1);
   scanf("%f",&noteSvt[i]);
   if (noteSvt [i] <0 ||noteSvt[i]>20)
   {
       printf("saisir un nombre compris entre 0 et 20\n");
   }
   sommeSvt=sommeSvt+noteSvt[i];
 }
 moySvt=sommeSvt/2;
printf("c'est votre moyenne en svt %f:\n",moySvt);

moyenneGenerale=(((moyMath*coeffmath)+(moyPc*coeffpc)+(moyInformatique*coeffinformatique)+(moySvt*coeffsvt))/sommeCoeff) ;
printf("votre moyGeneral %f:\n", moyenneGenerale);

      if (moyenneGenerale < 10)
    {
        printf("mediocre");
    }
     if (moyenneGenerale == 10)
    {
        printf("PASSABLE");
    }
     if ((moyenneGenerale >10) && (moyenneGenerale <14))

    {
        printf("tres bien");
    }
     if (moyenneGenerale > 14)
    {
        printf("excellent");
    }
      
   return 0;
}



