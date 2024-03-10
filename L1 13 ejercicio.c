#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char peticion [100];
	char resultado[100];
	strcpy (peticion, "Miguel/47/Juan/12/Maria/22/Marcos/19");
	char *p = strtok(peticion,"/");
	char nombre[20];
	int edad;
	while(p != NULL)
	{
		strcpy(nombre,p);
		p = strtok(NULL,"/");
		edad = atoi(p);
		sprintf(resultado,"%s%s*%d-",resultado,nombre,edad);
		p = strtok(NULL,"/");
	}
	resultado [strlen (resultado) -1]= '\0';
	printf("Resultado : %s\n",resultado);
	return 0;
}