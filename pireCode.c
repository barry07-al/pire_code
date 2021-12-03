#include <stdlib.h>
#include <stdio.h>


long cmp = 0 ;

/**
Fonction qui vérifie si une liste est triée, si c'est le cas elle renvoi 1 sinon elle renvoi 0
**/
int est_triee (int list[], long size) {
	int i = 0 ;
	while (i < size) {
		if (list[i] > list[i+1])
			return 0 ;
		
		i++ ;
	}
	return 1 ;
}




void melanger(int* tab,int nb) {
	int i, nb2;
	nb2 = nb;
	cmp += 1 ;
	printf ("\nLa nouvelle liste mélangée au processus" " %ld " "est : ", cmp) ;
	
	for(i=0;i<nb;i++) {
		int tmp;
		int index = rand()%nb2;
		tmp = tab[index];
		tab[index] = tab[nb2-1];
		tab[nb-i-1] = tmp;
		nb2--;
		
		printf ("%d", tab[i]) ;
		printf (" ") ;
	}
	printf ("\n") ;
}


/**
Cette fonction trie la liste de façon stupide, en vérifiant si les élements sont triées ou pas
Si c'est le cas on fait rien, si non on mélange aléatoirement les éléments de la liste et on répète le même opération
*/
void trie_stupide (int* list, int size) {
	while (!est_triee(list, size)) {
		melanger (list, size) ;
	}
}



int main(int argc, int *argv[]) {
	int list[8] = {2, 4, 3, 1, 0, 3, 5, 8};
	
	printf ("\nVoici les éléments de la liste qui seront triées\n") ;
	for (int i = 0; i < 8; i++) {
		printf ("%d", list[i]) ;
		printf (" ") ;
	}
	
	printf ("\nProcessus du trie de la liste\n") ;
	printf ("\nC\'est normal, si ça prend beaucoup de temps car c\'est un trie stupide\n") ;
	
	trie_stupide(list, 8) ;
	
	printf( "\nVoici au final la liste triée : ") ;
	for (int i = 0; i < 8; i++) {
		printf ("%d", list[i]) ;
		printf (" ") ;
	}
	printf("\n\nFin du trie\n") ;

}
