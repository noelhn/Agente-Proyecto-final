#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void F_MenuPrincipal2(){
 system("cls");

gotoxy(6,4);
 printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
 printf("\t\t   ELIGE UNAS LAS SIGUIENTES OPCIONES    \n");
 printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
 printf("\t\tCONFIGURACION DEL MENU  ----[1]  \n"); 
 printf("\t\tREGISTRO  ------------------[2]  \n");
 printf("\t\tREPORTERIA ------------------[3]  \n");
 printf("\t\tCONFIGURACIONES-------------[4]  \n");
 printf("\t\tSALIR DEL SISTEMA ----------[5]  \n\n");
 printf("\t\t::::::::::::::::::::::::::::::::::::::::::::\n");
 printf("\t\tElige una opcion \n"); 
 printf("\t\t");scanf("%d",&menu2);
 printf("\t\t");system("pause");
 }
 void F_InicioSesion2()
{
	printf("\t\t "); system("cls");
	gotoxy(6, 4);
	printf("\t=========================================\n\n");
	printf("\t=========================================\n\n");
	printf("\t\t INICIO DE SESION DEL ADMINISTRADOR: \n");
	printf("\t\tIndique la opcion para continuar  \n");
	printf("\t\t1. Inicio de Sesion  \n");
	printf("\t\t2. Crear tu cuenta \n");

	printf("\t\t");
	scanf("%d", &eleccion2);
