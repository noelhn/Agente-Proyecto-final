


float TotalPagar(float cant, float precio){//Total a Pagar de las cuentas individualizadas
	
	float ISV15;

Subtotal=cant*precio;	


return Subtotal;

}
float CtaAcumulada(float Subt0){   //total a pagar de las cuentas acumuladas
	cuenta=cuenta+Subtotal;
	return cuenta;
}
float descto(float Subt){  //Funcion de Descuento 
float Subtotalcdescto;

Subtotalcdescto=Subtotal*0.15;	
return Subtotalcdescto;
}	
float scargo(float Stotal){  //Funcion que calcula el sobrecargo
sobrecargo=Subtotal+60;
return sobrecargo;
}
float St(float Stotal1){    //Funcion que calcula el Subtotal sin ISV
stt=Stotal1/1.15;
	
	return stt;
}
float impto(float sstotal){//Funcion que calcula el ISV 15%
float isv;
sbt=sstotal/1.15;
isv=(sbt*0.15);

return isv;
}



