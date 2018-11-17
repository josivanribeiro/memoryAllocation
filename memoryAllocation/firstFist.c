#include<stdio.h>

int main() {
  int a[20],p[20],i,j,n,m;
  printf("Entre o numero de blocos de memoria:\n");
  scanf("%d",&n);
  for (i = 0; i < n; i++) {
    printf("Entre o tamanho do bloco de memoria %d: ",i);
    scanf("%d",&a[i]);
  }
  printf ("Entre o numero de processos:\n");
  scanf ("%d",&m);
  for (i = 0; i < m;i++) {
    printf ("Entre o tamanho do processo %d: ", i);
    scanf ("%d",&p[i]);
  }
  for (i=0; i < n; i++) {
    for (j=0; j < m; j++) {
      if (p[j] <= a[i]) {
        printf("O processo %d esta alocado no bloco memoria %d\n",j,a[i]);
        p[j]=10000;
        break;
      }
    }
  }
  for (j=0; j < m; j++) {
    if (p[j] != 10000) {
      printf("O Processo %d nao esta alocado\n",j);
    }
  }
  return 0;
}
