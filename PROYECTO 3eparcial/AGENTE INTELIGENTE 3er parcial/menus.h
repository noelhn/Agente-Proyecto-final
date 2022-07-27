#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void F_portada(){
printf(" \n");

 printf("|\t               RESTAURANTE LA CUISINETTE               \n");
printf("|\t                  ALTA COCINA | LOUNGUE |              \n");

printf("\t             BIENVENIDOS A LA PLATAFORMA VIRTUAL  \n");
printf("\n");
printf("\tCon tu App podras hacer solicitudes de nuestro menu y reservaciones  \n");
printf("\n\n\n\n\n\n");

printf("\tLa Cuisinette Honduras | www.lacuisinettehn.com \n");
printf("\tParte de GRUPO CRUZADI SA de CV \n");
printf("\tTodos los derechos reservados \n\tApp LCUI v1.0 \n\t2022 \n");
 printf("\t");system("pause");
printf("\t");system("cls");
}



void F_MenuPrincipal(){
 system("cls");

printf("\t\tUsuario %d \n",Ntel);
gotoxy(6,4);
 printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
 printf("\t\t   ELIGE UNAS LAS SIGUIENTES OPCIONES    \n");
 printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
 printf("\t\tMENU DE LA CASA  ------------    [1]  \n"); 
 printf("\t\tTU CUENTA  ----------------------[2]  \n");
 printf("\t\tFORMAS DE PAGO ------------------[3]  \n");
 printf("\t\tMEMBRESIAS-------- ----------    [4]  \n");
 printf("\t\tTRANSACCIONES--------------------[5]  \n");
 printf("\t\tSALIR DEL SISTEMA -----------    [6]  \n\n");
 printf("\t\t::::::::::::::::::::::::::::::::::::::::::::\n");
 printf("\t\tElige unas de las opciones que mas te guste  \n"); 
 printf("\t\t");scanf("%d",&menu);
 printf("\t\t");system("pause");
 Centi=2;
 }
 
 
