
#include <stdlib.h>
#include <stdio.h>
#include "windows.h"
#include <conio.h>


void F_OpcionUsuario(){
gotoxy(6,4);
	printf("\t\t Bienvenido, Favor elige una opcion ? \n");
	
	printf("\n\n\n");
	

	
	printf("1.Cliente de la Aplicacion \n");
	printf("2.Administrador de la Aplicacion \n");
	printf("\t\t\t"); scanf("%d", &opcionusuario);

	if (opcionusuario==1){
		
		
	}
	else
	{
		do
		{
		 
		F_InicioSesion2();
		
		F_MenuPrincipal2();
		
		}while(Centi==5);	
	}
	
	
	
	printf("\n\n\n");
	printf("\t\t\t"); system("cls");


	printf("\t====================================================\n\n");
	printf("\t\t"); system("pause");
	printf("\t\t"); system("cls");


}



void F_CreacionUser(){
	
    system("cls");
   gotoxy(6,4);
    printf("\t\t=========================================\n\n");
    printf("\t\t=========================================\n\n");
    printf("\t\tOk..No te preocupes \n");
    printf("\t\tTe ayudare a crear tu Perfil  \n");
    printf("\t\tSolo ocupamos unos cuantos datos tuyos \n\n");
    printf("\t\t");system("pause");
    
    
	system("cls");
	gotoxy (6,4 );	
  printf("\t\t=========================================\n\n");
  printf("\t\tINGRESA LOS SIGUIENTES DATOS..\n\n");	
  printf("\t\tINGRESE EL NOMBRE COMPLETO:\n");
  printf("\t\t");scanf("%s[^\n]",&Name);
  fflush(stdin);
  printf("\t\tDIGITE SU NUMERO DE DNI:\n");
  printf("\t\t");scanf("%s[^\n]",&IdCliente);
  fflush(stdin);
  printf("\t\tINGRESE SU DOMICILIO:\n");
  printf("\t\t");scanf("%s[^\n]",&Address);
  printf("\t\tSU NUMERO DE TELEFONO:\n");
  fflush(stdin);
  printf("\t\t");scanf("%d[^\n]",&Ntel);
  fflush(stdin);
  printf("\t\tINGRESE LA CLAVE :\n");
  printf("\t\t");scanf("%d",&Pass);

  printf("\n");
  printf("\t\t=========================================\n\n");
  printf("\t\t=========================================\n\n");
  printf("\t\t Todos tus datos fueron ingresados correctamente \n");
  printf("\t\t A continuacion entraremos a la sesion de inicio \n");

  printf("\t\t"); system("pause");
  printf("\t\t"); system("cls");
} 
void F_InicioSesion()
{

	system("COLOR B0");
	printf("\t\t "); system("cls");
	gotoxy(6, 4);
	printf("\t=========================================\n\n");
	printf("\t=========================================\n\n");
	printf("\t\t INICIO DE SESION: \n");
	printf("\t\tIndique la opcion para continuar  \n");
	printf("\t\t1. Inicio de Sesion  \n");
	printf("\t\t2. Crear tu cuenta \n");

	printf("\t\t");
	scanf("%d", &eleccion);

	if (eleccion == 1)
	{

		system("cls");
		gotoxy(6, 4);
		printf("\t\t=========================================\n\n");
		printf("\t\t=========================================\n\n");
		printf("\t\tDigite Su Numero de Telefono \n");
		printf("\t\t");
		scanf("%d", &Username);

		printf("\t\tClave: \n");

		printf("\t\t");
		scanf("%d", &Password);

		printf("\t\t");
		system("pause");

		if (Username == Ntel && Password == Pass)
		{
			system("cls");
			gotoxy(6, 4);
			printf("\t=========================================\n\n");
			printf("\t=========================================\n\n");
			printf("\t\t");
			printf("Login correcto.....  \n");
			printf("\t\t");
			printf("Cargando Menu Principal.....  \n");
			Sleep(2000);
		}
		else
		{
			Centi = 3;
			system("cls");
			system("color 4f");
			cont = cont + 1;
			gotoxy(6, 4);
			printf("\t=========================================\n\n");
			printf("\t=========================================\n\n");
			printf("\t\tUsuario o clave equivocada  \n");
			printf("\t\tLe restan %d intentos  \n", (xintentos - cont));
			printf("\t\tpara que su usuario sea bloqueado  \n");
			system("pause");
			system("cls");
		}
		while (cont >= 3)
		{
			Centi = 1;
			gotoxy(x = 6, y = 4);
			system("color 4f");
			printf("\t=========================================\n\n");
			printf("\t=========================================\n\n");
			printf("\tSaliendo del sistema despues de 3 login incorrectos \n");
			system("\tpause");
			system("cls");
			cont = 1;
		}
	}
	if (eleccion == 2)
	{
		F_CreacionUser();
	}
}
void F_bienvenida(){

	gotoxy(6,4);
	printf("\t\t Bienvenido, como te llamas? \n");

	printf("\t\t\t"); scanf("%s", &nametemp);

	printf("\n\n\n");
	printf("\t\t\t"); system("cls");

	printf("\n\n\n");
	printf("\t\t\t"); system("cls");
	gotoxy(6,4);
	printf("=====================================================\n\n");
	printf("\t\tHola %s \n\n", &nametemp);
	printf("\n");
	printf("\t\tTe damos La bienvenida, Mi Nombre es AVA \n\n ");
	printf("\t\tTe ayudare como tu asistente virtual     \n\n ");
	printf("\t====================================================\n\n");
	printf("\t\t"); system("pause");
	printf("\t\t"); system("cls");

	gotoxy(6, 4);
	printf("\t=====================================================\n\n");
	printf("\t=====================================================\n\n");
	printf("\t\tYa tienes una cuenta con nosotros: 1.SI-2.NO \n\n");
	printf("\t\t"); scanf("%d", &resp);

	if (resp == 1)
	{
}		
  	 if (resp == 2 ) {
 	F_CreacionUser();
 	
    }
}
void formapago(){
	system("cls");
	gotoxy(6, 4);
	printf("\t==========================================\n");
	printf("\t==========================================\n");
	printf("\t\tComo desea hacer el pago \n");
	printf("\t\t1.Tarjeta de Credito \n");
	printf("\t\t2.Efectivo u otro pago \n");
	scanf("%d", &fp);
	if (fp == 1)
	{
		system("cls");
		gotoxy(6, 4);
		printf("\t==========================================\n");
		printf("\t==========================================\n");
		printf("\t\tEstamos validando su Tarjeta en sistema \n");
		printf("\t\tPago procesado con exito\n");
		printf("\t\tEmitiendo su factura \n");
		printf("\t"); system("pause");		
}
if (fp==2)
{
	system("cls");
	gotoxy(6, 4);
	printf("\t==========================================\n");
	printf("\t==========================================\n");
	printf("\t\tIngrese el cambio de efvo en su orden \n");
	scanf("%f", &cambio);
	printf("\t\tDato Ingresado con exito\n");
	printf("\t\tEmitiendo su factura\n");
	printf("\t"); system("pause");
}
}
void  F_FacturaP(){
system("cls");
gotoxy(6, 4);
printf("\t\t RESTAURANTE LA CUISSINETE \n");
printf("\t\t::::::::::::::::factursa:::::::::::::::::\n");
printf("\t\n     \n");
printf("\t\n    \n");
printf("\t\n    \n");
printf("\t\tRTN: 08019006042676  \n");
printf("\t\temail:info@lacuisinettehn.com \n");
printf("\t\tCAI: 717049-9BA831-C14EBC-33F443  \n");
printf("\n   \n");
printf("\n   \n");
printf("\t\tNumero de Factura \n");
printf("\t\tnombre del cliente %c \n",  LastName);
printf("\t\ttelefono %d \n",Ntel);
printf("\t\tImpuesto S/venta 15 L .%2.f \n ",impto(CtaAcumulada(TotalPagar(cant,pxp))));
printf("\t\tGRAN TOTAL A PAGAR L. %2.f \n ",CtaAcumulada(TotalPagar(cant,pxp)));     //Gran total del servicio para llevar
printf("\n    \n");

printf("\t");system("Pause");
printf("\t");system("cls");

gotoxy(6, 4);
printf("\t\t=========================================================\n");
printf("\t\tSU PEDIDO HA SIDO INGRESADO CON EXITO  \n");
printf("\t\tSE LE CONFIRMARA A SU TEL CUANDO SU PEDIDO ESTE LISTO   \n\n");
printf("\t\t.................... G R A C I A S.........................\n \n");
printf("\t\t=========================================================\n");
printf("\t");system("Pause");
printf("\t");system("cls");

cuenta=0;
}
void F_FacturaD(){
system("cls");
gotoxy(6, 4);
printf("\t\tRESTAURANTE LA CUISINETE \n");
printf("\t\t:::::::::::::::::::::::::factura:::::::::::::::\n");
printf("\n                           \n");
printf("\n    \n");
printf("\n    \n");
printf("\n    \n");
printf("\n    \n");
printf("\n    \n");
printf("\t\tRTN: 08019006042676                 \n");
printf("\t\temail:info@lacuisinettehn.com       \n");
printf("\t\tCAI: 717049-9BA831-C14EBC-33F443    \n");
printf("\n    \n");  
printf("\n    \n");
printf("\t\tNumero de Factura \n");
printf("\t\tnombre del cliente %c \n",LastName);
printf("\t\ttelefono %d \n",Ntel);
printf("\t\tSubtotal antes de ISV L. %2.f \n",St(CtaAcumulada(TotalPagar(cant,pxp))));
printf("\t\tImpuesto S/venta 15 L. %2.f \n",impto(CtaAcumulada(TotalPagar(cant,pxp))));
printf("\t\tSobrecargo Servicio Domicilio   L. %2.f \n",scargo(TotalPagar(cant,pxp)));
STTT=St(CtaAcumulada(TotalPagar(cant,pxp)))+impto(CtaAcumulada(TotalPagar(cant,pxp)))+scargo(TotalPagar(cant,pxp));
printf("\t\tGRAN TOTAL A PAGAR L. %2.f \n",STTT);

system("Pause");
system("cls");
gotoxy(6, 4);
printf("\t=========================================================\n");
printf("\t\tSU PEDIDO HA SIDO INGRESADO CON EXITO  \n");
printf("\t\tSE LE CONFIRMARA A SU TEL CUANDO SU PEDIDO ESTE LISTO  \n");
printf("\t\t.................... G R A C I A S.........................\n \n");
printf("\t\t=========================================================\n");
printf("\t");system("Pause");
printf("\t");system("cls");

cuenta=0;
}
void F_retorno(){

	gotoxy(6, 4);
	printf("\t===========================================\n");
	printf("\t===========================================\n");
	printf("\t\tDesea seguir ordenando\n");
	printf("\t\t1.SI \n");
	printf("\t\t2.NO \n");

	printf("\t\t");scanf("%d", &r);
	if (r == 1)
	{

		gotoxy(6,4);
		printf("\t================================================================\n");
		printf("\t================================================================\n");
		printf("\t\tHola, Enhorabuena \n \t\tsigue navegando nuestro disfrutando nuestro menu \n");
		printf("\t\t"); system("pause");
	
}
if (r==2){
	system("cls");
     gotoxy(6,4);
	 printf("\t============================================================\n");
	 printf("\t============================================================\n");
	 printf("\t\t-----Bon Appetit-----\n");
	 printf("\t\tAhora vamos hacer la gestion de pago de tu pedido \n");
	 printf("\n\t\t"); system("pause");

	 system("cls");
	 gotoxy(6, 4);
	 printf("\t==========================================\n");
	 printf("\t==========================================\n");
	 printf("\t\tCOMO DESEA SU PEDIDO \n");
	 printf("\t\t1. PARA LLEVAR                 \n");
	 printf("\t\t2. SERVICIO DOMICILIO     \n");
	 printf("\t==========================================\n");
	 printf("\t==========================================\n");
	 printf("\t\t");
	 scanf("%d", &DOP);
	 if (DOP == 1)
	 {
		 formapago();
		 F_FacturaP();
		 Centi = 0;
			}
			if (DOP==2)
			{formapago();
			 F_FacturaD();
			 Centi = 0;
				}	
				}
				}
