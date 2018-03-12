#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
/*Comentario
Proyecto!
Elaborado por: Victor Yesith Bruno, Leyder Londoño Mejia*/
using namespace std;

void menu();
void clientes();
void crear_cli();
void listar_cli();
void modificar_cli();

void productos();
void crear_producto();
void listar_producto();
void modificar_producto();

void facturas();
void crear_facturas();
void listar_facturas();

struct cliente{
char nombre[20];
char id[10];
char direccion[50];
unsigned long tel;
}cli[3] , *pcli=cli;

struct factura{
char id[3], producto[100],cliente[10];
int cant, disp;
int pago,nopago;
}factura[5],*pfactura=factura;
 
 struct productos{
 char codigo[3];
 char nom[30];
 char valor[20];
}producto[10],*pproducto=producto;
 
int opc,cantidad_cli,cantidad_product,cantidad_fact,i;

int id[10],codigo[3];
 
 
void encabezado(){
 printf("\t------------------------------------------------------\n\n"); 
 printf("\t- AV 30 DE AGOSTO CC VICTORIA PLAZA -\n"); 
 printf("\t- WHATTAPP:04146587788 -\n"); 
 printf("\t- FIJO:02643712033 -\n");
 printf("\t------------------------------------------------------\n\n"); 
}

void menu(){
    int opc = 0;
    do{
        printf("\n|-----------------------------------------|");
        printf("\n|             FACTURACION                 |");
        printf("\n|------------------|----------------------|");
        printf("\n|                  |                      |");
        printf("\n| 1. CLIENTES      | 2. PRODUCTOS         |");
        printf("\n|                  |                      |");
        printf("\n| 3.FACTURAS       | 0. CERRAR            |");
        printf("\n|                  |                      |");
        printf("\n|------------------|----------------------|");
        printf("\n|-----------------------------------------|");
        printf("\n\nESCOJA UNA OPCION: ");
        scanf("%d",&opc);
        
        switch(opc){
            case 0:
                system("cls");
                printf("í GRACIAS POR PREFERIRNOS !\n");
                exit(0);
            case 1:
                system("cls");
                clientes();
                break;
            case 2:
                system("cls");
                productos();
                break;
             case 3:
                system("cls");
                facturas();
                break;   
                
            default:
                system("cls");
                printf("La opcion que usted acaba de escoger no es valida.\n");
        }
    }while(opc != 0);
}

void clientes(){
	do{
		printf("\n|------------------------------------------|");
		printf("\n|--------        CLIENTES         ---------|");
		printf("\n|-------------------|----------------------|");
		printf("\n|                   |                      |");
		printf("\n| 1. CREAR          | 2. LISTAR            |");
		printf("\n| 3. MODIFICAR      | 0. CERRAR            |");
		printf("\n|                   |                      |");
		printf("\n|                   |                      |");
		printf("\n|                   |                      |");
		printf("\n|-------------------|----------------------|");
		printf("\n|------------------------------------------|"); 
		printf("\n\nESCOJA UNA OPCION: ");
		scanf("%d", &opc);
            switch(opc){
                case 0:
                    system("cls");
                    menu();
                case 1:
                    system("cls");
                    crear_cli();
                    break;
                case 2:
                    system("cls");
                    listar_cli();
                    break;
                 case 3:
                    system("cls");
                    modificar_cli();
                    break;
                default:
                    system("cls");
                    printf("La opcion que usted acaba de escoger no es valida.\n");
            }
        }while(opc != 0);
        
    }

void crear_cli(){
    system("cls");
	printf("\t OPCION 1: CREAR CLIENTES\n\n");
    fflush(stdin);
	printf("\n\nNumeros de clientes :");
    scanf("%d",&cantidad_cli);
	for(int i=0;i<cantidad_cli;i++){
		printf("\n Ingrese  Cliente:");
		fflush(stdin);
		printf("\n\nNombre:");
		fgets((pcli + i) -> nombre, 30, stdin);
		printf("\nCedula del cliente:");
		fgets((pcli + i) -> id, 10, stdin);
		fflush(stdin);
		printf("\nDireccion:");
		fgets((pcli + i) -> direccion, 20, stdin);
		printf("\nTelefono :");
		scanf("%lu",&(pcli + i) ->tel);
		fflush(stdin);
	}
system("cls");
}

void listar_cli(){
    for(int i=0;i<cantidad_cli;i++){
		printf("\n\nEl Nombre es:");
		printf("%s",(pcli + i) -> nombre);
		printf("\nLA Cedula del cliente es:");
		printf((pcli + i) -> id,10,stdin);
		printf("\nlA Direccion ES:");
		printf((pcli + i) -> direccion);
		printf("\nEL Telefono ES :");
		printf("%lu",(pcli + i) ->tel);
		printf("\n\n");
	}
 }

