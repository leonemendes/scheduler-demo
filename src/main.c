#include <stdio.h>

int main() {
  int a[5];
  int n, flag;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=0; i < n; i++) {
    flag = 1; //flag que verifica se alguma tarefa eh executada
    
  	for(int l = 0; l <= 4; l++) {
			if((i + 1) % a[l] == 0){	
			  /* Imprime resultado da n-esima iteracao do scheduler */				
				printf("%d", l);
				flag = 0;
			}
  	}
  	if(flag == 1) printf("-");
  	printf("\n");
  }

  return 0;
}
