#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "funciones_decorativas.h"
#include "data.h"
#include "funciones_administrador.h"
#include "funciones_retorno.h"
#include "funciones_void.h"
#include "menus.h"

#define MAX 80
#define ARCHIVO_USUARIOS "usuarios.dat"
#define TECLA_ENTER 13
#define TECLA_BACKSPACE 8
#define LONGITUD 5
#define MAX_INTENTOS 3


int main()

{
system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
system("COLOR B0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
dibujarCuadro(1,1,77,3);


F_portada();
F_OpcionUsuario();
F_bienvenida();
do
{
	
	Centi=0;
	 
	F_InicioSesion();

     while (Centi==0)
	 {
		F_MenuPrincipal();
			
		switch(menu)
		{
		
			case 1:
				while (Centi == 2)
				{
					F_Submenu1();
			        switch(Submenu1)
					{ //switch controla todo el menu de comidas
 		
					case 1:
							gotoxy(6,4);
							F_Desayuno();	
									switch(SubDesayuno)	
									{
							   		case 1:	Platofruta();
									break;
									case 2:	ChunkyMonkey();
									break;
									case 3:	AvocadoToast();
									break;
									case 4: 
									break;
							        default: 
									printf("ESA OPCION QUE INGRESASTE ESTA INCORRECTA");
									}//SALIDA DEL SWITCH DESAYUNOS
					break;
								
					case 2:
					gotoxy(6,4);
					F_Entradas();
								switch(SubEntradas) {
								case 1: RockChicken();
								break;
								case 2: Tuetano();
								break;
							
								case 3: CevicheP();
								break;
								
  								case 4: CevicheThai();
								break;
								
								case 5:
								break;
						        default:printf("ESA OPCION QUE INGRESASTE ESTA INCORRECTA");
								}//SALIDA DE PLATO DE ENTRADAS
					break;
					
					case 3:
					gotoxy(6,4);
					F_Carne();	
								switch(SubCarne)
						       {
								case 1: BBR();
								break;
							
								case 2: Short();
								break;
							
								case 3: Entrana();
								break;

								case 4: 
									break;
			        			default: printf("ESA OPCION QUE INGRESASTE ESTA INCORRECTA");
							}//salisa menu de carnes
					break;
					
					case 4:
					gotoxy(6,4);
				    F_Burgers();	
							 switch(SubBurgers)
						      {
								case 1: panini();	
						     	break;
						
								case 2: LcBurguer();
								break;
							
								case 3: PCapresse();	
								break;
							
								case 4:
								break;
							
					        	default:printf("ESA OPCION QUE INGRESASTE ESTA INCORRECTA");
								}

					break;
					
					case 5:
					gotoxy(6,4);
					F_Ensaladas();	
							switch(SubEnsaladas)
							    {
							case 1: FruitS();
							break;
							
							case 2: BeefSalad();
							break;
							
							case 3: EnsPapaya();
							break;
							
							case 4:// volver al menu
							break;
							
					        default: printf("ESA OPCION QUE INGRESASTE ESTA INCORRECTA");
							}//SALIDA MENU DE ENSALADAS
							
					break;
					
					case 6:	
					gotoxy(6,4);
					F_Postre();	
						switch(SubPostre)
						    {
							case 1: Cannoli();
							break;
							
							case 2: Blueberry();
							break;
							
							case 3: Cannoli();
							break;
							
							case 4:// volver al menu
							break;
					        default: 
							printf("ESA OPCION QUE INGRESASTE ESTA INCORRECTA");
							}//SALIDAS MENU POSTRES							
					break;
					
					case 7:
					gotoxy(6,4);
			        F_Bebidas();
							switch(SubBebidas)
						    	{
							case 1:  Limonada();
						    break;
						
						    case 2:  Tamara();
							break;
							
							case 3:  JugoNaranja();
							break;
										
							case 4: Soda();							
							break;
								
							case 5:
							break;
							
							default:printf("ESA OPCION QUE INGRESASTE ESTA INCORRECTA");
							}//salida menu bebidas
							system("pause");
					break;

					case 8:
						F_MenuPrincipal();

						break;	
					default:printf("ESA OPCION QUE INGRESASTE ESTA INCORRECTA");
				  	
					}
				}
			break;		
			case 2:		
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
			break;	
			case 6: 

			system("cls");
			Centi=3;
			printf("/t/tSaliendo del Menu Principal  \n");
			printf("\t\t"); system("pause");
			break;	
		
			default:printf("ESA OPCION QUE INGRESASTE ESTA INCORRECTA");

}
}
}
while(Centi==3);
return 0;

}

