#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {

	int opcion = 1;
	do{
		printf("\n1-Mostrar tablero de ajedrez\t2-Hacer una movida de pieza\t0-Salir del juego\n\n");
		printf("Opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1:{
				system("cls");
				int i, j;
				printf("\nColor dse Piezas\n");
				printf("\nBlanco = 1\nNegro = 2\n\n");
				printf("Nombre de Piezas: \n");
				printf("R = Rey\nD = Dama\nA = Alfil\nC = Caballo\nT= Torre\nP = Peon");
				printf("\n\n\n");
								    
				for (i = 0; i < 9; i++){
					for (j = 0; j < 9; j++){		        	
					    //PARA LOS PEONES
						if(i == 1 && j < 8){
							printf("\tP2");
							if(j < 8){
								printf("  |  ");
							}	
						}          
						else if(i == 6 && j < 8){
								printf("\tP1");
							if(j < 8){
								printf("  |  ");
							}
						}
						//PARA LAS TORRES
						else if((i==0 && j==0) || (i==0 && j==7)){
							printf("\tT2");
							if(j == 0 || j == 7){
								printf("  |  ");
							}	
						}	
						else if((i==7 && j==0) || (i==7 && j==7)){
							printf("\tT1");
							if(j == 0 || j == 7){
								printf("  |  ");
							}
						}
								            
						//PARA LOS CABALLOS
						else if((i==0 && j==1) || (i==0 && j==6)){
							printf("\tC2");
							if(j==1 || j == 6){
								printf("  |  ");
							}
						} 		
						else if((i==7 && j==1) || (i==7 && j==6)){
							printf("\tC1");
							if(j==1 || j == 6){
								printf("  |  ");
							}
						}
								            
						//PARA LOS ALFILES
						else if((i==0 && j==2) || (i==0 && j==5)){
							printf("\tA2");
							if(j==2 || j == 5){
								printf("  |  ");
						    }
						}
						else if((i==7 && j==2) || (i==7 && j==5)){
							printf("\tA1");
							if(j==2 || j == 5){
								printf("  |  ");
							}
						}
								            
						//PARA LA REINA
						else if(i==0 && j==3){
							printf("\tD2 ");
							if(j == 3){
								printf(" | ");
							}
						}  	
						else if(i==7 && j==3){
							printf("\tD1 ");
							if(j == 3){
								printf(" | ");
							}
						}
								            
						//PARA EL REY
						else if (i==0 && j==4){
							printf("\tR2 ");
							if(j == 4){
								printf(" | ");
							}
						}
						else if(i==7 && j==4){
							printf("\tR1 ");
							if(j == 4){
								printf(" | ");
							}
						}
						else if(i == 0 && j == 8){
							printf("8");
						}
						else if(i == 1 && j == 8){
							printf("7");
						}  
						else if(i == 2 && j == 8){
							printf("6");
						}
						else if(i == 3 && j == 8){
							printf("5");
						}
						else if(i == 4 && j == 8){
							printf("4");
						}
						else if(i == 5 && j == 8){
							printf("3");
						}
						else if(i == 6 && j == 8){
							printf("2");
						}  
						else if(i == 7 && j == 8){
							printf("1");
						}
						else if(i == 8 && j == 0){
							printf("\t A");
						}
						else if(i == 8 && j == 1){
							printf("\tB");
						}
						else if(i == 8 && j == 2){
							printf("\tC");
						}
						else if(i == 8 && j == 3){
							printf("\tD");
						}
						else if(i == 8 && j == 4){
							printf("\tE");
						}
						else if(i == 8 && j == 5){
							printf("\tF");
					    }
						else if(i == 8 && j == 6){
							printf("\tG");
						}
						else if(i == 8 && j == 7){
							printf("\tH");
						}				
						else if(i == 8 && j == 8){
							printf("");
						}
						
						//ESPACIOS VACIOS
						else{
							printf("\t-");
							if(i < 8 || j < 8){
								printf("   |  ");
							}               
						}	  
					}
					printf("\n\n");
				}
				break;
			}
			case 2:{
				char posicion_columna;
				int posicion_fila;
				
				printf("Que pieza desea mover?\n\n");
				printf("Fila en la que se encuentra la pieza(numero): ");
				scanf("%d", &posicion_fila);
				printf("Columna en la que se encuentra la pieza(letra): ");
				scanf("%s", &posicion_columna);
	
				switch(posicion_columna){
					case 'A':{
						int posicion_columna = 1;
						cout << "" << posicion_fila << " " << "" << posicion_columna << "\n";
						break;
					}
					case 'B':{
						int posicion_columna = 2;
						cout << "" << posicion_fila << " " << "" << posicion_columna << "\n";
						break;
					}
					case 'C':{
						int posicion_columna = 3;
						cout << "" << posicion_fila << " " << "" << posicion_columna << "\n";
						break;
					}
					case 'D':{
						int posicion_columna = 4;
						cout << "" << posicion_fila << " " << "" << posicion_columna << "\n";
						break;
					}
					case 'E':{
						int posicion_columna = 5;
						cout << "" << posicion_fila << " " << "" << posicion_columna << "\n";
						break;
					}
					case 'F':{
						int posicion_columna = 6;
						cout << "" << posicion_fila << " " << "" << posicion_columna << "\n";
						break;
					}
					case 'G':{
						int posicion_columna = 7;
						cout << "" << posicion_fila << " " << "" << posicion_columna << "\n";
						break;
					}
					case 'H':{
						int posicion_columna = 8;
						cout << "" << posicion_fila << " " << "" << posicion_columna << "\n";
						break;
					}
					default:{
						printf("\nNo existe esa columna, intente de nuevo\n");
						break;
				    }
				}
				break;	
			}
			case 0:{
				printf("\nSe termino el programa\n\n");
				break;
			}
			default:{
				printf("\nOpcion invalida, intente otra operacion; ");
				break;
			}
		}
	}
	while(opcion != 0);
	
    getch();
    return 0;
}

