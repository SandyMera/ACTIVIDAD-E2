 // MENU DE Mera Sandy
//
//
//
//
//
//
//


int MeraSandySumaN()
{
int MS_c=0,MS_n;
	float MS_s=0, MS_x;
	cout<<"Ingrese la cantidad de numeros  : ";
	cin>>MS_n;
	do{
         
	cout<<"Ingrese el  numero :";
	cin>>MS_x;
	MS_c=MS_c+1;
	MS_s=MS_c+MSs_x;
	}while(MS_c<MS_n);
	cout<<"La suma  es :"<<MS_s<<endl;
	
cout<<endl<<"//================================================"<<endl;
cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: MeraSandy-SumaN.cpp"<<endl;
cout<<"//====Autor: Mera Sandy"<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 14-05-2022"<<endl;
cout<<endl<<"//================================================"<<endl;
cout<<"la suma es : "<<MS_s<<endl;	
  return 0;

}


int MeraSandyCompara(){

float MS_x,Ms_y;
	 cout<<"ingrese el valor de MS_x: ";
	 cin>>MS_x;
	 cout<<"ingrese el valor de MS_y: ";
	 cin>>MS_y;
	 if(MS_x==MS_y){
 cout<<"el valor de MS_x="<<MS_x<<"es igual a MS_y="<<MS_y<<endl;

         }else{
         if (MS_x<MS_y){
cout<<"El valor de MS_x="  <<MS_x<<"es menor MS_y="<<MS_y<<endl;
         }else{
cout<<"EL valor de MS_y="<<MS_y<<"es menor a MS_x"<<MS_x<<endl;
     }

}


 cout<<"//=======Nombre de programa: Compara de dos numeros"<<endl;
cout<<"//====Archivo: MeraSandy-Compara.cpp"<<endl;
cout<<"//====Autor: Mera Sandy"<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;
cout<<endl<<"//========================="<<endl;
       
       }
	 return 0;




int MeraSandyPuntoventa()
{

 int MS_c=0 ,MS_P;
 float MS_A=0,MS_x,MS_Tb,MS_piva,MS_pdsc,MS-iva=0.12,MS_dsc=0.30,MS_vt;
 cout<<"Ingrese la cantidad de los productos: ";
          cin>>MS_P;
	  do{
cout<<"Ingrese el valor de los productos: ";
         cin>>MS_x;
	 MS_c=MS_c+1;
	 MS_A=MS_A+MS_x;
	 MS_Piva=MS_A*MS_iva;
	 cout<<"El valor del iva de la compra es de: $"<<MS_Piva<<endl;
	 MS_Psdc=A*MS_dsc;
	 cout<<"El valor del descuento de su compra es:$"<<MS_Psdc<<endl;
	 MS_Tb=MS_Piva+MS_Psdc;
        }while(MS_c<MS_P);
         if(MS_Tb==MS_A) {
	   cout<<"Su compra aplica para un descuento: "<<MS_Tb<<endl;
	   MS_iva=MS_Tb*MS_Piva/100;
	   MS_dsc=MS_Tb*MS_Psd/100;
          }else{
	   MS_vt=MS_A+MS_Piva-MS_Psdc;
cout<<"El valor total es de :$ " <<MS_vt<<endl;

cout<<endl<<"======================"<<endl;

 cout<<"//=======Nombre de programa: Punto de venta"<<endl;
cout<<"//====Archivo: MeraElba-puntoventa.cpp"<<endl;
cout<<"//====Autor: Mera Sandy "<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;
   }
	  return 0;
  }




