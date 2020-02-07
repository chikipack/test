#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int opc;
int opc1;
int alfa1,alfa2, beta3, beta6;
int contador;
int contador2;
char cadenaw1[50], cadenaw2[50];
char * array1;
char * array2;
int auxiliar = 1;
int x, y;
int len1, len2;
int ichigo;
char asuka;
char beta1, beta2;
char beta4, beta5;

int Opcion(){
	
	printf("Escoger desde:\n1.-Teclado\n2.-Archivo\n\n");
	fflush(stdin);

	if(scanf("%d",&opc) != 1){
	  printf("haz parillo y mete un numero\n");
		  while(getchar() != '\n');
	  //scanf("%d",&opc);
	  //while(scanf("%d",&opc) != 1);
	}
		switch(opc){
			case 1:
				printf("escogiste 1.-Teclado\n");
				break;
			case 2:
				printf("escogiste 2.-Archivo\n");
				break;
			default:
				printf("ERROR\n");
				Opcion();

		}

return opc;
}

int eleccion1(){
	printf("escoge la manera de insercion\n");
	printf("1.- Letra por letra\n");
	printf("2.- Rango de letras\n");
	scanf("%d",&opc1);
	return opc1;
}

int opcion11(){
	printf("cuantos caracteres quieres introducir en el alfabeto 1\n");
	scanf("%d",&alfa1);
				
				array1 = malloc(sizeof(char) *alfa1); 
				for (int i = 0; i < alfa1; i++)
				{
					if(i == alfa1 -1)
					{
					fflush(stdin);
					scanf(" %c",&array1[i]);
					fflush(stdin);
					}
					else{
					fflush(stdin);
					scanf(" %c\n",&array1[i]);
					fflush(stdin);
					}
				}
				for (int i = 0; i < alfa1; i++)
				{
					printf("%c\n",array1[i]);
				}
}

int opcion12(){
	printf("cuantos caracteres quieres introducir en el alfabeto 2\n");
	scanf("%d",&alfa2);
				
				array2 = malloc(sizeof(char) *alfa2); 
				for (int i = 0; i < alfa2; i++)
				{
					if(i == alfa2 -1)
					{
					fflush(stdin);
					scanf(" %c",&array2[i]);
					fflush(stdin);
					}
					else{
					fflush(stdin);
					scanf(" %c\n",&array2[i]);
					fflush(stdin);
					}
				}
				for (int i = 0; i < alfa2; i++)
				{
					printf("%c\n",array2[i]);
				}
}

int opcion21(){
    printf("Ingresa el termino inicial de tu rango\n");
    scanf("%c",&beta1);
    scanf("%c",&beta1);
    printf("Ingresa el termino final de tu rango\n");
    scanf("%c",&beta2);
    scanf("%c",&beta2);
    beta3=beta2-beta1;
                array1 = malloc(sizeof(char) *beta3);
                for (int i = beta1; i < beta2+1; i++)
                {
                    if(i == beta2-1)
                    {
                    fflush(stdin);
                    array1[contador]=i;
                    contador++;
                    fflush(stdin);
                    }
                    else{
                    fflush(stdin);
                    array1[contador]=i;
                    contador++;
                    fflush(stdin);
                    }
                }
                for (int i = 0; i <=beta3; i++)
                {
                    printf("%c\n",array1[i]);
                }
}

int opcion22(){
    printf("Ingresa el termino inicial de tu rango\n");
    scanf("%c",&beta4);
    scanf("%c",&beta4);
    printf("Ingresa el termino final de tu rango\n");
    scanf("%c",&beta5);
    scanf("%c",&beta5);
    beta6=beta5-beta4;
                array2 = malloc(sizeof(char) *beta6);
                for (int u = beta4; u < beta5+1; u++)
                {
                    if(u == beta5-1)
                    {
                    fflush(stdin);
                    array2[contador2]=u;
                    contador2++;
                    fflush(stdin);
                    }
                    else{
                    fflush(stdin);
                    array2[contador2]=u;
                    contador2++;
                    fflush(stdin);
                    }
                }
                fflush(stdout);
                for (int v = 0; v <=beta6; v++)
                {
                    printf("%c\n",array2[v]);
                }
}

int incisoC_w1(){
	
	printf("Ingrese una cadena con los caracteres del alfabeto 1 \n");
	scanf("%s",cadenaw1);
	len1= strlen(cadenaw1);
	printf("\n La longitud de la cadena 1 es: %d", len1);
	

	for(int a=0;a<alfa1;a++)
	{
		for(int b=0;b<len1;b++)
		{
			if(array1[a]==cadenaw1[b])
			{
				x++;
			}
		}
	}
	printf("\nNumero de ocurrencias: %d \n",x);
	if(len1==x)
	{
		printf("\n Es valida \n ");
	}
	else
	{
		printf("\n Es invalida \n ");
		x=0;
		return incisoC_w1();
	}
}

int incisoC_w2(){
	printf("Ingrese una segunda cadena con los caracteres del alfabeto 1 \n");
	scanf("%s",cadenaw2);
	len2= strlen(cadenaw2);
	printf("\n La longitud de la cadena 2 es: %d", len2);
	for(int a=0;a<alfa1;a++)
	{
		for(int b=0;b<len2;b++)
		{
			if(array1[a]==cadenaw2[b])
			{
				y++;
			}
		}
	}
	printf("\nNumero de ocurrencias: %d \n",y);
	if(len2==y)
	{
		printf("\n Es valida \n ");
	}
	else
	{
		printf("\n Es invalida \n ");
		y=0;
		return incisoC_w2();
	}
}

