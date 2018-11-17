#include <stdio.h>

/*
  best fit
  Varre toda a memória e escolhe a página mais ajustada ao tamanho do processo.
*/
int main(){
   int p,m;

   typedef int bool;
   #define true 1
   #define false 0

   printf("Entre o numero de processos:");
   scanf("%d",&p);
   printf("Entre o numero de blocos de memoria:");
   scanf("%d",&m);

   int parr[p];
   struct memoria {
          int id;  // identificador
          int tamanho;
   }marr[m];

   int i;

   for (i=0; i < p; i++) {
     printf("Entre o tamanho do processo %d:",i+1);
     scanf("%d",&parr[i]);
   }
   for (i=0; i < m; i++) {
     printf("Entre o tamanho do bloco de memoria %d:",i+1);
     scanf("%d",&marr[i].tamanho);
     marr[i].id=i+1;
   }
   int j;
   int tamanho = 0;

   for (i; tamanho <= marr[i].tamanho;  i++) {
     tamanho = marr[i].tamanho;
   }

   int tamanho_velho = tamanho;
    int im ;
    bool marcador = false ;

     for (i=0;i<p;i++) {
       for (j=0;j<m;j++){
         if ((marr[j].tamanho>=parr[i]) && (marr[j].tamanho < tamanho) ) {

           im = j;
           tamanho = marr[j].tamanho;
           marcador = true ;

         }

       }

     if (marcador) {
          marcador = false;
          marr[im].tamanho-=parr[i];
           tamanho = tamanho_velho ;
              printf("\n\nAloca o processo %d no bloco memoria %d\n Tamanho restante apos alocar %d\n",i+1,marr[im].id,marr[im].tamanho);

     } else {
       printf("Memoria insuficiente para o processo %d",i);break;
     }

    }

    return 0;
}