void modificar_cli(){
	int opc=0;
	int pos;
	listar_cli();
	printf("\nQue posicion desea modificar: ");
	scanf("%d",&pos);
	do{
		printf("\n|------------------------------------------|");
		printf("\n|--------   MODIFICAR CLIENTE     ---------|");
		printf("\n|-------------------|----------------------|");
		printf("\n|                   |                      |");
		printf("\n| 1. NOMBRE         | 2. CEDULA            |");
		printf("\n| 3. DIRECCION      | 4. TELEFONO          |");
		printf("\n| 0. ANTERIOR       |                      |");
		printf("\n|                   |                      |");
		printf("\n|-------------------|----------------------|");
		printf("\n|------------------------------------------|"); 
		printf("\n\nESCOJA UNA OPCION: ");
		scanf("%d", &opc);
		
		switch(opc){
			case 0:
			system("cls");
			clientes();
			
			case 1:
			system("cls");
			printf("\n\nPosicion[%1d] ",i);
			printf("Nombre del cliente:  ");
			printf("%s",(pcli + pos) -> nombre);
			printf("Nuevo nombre del cliente : ");
			scanf("%s",(pcli + pos) -> nombre);
			fflush(stdin);
			break;
			
		case 2:
			system("cls");
			printf("cedula del cliente:  ");
			printf((pcli + pos) -> id,10,stdin);
			fflush(stdin);
			printf("Nueva cedula del cliente:  ");
			scanf("%s",&(pcli + pos) -> id,10,stdin);
			fflush(stdin);
			break;
			
		case 3:
			system("cls");
			printf("Direccion: ");
			printf((pcli + pos) -> direccion);
			fflush(stdin);
			printf(" La nueva Direccion:");
			scanf("%s",&(pcli + i) -> direccion);
			fflush(stdin);
			break;
			
		case 4:
			system("cls");
			printf("\nTelefono :");
			printf("%lu",(pcli + pos) ->tel);
			fflush(stdin);
			printf("Nuevo numero de Telefono : ");
			scanf("%lu",&(pcli + pos) ->tel);
			fflush(stdin);
			break;
			
		default:
			system("cls");
			printf("La opcion que usted acaba de escoger no es valida.\n");
		}
		
	}
	while(opc != 0);
}

void productos(){
	int opc=0;
	do{
		    printf("\n|------------------------------------------|");
		    printf("\n|--------       PRODUCTOS         ---------|");
            printf("\n|-------------------|----------------------|");
            printf("\n|                   |                      |");
            printf("\n| 1. CREAR          | 2. LISTAR            |");
            printf("\n| 3. MODIFICAR      | 0. CERRAR            |");
            printf("\n|                   |                      |");
            printf("\n|                   |                      |");
            printf("\n|                   |                      |");
            printf("\n|-------------------|----------------------|");
            printf("\n|------------------------------------------|"); 
			printf("\n\nESCOJA UNA OPCION: ");
            scanf("%d", &opc);
            switch(opc){
                case 0:
                    system("cls");
                    menu();
                case 1:
                    system("cls");
                    crear_producto();
                    break;
                case 2:
                    system("cls");
                    listar_producto();
                    break;
                 case 3:
                    system("cls");
                    modificar_producto();
                    break;
                default:
                    system("cls");
                    printf("La opcion que usted acaba de escoger no es valida.\n");
            }
        }while(opc != 0);
        
    }

void crear_producto(){
    printf("\n\n1.OPCION:CREAR PRODUCTO\n\n");
    fflush(stdin);
	printf("\n\nNumeros de productos :");
    scanf("%d",&cantidad_product);
    for(int i=0;i<cantidad_product;i++){
		printf("\n\n Nombre del producto:");
		fflush(stdin);
		fgets((pproducto+i)->nom,30,stdin);
		printf("\nCodigo del producto:");
		fgets((pproducto+i)->codigo,10,stdin);
		printf("\nValor del producto:");
		fgets((pproducto+i)->valor,10,stdin);
		fflush(stdin);
	}
  }

