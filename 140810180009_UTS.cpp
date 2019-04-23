/*
Naufal Ariful Amri
140810180009
Saol 1
*/

#include <iostream>
using namespace std ;

struct data {
	int no ;
	int gol ;
	string tim ;
	string kota ;
	data* next ;
};

typedef data* list ;
typedef data* pointer ;

void create (list& first) {
	first = NULL ;
}

void elemen (pointer& pBaru ) {
	pBaru = new data ;
	cout << "Nomor : " ; cin >> pBaru->no ;
	cout << "Tim : " ; cin >> pBaru->tim ;
	cout << "Kota : " ; cin >> pBaru->kota ;
	pBaru->next = NULL ;
	cout << "==============\n" ;	
}

void insertlast (list& first, pointer&pBaru){
	pointer x ;
	x = first ;
	if (first == NULL) {
		first = pBaru ;
	}
	else {
		while (x->next != NULL) {
			x = x->next ;
		}
		x->next = pBaru ;
	}
}

void traversal (list& first) {
	pointer pCari ;
	pCari = first ;
	cout << "\n========================\n" ;
	cout << "NO	TIM		KOTA\n" ;
	while (pCari != NULL ){
		cout << pCari->no << "	" << pCari->tim << "		" << pCari->kota << endl ;
		pCari = pCari->next ;
	}
}

void updategoal (list& first, pointer& pBaru, int& x) {
	cout << "\n==UPDATE GOAL==\n" ;
	pointer y ;
	y = first ;
	for (int i = 0 ; i < x ; i++) {
		cout << "Goal untuk tim " << y->tim << " " ; cin >> y->gol ;
		y = y->next ;
	}
}

void traversal2 (list& first) {
	pointer pCari ;
	pCari = first ;
	cout << "================================\n" ;
	cout << "NO	TIM		KOTA	GOL\n" ; 
	while (pCari != NULL ){
		cout << pCari->no << "	" << pCari->tim << "		" << pCari->kota <<  "	" << pCari->gol << endl ;
		pCari = pCari->next ;
	}
}

void sorting (list& first , int& x) {
	pointer c ;
	for (int i = 0 ; i < x ; i++) {
		c = first ;
		for (int j = 0 ; j < x-1 ; j++) {
			if (c->gol < c->next->gol) {
				swap (c->no, c->next->no) ;
				swap (c->tim , c->next->tim) ;
				swap (c->kota, c->next->kota) ;
				swap (c->gol , c->next->gol) ;
			}
			c = c->next ;
		} 
	}
}

int main () {
	cout << "===SELAMAT DATANG==\n" ;
	list first ; 
	pointer p ;
	int x ;
	
	create (first) ;
	cout << "Jumlah Tim ?? " ;cin >> x ;
	
	for (int i = 0 ; i < x ; i++) {
		elemen (p) ;
		insertlast (first , p) ;
	}
	
	traversal (first) ;
	updategoal(first,p,x) ;
	sorting (first,x) ;
	traversal2 (first) ; 
}







