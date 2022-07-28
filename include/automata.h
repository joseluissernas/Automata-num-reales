#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//Automata para Seminario de Solución de Problemas de Traductores de Lenguajes II
//Jose Luis Serna Serna
using namespace std;
class Automata
{
private:
    int cont;
    char temporal[20];
public:
    Automata();
    void setCadena(string);
    string getCadena();

    void setContador(int);
    int getContador();

    void inicio();
    void q1();
    void q2();
    void q3();
    void q4();
    void q5();
    void q6();
    void q7();
    void q8();
    void error();

    string automataFD(string value);
};


#endif // AUTOMATA_H