int MeraSandyedad(){

int MS_da,MS_ma,MS_aa,MS_dn,MS_mn,MS_an,MS_a,MS_m,MS_d;
cout<<"Ingrese la fecha actual: Dia Mes y Año :";
	cin>>MS_da>>MS_ma>>MS_aa;
cout<<"Ingrese su fecha de nacimiento: Dia Mes Año :";
	cin>>MS_dn>>MS_mn>>MS_an;
	if(MS_da<MS_dn){
	MS_da=MS_da+30;
	MS_ma=MS_ma-1;
	MS_d=MS_da-MS_dn;
	}
	else{
	MS_d=MS_da-MS_dn;
	}
	if(MS_ma<MS_mn){
	MS_ma=MS_ma+12;
	MS_aa=MS_aa-1;
	MS_m=MS_ma-MS_mn;
	}
	else{
	MS_m=MS_ma-MS_mn;
	}
	MS_a=MS_aa-MS_an;



cout<<"Usted tiene: " <<MS_a<< "años" <<MS_m<< "meses" <<MS_d<< "y" <<MS_d<< "dias"<<endl;

cout<<"//=======Nombre de programa: Compara de dos numeros"<<endl;
cout<<"//====Archivo: MeraSandy-edad.cpp"<<endl;
cout<<"//====Autor: Mera Sandy "<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;

	return(0);
}




int MeraSandyCuentaMoneda(){

int MS-n, MS_c=0,S_c1=0, MS_c2=0;
float MS_x,MS_a=0, MS_a1=0, MS_a2=0;
       cout<<"¿Cuantas monedas va a ingresar?: ";
       cin>>MS_n;
       do{
cout<<"Ingrese el valor de la moneda (0.10, 0.25): ";
        cin>>MS_x;
        MS_c=MS_c+1;
        MS_a=MS_a+MS_x;
        if(MS_x==0.10){

	MS_c1=MS_c1+1;
	MS_a1=MS_a1+MS_x;
        }else{
	MS_c2=MS_c2+1;
	MS_a2=MS_a2+MS_x;
      }
        }while(MS_c<MS_n);
cout<<"El resultado es :"<<endl;
cout<<"Cantidad de monedas ingresadas :"<<MS_c<<endl;
cout<<"Total del dinero contado :"<<MS_a<<endl;
cout<<"Cantidad de monedas de 0.10ctv ingresadas :"<<MS_c1<<endl;
cout<<"Total del dinero de monedas de 0.10ctv :"<<MS_a1<<endl;
cout<<"Cantidad de monedas de 0.25ctv ingresadas :"<<MS_c2<<endl;
cout<<"Total del dinero de monedas de 0.25ctv :"<<MS_a2<<endl;

cout<<endl<<"==========================="<<endl;
cout<<"//=======Nombre de programa: Cuenta moneda"<<endl;
cout<<"//====Archivo: MeraSandy-cuentamoneda.cpp"<<endl;
cout<<"//====Autor: Mera Sandy "<<endl;
cout<<"//====Fecha de elaboracion: 02-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;
       return 0;
}




int MeraSandymenu()
{
	int op,flag;

	do{
			system("cls");
			cout<<"**************PROGRAMAS DE MERA SANDY**************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n";
			cout<<"4.- CALCULA LA EDAD. \n";
			cout<<"5.- MAQUINA CUANTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; 
			switch(op){
				case 1:
					system("cls");
					cout<<"\n SUMA VARIOS NUMEROS  "<<endl;
					 MeraSandySumaN();
					break;
				case 2:
					system("cls");
					cout<<"\nCOMPARA DE DOS NUMEROS ";
					MeraSandyCompara();
					break;
				case 3:
				        system("cls");
					cout<<"\n PUNTO DE VENTA ";
					MeraSandyPuntoVenta();
					break;
				case 4:
					system("cls");
					cout<<"\n CALCULA LA EDAD ";
					MeraSandylaedad();
					break;
				case 5:
					system("cls");
					cout<<"\n MAQUINA CUANTA MONEDAS ";
					MeraSandyCuentaMoneda();
					break;

				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    
				  }
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla

	}while(op!=0);

	

	cout<<"================================================\n";
	cout<<"   Mera Sandy      \n";
	cout<<" Gmail:Sandy.mera.guerrero@utelvt.edu.ecu  \n";
	cout<<"=================================================\n";

	return(0);

}