void F_Submenu1(){
 system("cls");
gotoxy(6,4);
printf("\t\tUsuario %d \n",Ntel);
printf("\t\tValor de su cuenta L.  %2.f\n",cuenta);
printf("\t\t::::::::::::::::::::::::::::::::::::::::::::\n");
printf("\t\t   ELIGE UNAS LAS SIGUIENTES OPCIONES    \n");
printf("\t\t::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tDESAYUNOS  ------------------ [1]  \n"); 
printf("\t\tENTRADAS--------- ----------- [2]  \n");
printf("\t\tCARNES ---------------------- [3]  \n");
printf("\t\tSANDWICHES & BURGERS -------- [4]  \n");
printf("\t\tENSALADAS  -------------------[5]  \n");
printf("\t\tPOSTRES  -------------------- [6]  \n");
printf("\t\tBEBIDAS --------------------- [7]  \n");
printf("\t\tSALIR AL MENU PRINCIPAL------ [8]  \n\n");
printf("\t\t::::::::::::::::::::::::::::::::::::::::::::\n");
printf("\t\tElige unas de las opciones que mas te guste  \n");

printf("\t\t");scanf("%d",&Submenu1);
printf("\t\t"); system("pause");
}
void F_Desayuno(){
system("cls");
printf("\t\tUsuario %d \n",Ntel);
printf("\t\tValor de su cuenta L.  %2.f\n", cuenta);
gotoxy(6,4);
printf("\n");
printf("\t\t::::::::::::::::::: D E S A Y U N O S ::::::::::::\n\n");
printf("\t\t1. PLATO DE FRUTA FRESCA    L.185.00   \n"); 
printf("\t\t2. CHUNKY MONKEY OVERNIGHT  L.150.00   \n"); 
printf("\t\t3. AVOCADO TOAST----------- L.145.00   \n"); 
printf("\t\t4. VOLVER AL MENU ANTERIOR                \n");
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tUsuario %d \n",Ntel);
printf("\t\tElige unas de las opciones que mas te guste  \n");
printf("\t\t");scanf("%d",&SubDesayuno);
}	
void F_Bebidas(){
system("cls");	
printf("\t\tUsuario %d \n",Ntel);
printf("\t\tValor de su cuenta L.  %2.f\n", cuenta);

gotoxy(6,4);
 printf("\n");
 printf("\t\t::::::::::::::: B E B I D A S :::::::::::::\n\n");
 printf("\t\t1. LIMONADA-------------------- L.25.00   \n"); 
 printf("\t\t2. JUGO DE TAMARINDO----------- L.25.00   \n"); 
 printf("\t\t3. JUGO DE NARANJA-------------- L.25.00   \n"); 
 printf("\t\t4. REFRESCO SODA 12 ONZ-------- L.50.00   \n");
 printf("\t\t5. VOLVER AL MENU ANTERIOR                \n");
 printf("\t\t::::::::::::::: ::::::::::::::::: ::::::::::::\n\n");
printf("\t\tUsuario %d \n",Ntel);
 printf("\t\tElige unas de las opciones que mas te guste  \n");
 printf("\t\t");scanf("%d",&SubBebidas);	
}
void F_Entradas(){
	
system("cls");
gotoxy(6,4);
printf("\t\tValor de su cuenta L.  %2.f\n", cuenta);
printf("\n");
printf("\t\t::::::::::::::: E N T R A D A S :::::::::::::\n\n");
printf("\t\t[1] ROCK CHICKEN -----------  L.200.00   \n");
printf("\t\t[2]TUETANO A LA PARILLA----  L.150.00   \n");
printf("\t\t[3]CEVICHE PERUANO---------  L.185.00   \n");
printf("\t\t[4]CEVICHE TAIN------------  L.170.00   \n");
printf("\t\t[5]VOLVER AL MENU ANTERIOR               \n");
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::\n\n");

printf("\t\tElige unas de las opciones que mas te guste  \n");
printf("\t\t");scanf("%d",&SubEntradas);	
}		
void F_Ensaladas(){
	
system("cls");
gotoxy(6,4);
 printf("\n");
 printf("\t\t::::::::::::::: E N S A L A D A S :::::::::::::\n\n");
 printf("\t\t[1] FRUIT SALAD-----------  L.200.00   \n"); 
 printf("\t\t[2] BEEF SALAD------------  L.150.00   \n"); 
 printf("\t\t[3] ENSALADA DE PAPAYA----  L.185.00   \n"); 
 printf("\t\t[4] VOLVER AL MENU ANTERIOR               \n");
 printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::\n\n");
 

 printf("\t\tElige unas de las opciones que mas te guste  \n");
printf("\t\t");scanf("%d",&SubEnsaladas);
	
}	
void F_Burgers(){
	
system("cls");
gotoxy(6,4);
printf("\n");
 printf("\t\t:::::::::::::::::S A N D W I C H E S::::::::::::\n");
printf("\t\t:::::::::::::::::::::::: & ::::::::::::::::::::::\n");
 printf("\t\t:::::::::::::::::: B U R G E R S::::::::::::::::\n\n");
 printf("\t\t[1] PANINI IBERICO---------- L.140.00   \n"); 
 printf("\t\t[2] LC BURGER--------------  L.170.00   \n"); 
 printf("\t\t[3] PANONI CAPRESSE--------  L.189.00   \n"); 
 printf("\t\t[4]VOLVER AL MENU ANTERIOR               \n");
 printf("\t\t::::::::::::::::::::::::::::::::::::::::::::\n\n");
 

 printf("\t\tElige unas de las opciones que mas te guste  \n");
printf("\t\t");scanf("%d",&SubBurgers);
	
}
void F_Carne(){
	
system("cls");
gotoxy(6,4);
 printf("\n");
printf("\t\t::::::::::::::: C A R N E S ::::::::::::::::::::\n\n");
 printf("\t\t[1] BABY BACK RIBS------- L.490.00   \n"); 
 printf("\t\t[2] SHORT RIBS----------- L.170.00   \n"); 
 printf("\t\t[3] ENTRA�A-------------  L.189.00   \n"); 
 printf("\t\t[4]VOLVER AL MENU ANTERIOR               \n");
printf("\t\t::::::::::::::: ::::::::::::::::: ::::::::::::\n\n");
 
 
 printf("\t\tElige unas de las opciones que mas te guste  \n");
 printf("\t\t");scanf("%d",&SubCarne);
		
}
void F_Postre(){
	
system("cls");
gotoxy(6,4);
printf("\n");
 printf("\t\t::::::::::::::: : P O S T R E S::::::::::::::::\n\n");
 printf("\t\t[1]CANNOLI--------------L.80.00   \n"); 
 printf("\t\t[2]BLUEBERRY------------L.190.00   \n"); 
 printf("\t\t[3]PERAS MERLOT---------L.150.00   \n"); 
 printf("\t\t[4]VOLVER AL MENU ANTERIOR               \n");
 
 printf("\t\t::::::::::::::: ::::::::::::::::: ::::::::::::\n\n");
 printf("\t\tElige unas de las opciones que mas te guste  \n");
printf("\t\t");scanf("%d",&SubPostre);	
}
void Platofruta(){
printf("\t\t");system("pause");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
printf("\t\t");system("cls");
printf("\t\tHola %s %cque gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");

float pxp=ppf;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 


printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
printf("\t\t");system("cls");
F_retorno();		
}
void ChunkyMonkey(){
printf("\t\t");system("pause");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\tHola %s %cque gran Eleccion, \n",Name,LastName);

gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d  CHUNKY MONKEY OVERNIGHT\n",cant);

float pxp=cm;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 

printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void AvocadoToast(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t %s %s Que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d  AVOCADO TOAST\n",cant);
pxp=av;
printf("\t\tSubtotal de su eleccion L. %2.f\n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f  \n",CtaAcumulada(TotalPagar(cant,pxp)));
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void RockChicken(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d ROCK CHICKEN\n",cant);
float pxp=rock;
printf("\t\tSubtotal de su eleccion L. %2.f\n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f  \n",CtaAcumulada(TotalPagar(cant,pxp)));
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void Tuetano(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t %s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d TUETANO A LA PARILLA\n",cant);
float pxp=tue;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();  
}
void CevicheP(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s % que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d CEVICHE PERUANO\n",cant);
float pxp=cev1;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void CevicheThai(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d CEVICHE THAI\n",cant);
float pxp=cev2;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
STTT1 = CtaAcumulada(TotalPagar(cant, pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",STTT1); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
  printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void BBR(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d BABY BACK RIBS \n",cant);
float pxp=br;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void Short(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s Que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d  SHORT RIBS\n",cant);
float pxp=shor;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void Entrana(){

printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d ENTRA�A\n",cant);
float pxp=entra;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void panini(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d PANINI IBERICO \n",cant);
float pxp=pan;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void LcBurguer(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d  LC BURGER\n",cant);
float pxp=lc;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();

}
void PCapresse(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d PANONI CAPRESSE \n",cant);
float pxp=pc;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);

}
void FruitS(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d FRUIT SALAD\n",cant);
float pxp=fr;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void BeefSalad(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d  BEEF SALAD \n",cant);
float pxp=bee;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void EnsPapaya(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d ENSALADA PAPAYA\n",cant);
float pxp=ppya;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void Cannoli(){							
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d CANNOLI\n",cant);
float pxp=cann;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void Blueberry(){						
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d  BLUEBERRY \n",cant);
float pxp=bl;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void Limonada(){
							
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d LIMONADA \n",cant);
float pxp=lim;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();

}
void Tamara(){
printf("\t\t");printf("\t\tCuantas ordenes desea?\n");
printf("\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t %s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d  JUGO DE TAMARINDO\n",cant);
float pxp=tam;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();
}
void JugoNaranja(){
  								
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
system("cls");
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d JUGO DE NARANJA\n",cant);
float pxp=na;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();  
}
void Soda(){
printf("\t\t");system("pause");
printf("\n");
printf("\t\tCuantas ordenes desea?\n");
printf("\t\t");scanf("%d",&cant);
system("cls");
printf("\t\t%s %s que gran Eleccion, \n",Name,LastName);
gotoxy(6,4);
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\tHa elegido %d REFRESCO SODA\n 12 ONZ",cant);
float pxp=soda;
printf("\t\t El subtotal a pagar es:L. %2.f \n",TotalPagar(cant,pxp));
printf("\t\tEL TOTAL DE SU CUENTA ES L. %2.f \n",CtaAcumulada(TotalPagar(cant,pxp))); 
printf("\t\t:::::::::::::::::::::::::::::::::::::::::::::::::::\n\n");
printf("\t\t");system("pause");
system("cls");
gotoxy(6,4);
F_retorno();

}


