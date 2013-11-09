//
//  main.cpp
//  Practica1-TAIS
//
//  Created by Daniel on 19/10/13.
//  Copyright (c) 2013 Daniel. All rights reserved.
//

#include <iostream>
#include <string>
#include "AVL.h"
#include "Lista.h"

template <typename Clave, typename Valor>
void verificarArbol(AVL<Clave, Valor> a) {
    
    string estado = a.equilibrado() ? "true" : "false";
    
    std::cout << "Es equilibrado?: " << estado << endl;
}

template <typename Clave, typename Valor>
void verificarArbolAVL(AVL<Clave, Valor> a) {
    
    string estado = a.esAVLcorrecto() ? "true" : "false";
    
    std::cout << "Es avl correcto?: " << estado << endl;
}

template <typename Clave, typename Valor>
AVL<Clave, Valor> generarArbol(const int numeros, const int incremento) {
    
    AVL<Clave, Valor> a;
    
    for (int i = 1; i <= numeros; i+=incremento) {
        a.inserta(i,i);
    }
    
    return a;
}

void ejercicio1() {
    
    
    AVL<int, int> a;
    
    a.inserta(20, 20);
    a.inserta(10, 10);
    a.inserta(30, 30);
    a.inserta(5, 5);
    a.inserta(15, 15);
    a.inserta(25, 25);
    
    a.mostrar(cout, 0);
    
    verificarArbol(a);
    
    a.inserta(21, 21);
    a.inserta(22, 22);
    
    a.mostrar(cout, 0);
    
    verificarArbol(a);
}

void ejercicio2() {
    
    AVL<int, int> a;
    
    a.inserta(20, 20);
    a.inserta(10, 10);
    a.inserta(30, 30);
    a.inserta(5, 5);
    a.inserta(15, 15);
    a.inserta(40, 40);
    a.inserta(4, 4);
    a.inserta(2, 2);
    a.inserta(6, 6);
    
    a.mostrar(cout, 0);
    cout << endl;
    
    int kesimo = 4;
    
    cout << "elemento k-ésimo: " << kesimo << " -> " << a.kesimoelementominimo(kesimo) << endl;
}

void ejercicio3() {
    
    AVL<int, int> a;
    
    a.inserta(20, 20);
    a.inserta(10, 10);
    a.inserta(30, 30);
    a.inserta(5, 5);
    a.inserta(15, 15);
    a.inserta(40, 40);
    a.inserta(4, 4);
    a.inserta(2, 2);
    a.inserta(6, 6);
    
    a.mostrar(cout, 0);
    
    Lista<int> lista = a.rango(5, 30);
    
    cout << "rango de claves :" << endl;
    
    Lista<int>::Iterador it = lista.principio();
    
    while ( it != lista.final() ) {
        
        cout << "\t" << it.elem() << endl;
        it.avanza();
    }
}

void ejercicio4() {
    
//    AVL<int, int> c = generarArbol<int, int>(16, 1);
//
//    c.mostrar(cout, 0, true);
//    
//    c.borra(4); cout << "BORRAR 4" << endl << endl;
//    
//    verificarArbolAVL(c); cout << endl;
//    
//    c.mostrar(cout, 0, true);
//    
//    c.borra(12); cout << "BORRAR 12" << endl << endl;
//    
//    verificarArbolAVL(c); cout << endl;
//    
//    c.mostrar(cout, 0, true);
//    
//    c.borra(1); cout << "BORRAR 1" << endl << endl;
//    
//    verificarArbolAVL(c); cout << endl;
//    
//    c.mostrar(cout, 0, true);
//    
//    c.borra(3); cout << "BORRAR 3" << endl << endl;
//    
//    verificarArbolAVL(c); cout << endl;
//    
//    c.mostrar(cout, 0, true);
//    
//    c.borra(5); cout << "BORRAR 5" << endl << endl;
//    
//    verificarArbolAVL(c); cout << endl;
//    
//    c.mostrar(cout, 0, true);
//    
//    c.borra(2); cout << "BORRAR 2" << endl << endl;
//    
//    verificarArbolAVL(c); cout << endl;
//    
//    c.mostrar(cout, 0, true);
//    
//    c.borra(7); cout << "BORRAR 7" << endl << endl;
//    
//    verificarArbolAVL(c); cout << endl;
//    
//    c.mostrar(cout, 0, true);
    
    int n = 1000;
    srand((unsigned)time(0));
    
    AVL<int, int> arbol = generarArbol<int, int>(n, 1);
    
    verificarArbolAVL(arbol);
    
    for ( int i = 1; i <= n; i++) {
        
        int random = (rand()%n)+1;
        
        arbol.borra(random);
        
        cout << "NUMERO A BORRAR: " << random << endl;
        arbol.mostrar(cout, 0, true);
        verificarArbolAVL(arbol);
        cout << endl;
    }
}

int main(int argc, const char * argv[])
{
//    ejercicio1();
    
//    ejercicio2();
    
//    ejercicio3();
    
    ejercicio4();
    
    return 0;
}

