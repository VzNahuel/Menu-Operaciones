#include <stdlib.h>
#include <stdio.h>

main()
{
	int opc = 0;
	
	do{
		system("CLS");
		
		printf("\t-- Menu de Operaciones Aritemeticas --\n");
		printf("\n1) Sumar");
		printf("\n2) Restar");
		printf("\n3) Multiplicar");
		printf("\n4) Dividir");
		printf("\n5) Salir");
		printf("\n\nElija una opcion: ");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 1:
				printf("Eligio la opcion 1 :)\n");
				system("PAUSE");
				break;
			
			case 2:
				printf("Opcion no disponible aun\n");
				system("PAUSE");
				break;
				
			case 3:
				printf("Opcion no disponible aun\n");
				system("PAUSE");
				break;
			
			case 4:
				printf("Opcion no disponible aun\n");
				system("PAUSE");
				break;
		}
		
		
	}while(opc!=5);
	
	
	
}
