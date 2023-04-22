#include <stdlib.h>
#include <stdio.h>

int sumar(int A, int B);
int restar(int A, int B);
int multiplicar(int A, int B);
float dividir(float N, int B);

main()
{
	int opc = 0;
	
	int A, B, S, R, M;
	
	float D, N;
	
	do{
		printf("\t-- Menu de Operaciones Aritemeticas --\n");
		printf("\n1) Sumar");
		printf("\n2) Restar");
		printf("\n3) Multiplicar");
		printf("\n4) Dividir");
		printf("\n\n5) Salir");
		printf("\n\nElija una opcion: ");
		scanf("%d", &opc);
		
		system("CLS");
		
		switch(opc)
		{
			case 1:
				printf("Ingrese el primer valor: ");
				scanf("%d", &A);
				
				printf("\nIngrese el segundo valor: ");
				scanf("%d", &B);
				
				S = sumar(A, B);
				
				printf("\nEl resultado de la suma es: %d\n", S);
				
				system("PAUSE");
				
				system("CLS");
				break;
			
			case 2:
				printf("Ingrese el primer valor: ");
				scanf("%d", &A);
				
				printf("\nIngrese el segundo valor: ");
				scanf("%d", &B);
				
				R = restar(A, B);
				
				printf("\nEl resultado de la resta es: %d\n", R);
				
				system("PAUSE");
				
				system("CLS");
				break;
				
			case 3:
				printf("Ingrese el primer valor: ");
				scanf("%d", &A);
				
				printf("\nIngrese el segundo valor: ");
				scanf("%d", &B);
				
				M = multiplicar(A, B);
				
				printf("\nEl resultado de la multiplicacion es: %d\n", M);
				
				system("PAUSE");
				
				system("CLS");
				break;
			
			case 4:
				printf("Ingrese el primer valor: ");
				scanf("%f", &N);
				
				printf("\nRecuerde que no esta definida la division por 0!\nIngrese el segundo valor: ");
				scanf("%d", &B);
				
				while(B == 0)
				{
					printf("\nNo esta definida la division por 0!\nIngrese otro valor: ");
					scanf("%d", &B);
				}
				
				D = dividir(N, B);
				
				printf("\nEl resultado de la division es: %.2f\n", D);
				
				system("PAUSE");
				
				system("CLS");
				
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

int multiplicar(int A, int B)
{
	int M = A * B;
	return M;
}

float dividir(float E, int B)
{
	float D = E / B;
	return D;
}
