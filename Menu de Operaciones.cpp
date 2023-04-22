#include <stdlib.h>
#include <stdio.h>

main()
{
	int opc = 0;
	
	do{
		printf("\t-- Menu de Operaciones Aritemeticas --\n");
		printf("\n1) Sumar");
		printf("\n2) Restar");
		printf("\n3) Multiplicar");
		printf("\n4) Dividir");
		printf("\n5) Salir");
		printf("\n\nElija una opcion: ");
		scanf("%d", &opc);
	}while(opc!=5);
	
}