void modificar_producto(){
	int opc=0;
	int pos;
	listar_producto();
	printf("\nQue posicion desea modificar: ");
	scanf("%d",&pos);
	do{
		printf("\n|------------------------------------------|");
		printf("\n|--------   MODIFICAR PRODUCTO    ---------|");
		printf("\n|-------------------|----------------------|");
		printf("\n|                   |                      |");
		printf("\n| 1. NOMBRE         | 2. CODIGO            |");
		printf("\n| 3. VALOR          | 0. ANTERIOR          |");
		printf("\n|                   |                      |");
		printf("\n|-------------------|----------------------|");
		printf("\n|------------------------------------------|"); 
		printf("\n\nESCOJA UNA OPCION: ");
		scanf("%d", &opc);
		
		switch(opc){
		case 0:
			system("cls");
			productos();
			
		case 1:
			system("cls");
			printf("\n\nPosicion[%1d] ",i);
			printf("Nombre del producto:  ");
			printf("%s",&(pproducto+pos)->nom,30,stdin);
			printf("Nuevo nombre del cliente : ");
			scanf("%s",&(pproducto+pos)->nom,30,stdin);
			fflush(stdin);
			break;
			
		case 2:
			system("cls");
			printf("codigo del producto:  ");
			printf((pproducto+pos)->codigo,10,stdin);
			fflush(stdin);
			printf("Nueva cedula del cliente:  ");
			scanf("%s",&(pproducto+pos)->codigo,10,stdin);
			fflush(stdin);
			break;
			
		case 3:
			system("cls");
			printf("Valor: ");
			printf((pproducto+pos)->valor,10,stdin);
			fflush(stdin);
			printf(" El nuevo valor:");
			scanf("%s",&(pproducto+pos)->valor,10,stdin);
			fflush(stdin);
			break;
			
		default:
			system("cls");
			printf("La opcion que usted acaba de escoger no es valida.\n");
		}
		
	}
	while(opc != 0);
}

void listar_producto(){
	for(int i=0;i<cantidad_product;i++){	
		printf("\n\n Nombre del producto es:");
		printf((pproducto+i)->nom,30,stdin);
		printf("\nCodigo del producto es:");
		printf((pproducto+i)->codigo,10,stdin);
		printf("\nValor del producto es:");
		printf((pproducto+i)->valor,10,stdin);
		
		printf("\n\n");
	}
}

void facturas(){
	int opc=0;
	do{
		    printf("\n|------------------------------------------|");
		    printf("\n|--------       FACTURAS         ---------|");
            printf("\n|-------------------|----------------------|");
            printf("\n|                   |                      |");
            printf("\n| 1. CREAR          | 2. LISTAR            |");
            printf("\n|                   | 0. CERRAR            |");
            printf("\n|                   |                      |");
            printf("\n|                   |                      |");
            printf("\n|                   |                      |");
            printf("\n|-------------------|----------------------|");
            printf("\n|------------------------------------------|"); 
			printf("\n\nESCOJA UNA OPCION: ");
            scanf("%d", &opc);
            switch(opc){
                case 0:
                    system("cls");
                    menu();
                case 1:
                    system("cls");
                    crear_facturas();
                    break;
                case 2:
                    system("cls");
                    listar_facturas();
                    break;
            
                default:
                    system("cls");
                    printf("La opcion que usted acaba de escoger no es valida.\n");
            }
        }while(opc != 0);
        
    }

void crear_facturas(){
   system("cls");
   printf("\t  CREAR FACTURA\n\n");
   fflush(stdin);
   printf("\n\nNumeros de facturas :");
   scanf("%i",&cantidad_fact);
   for(int i=0;i<cantidad_fact;i++){
	   printf("\n producto: #%d",i+1);
	   fflush(stdin);
	   printf("\n Codigo del producto:");
	   fgets((pfactura+i)->id,10,stdin);
	   printf("\n Descripcion del producto:");
	   fgets((pfactura+i)->producto,10,stdin);
	   printf("\nCodigo del cliente:");
	   fgets((pfactura+i)->cliente,10,stdin);
	   printf("\n Cantidad en letras:");
	   scanf("%i",&(pfactura+i)->cant);
	   fflush(stdin);
	   printf("\nEstado (si esta paga ingresa 1, de lo contrario 2):");
	   scanf("%d",&(pfactura+i)->pago);
	   fflush(stdin);
	   printf("\n\nconfirmar nuevamente  la OPCION: ");
	   scanf("%d", &opc);
	   switch(opc){
	   case 1:
		   system("cls");
		   printf("La factura esta paga \n");
		   break;
	   case 2:
		   system("cls");
		   printf("La factura no esta paga \n");
		   break;
	   }
getch();
  }
}
void listar_facturas(){
	for(int i=0;i<cantidad_fact;i++){
		printf("\n\nCodigo del producto:");
		printf((pfactura+i)->id);
		printf("\nDescripcion del producto:");
		printf((pfactura+i)->producto);
		printf("\nCodigo del cliente:");
		printf((pfactura+i)->cliente);
		printf("\n Cantidad:");
		printf("%d",(pfactura+i)->cant);
		printf("\n Estado:");
		printf("%d",(pfactura+i)->pago);
		
		printf("\n\n");
	}
}

void salir(){
    system("cls");
    printf("\n\n\t\t\tí GRACIAS POR PREFERIRNOS !");
    getch();		
}

int main(){
 encabezado();
 menu();
 clientes();
 crear_cli() ;
 listar_cli();
 modificar_cli();

 productos();
 crear_producto();
 listar_producto();
 modificar_producto();

 facturas();
 crear_facturas();
 listar_facturas();

 system("pause");
 return 0;
}