int incisoC_w1_2(){
	
	printf("Ingresse una cadena con los caracteres del alfabeto 1 \n");
	scanf("%s",cadenaw1);
	len1= strlen(cadenaw1);
	printf("\n La longitud de la cadena 1 es: %d", len1);
	

	for(int a=0;a<=beta3;a++)
	{
		for(int b=0;b<len1;b++)
		{
			if(array1[a]==cadenaw1[b])
			{
				x++;
			}
		}
	}
	printf("\nNumero de ocurrencias: %d \n",x);
	if(len1==x)
	{
		printf("\n Es valida \n ");
	}
	else
	{
		printf("\n Es invalida \n ");
		x=0;
		return incisoC_w1_2();
	}
}

int incisoC_w2_2(){
	printf("Ingresse una segunda cadena con los caracteres del alfabeto 1 \n");
	scanf("%s",cadenaw2);
	len2= strlen(cadenaw2);
	printf("\n La longitud de la cadena 2 es: %d", len2);
	for(int a=0;a<beta3;a++)
	{
		for(int b=0;b<len2;b++)
		{
			if(array1[a]==cadenaw2[b])
			{
				y++;
			}
		}
	}
	printf("\nNumero de ocurrencias: %d \n",y);
	if(len2==y)
	{
		printf("\n Es valida \n ");
	}
	else
	{
		printf("\n Es invalida \n ");
		y=0;
		return incisoC_w2_2();
	}
}


int incisoD(){
	printf("introduce un Valor n (numero) positivo o negativo\n");
	scanf("%d",&ichigo);
	
	int lenw1 = strlen(cadenaw1);
	int lenw2 = strlen(cadenaw2);

	if(ichigo>0){
		for (int i = 0; i < ichigo; i++)
		{
		printf("%s%s",cadenaw1,cadenaw2);
		}
		printf("\n");
	}
	//FALTA HACER ESTA PARTE DE LA FUNCION, NO PUEDO ACCEDER CON NUMERO NEGATIVOS
		if(ichigo<0){
		for(int i=0; i>ichigo;i--){
			for (int i = lenw2-1; i >=0;i--)
			{
				printf("%c",cadenaw2[i]);
			}
			for (int i = lenw1-1; i >= 0; i--)
			{
				printf("%c",cadenaw1[i]);
			}
			}
		printf("\n");
	}	
	}
//NUMERO DE OCURRENCIAS DE UN SIMBOLO UN UNA STRING
int incisoE(){
	int f=0;
	printf("BUSCAR EL NUMERO DE OCURRENCIAS DE UN CARACTER EN LA CADENA W1\n");
	printf("el caracter debe ser parte del alfabeto1\n");
	printf("introduce un caracter (perteneciente al alfabeto 1)\n");
	fflush(stdin);
	scanf("%c",&asuka);
	scanf("%c",&asuka);
		for(int r=0;r<len1;r++)
		{
			if(cadenaw1[r]==asuka)
			{
				f++;
			}
		}
	printf("numero de ocurrencias de %c = %d\n",asuka, f);
}

int palindromo(){
	char palabra[50];
	int i,j;
	int palindromo = 1;
	printf("escribe una cadena (no es necesario que pertenezca al alfabeto)\n");
	fflush(stdout);
	scanf("%s",&palabra);
	j=strlen(palabra)-1;
	for (i = 0; i < strlen(palabra)/2;i++,j--)
	{
		printf("comprobando ando %c = %c\n",*(palabra+i),*(palabra+j));
		if (*(palabra+i)!=*(palabra+j))
		{
			palindromo = 0;
			break;
		}
	}
	if(palindromo)
		printf("es un palindromo\n");
	else
		printf("no es un palindromo\n");
	return 0;
}

int inciso_i(){

	for (int h = 0; h < alfa1;h++)
	{
		for (int k = 0; k < alfa2; k++)
		{
			printf("%c%c\n",array1[h],array2[k]);
		}
	}
	

}

int inciso_i_2(){

	for (int h = 0; h < beta3+1;h++)
	{
		for (int k = 0; k < beta6+1; k++)
		{
			printf("%c%c\n",array1[h],array2[k]);
		}
	}
	

}


int main(){
	printf("Select an option\n");
	Opcion();
	if(opc==1){
		eleccion1();
		if (opc1==1){
			opcion11();
			opcion12();
			printf("\n Evaluacion de cadenas pertenecientes a un mismo alfabeto \n");
			printf("INCISO C\n");
			incisoC_w1();
			incisoC_w2();
			printf("INCISO D");
			incisoD();
			printf("INCISO E");
			incisoE();
			printf("INCISO G");
			palindromo();
			printf("INCISO I: Alfabeto_1 * Alfabeto_2\n");
			system("PAUSE");
			inciso_i();
			}
		if (opc1==2){
			opcion21();
			opcion22();
			printf("\n Evaluacion de cadenas pertenecientes a un mismo alfabeto \n");
			printf("INCISO C");
			incisoC_w1_2();
			incisoC_w2_2();
			printf("INCISO D");
			incisoD();
			printf("INCISO E");
			incisoE();
			printf("INCISO G");
			palindromo();
			printf("INCISO I");
			printf("Alfabeto_1 * Alfabeto_2\n");
			system("PAUSE");
			inciso_i_2();
			}
	}
	
	
	if (opc==2)
	{
		printf("ERROR: funcion no programada\n");
	}
	
	free (array1);
	free (array2);
	return 0;
}