void TarjetaC (){
   gotoxy(6,4);
  system("cls");
  printf("\t\t=========================================\n\n");
  printf("\t\tHOLA... INGRESA LOS SIGUIENTES DATOS..\n\n");	
  printf("\t\tINGRESE EL NOMBRE:\n");
  printf("\t\t");scanf("%s[^\n]",&nombre);
  fflush(stdin);
  printf("\t\tINGRESE LOS DIGITOS DE LA TARJETA:\n");
  printf("\t\t");scanf("%[^\n]",&NumTar);
  fflush(stdin);
  printf("\t\tINGRESE El VENCIMIENTO:\n");
  printf("\t\tANIO :");
  scanf("%i",&a);
  printf("\t\tMES:");
  scanf("%i",&fecha);
  printf("\t\tINGRESE EL CVC:\n");
  printf("\t\t");scanf("%d",&cvc);
  printf("\n");
  printf("\t\t...TARJETA INGRESADA...\n\n");	
  printf("\t\t=========================================\n\n");
  
  system("pause");

}
void estadocuenta(){
	gotoxy(6, 4);
	printf("\t\t==================== DATOS =====================\n\n");
	printf("\t\t NOMBRE: %s\n", Name[20]);
	printf("\t\t APELLIDO: %s\n", LastName[20]);
	printf("\t\t Direccion: %s\n", Address[20]);
	printf("\t\t NUMERO DE IDENTIDAD: %s\n", Idcliente);
	printf("\t\t NUMERO TELEFONICO: %d\n", Ntel);
	printf("\t\t================================================\n");
	system("pause");
}


