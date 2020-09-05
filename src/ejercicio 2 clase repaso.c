/*
 ============================================================================
 Name        : ejercicio2claserepaso.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float calcularPrecio(float precio, int descuento, float* precioConDescuento, int validacion, int validacion1);

int main(void)
{
	setbuf(stdout,NULL);
	float precioFinal;
	float precio;
	int porcentajeDescuento;
	int respuestaScanf;
	int respuestaScanf1;

	printf("Ingrese el precio del articulo: ");
	fflush(stdin);
	respuestaScanf = scanf("%f",&precio);
	printf("Ingrese el porcentaje de descuento: ");
	fflush(stdin);
	respuestaScanf1 = scanf("%d",&porcentajeDescuento);
	if (calcularPrecio(precio, porcentajeDescuento, &precioFinal, respuestaScanf, respuestaScanf1)==0)
	{
		printf("El precio final es de %2.f", precioFinal);
	}
	else
	{
		printf("El precio y el descuento tienen que estar escritos con numeros, maestro");
	}
	return EXIT_SUCCESS;
}
float calcularPrecio(float precio, int descuento, float* precioConDescuento, int validacionPrecio, int validacionDescuento)
{
	float precioFinal;
	float calculoDescuento;
	int retorno;

	if(precio<0 || descuento <0 || validacionPrecio == 0 || validacionDescuento == 0)
	{
		retorno = -1;
	}
	else
	{
		retorno = 0;
		if(descuento == 0)
		{
			precioFinal = precio;
		}
		else
		{
			calculoDescuento = precio*descuento/100;
			precioFinal =  precio - calculoDescuento;
		}
	}
	if(retorno == 0)
	{
		*precioConDescuento = precioFinal;
	}
	return retorno;
}
