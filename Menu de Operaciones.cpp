#include <stdlib.h>
#include <stdio.h>

int sumar(int A, int B);
int restar(int A, int B);
int multiplicar(int A, int B);
float dividir(int A, int B);

main()
{
	int opc = 0;
	
	int A, B, S, R;
	
	do{
		printf("\t-- Menu de Operaciones Aritemeticas --\n");
		printf("\n1) Sumar");
		printf("\n2) Restar");
		printf("\n3) Multiplicar");
		printf("\n4) Dividir");
		printf("\n5) Salir");
		printf("\n\nElija una opcion: ");
		scanf("%d", &opc);
		
		system("CLS");
		
		switch(opc)
		{
			case 1:
				printf("Ingrese el primer valor: ");
				scanf("%d", &A);
				
				printf("Ingrese el segundo valor: ");
				scanf("%d", &B);
				
				S = sumar(A, B);
				
				printf("\nEl resultado de la suma es: %d\n", S);
				
				system("PAUSE");
				
				system("CLS");
				break;
			
			case 2:
				printf("Ingrese el primer valor: ");
				scanf("%d", &A);
				
				printf("Ingrese el segundo valor: ");
				scanf("%d", &B);
				
				R = restar(A, B);
				
				printf("\nEl resultado de la resta es: %d\n", R);
				
				system("PAUSE");
				
				system("CLS");
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

int sumar(int A, int B)
{
	int S = A + B;
	return S;
}

int restar(int A, int B)
{
	int R = A - B;
	return R;
}

