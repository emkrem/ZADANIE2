/*
 * uloha #2: napis program, kde opat zadavas 2 cisla,ktore budu predstavovat sirku a vysku. 
 * tieto 2 rozmery sa pouziju pri konstrukcii dvojrozmerneho pola typu float.
 * pocas konstrukcie nainicializuj vsetky hodnoty pola na hodnotu 0. 
 * konstrukcia pola je oddelena od funkcie main() lebo sidli 
 * vo vlastnej funkcii (napr. init_matrix()) a zaroven existuje aj 
 * funkcia (napr. show_matrix()), ktora toto pole vypise do konzoly. 
 * v pripade, ze nezadas hodnoty pola, budu jeho rozmery 30 x 30.
 */
 
#include <stdio.h>
#include <stdlib.h>

int i,j,x,y;

void init_matrix(int x, int y){
	float a[x][y];
	for (i = 0; i<x; i++){
        for (j = 0; j<y; j++){
            a[i][j] = 0;
        }
    }
}


void show_matrix(int x, int y){
	 float a[x][y];
	 for (i = 0; i<x; i++){
        printf ("\n");
        for (j = 0; j<y; j++){
            printf ("[%1.0f]",a[i][j]);
        }
    }
}



int main(int argc, char** argv) {

    int a[x][y];
    
    printf ("zadaj sirku pola: ", y);
    scanf ("%d", &y);
    printf ("zadaj vysku pola: ", x);
    scanf ("%d", &x);
    
    // inicializacia na 0 - spravit funkciu init_matrix()
       // zavolaj funkciu
       init_matrix(x,y);
       
    
    // vypis pola s nulou - spravit funkciu show_matrix()
       // zavolat funkciu
       show_matrix(x,y);
       
       if (x == 0 || y == 0){
       		for (i = 0; i<30; i++){
        		printf ("\n");
        		for (j = 0; j<30; j++){
            		printf ("[%1.0f]",a[i][j]);
        	}
    	}
       	
	}
	
    return (EXIT_SUCCESS);
}
