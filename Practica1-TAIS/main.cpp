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
    
    AVL<int, int> a;
    
    for ( int i = 1 ; i <= 16; i++) {
        a.inserta(i, i);
    }
    
    a.mostrar(cout, 0, true);
    
    a.borra(4);
    a.borra(8);
    a.borra(14);
    
    a.mostrar(cout, 0, true);
}

int main(int argc, const char * argv[])
{
//    ejercicio1();
    
//    ejercicio2();
    
//    ejercicio3();
    
    ejercicio4();
    
//    AVL<int, int> a;
//    
//    a.inserta(4, 4);
//    
//    int b = a.obtenerPadre(4);
//    
//    cout << b << endl;
    
    return 0;
}

