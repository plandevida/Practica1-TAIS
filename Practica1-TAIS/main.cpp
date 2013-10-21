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
    
    a.inserta(10, 10);
    a.inserta(100, 100);
    a.inserta(30, 30);
    
    a.mostrar(cout, 0);
    cout << endl;
    
    a.inserta(80, 80);
    
    a.mostrar(cout, 0);
    cout << endl;
    
    a.inserta(50, 50);
    
    a.mostrar(cout, 0);
    cout << endl;
    
    a.;
    
    a.mostrar(cout, 0);
    cout << endl;
}

void ejercicio3() {
    
    
}

void ejercicio4() {
    
}

int main(int argc, const char * argv[])
{
    ejercicio1();
    
    ejercicio2();
    
    return 0;
}

