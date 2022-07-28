#include "automata.h"

Automata::Automata(){}


static Automata aut;

void Automata::setCadena(string cad)
{
    strcpy(temporal,cad.c_str());
}

string Automata::getCadena()
{
    return temporal;
}

void Automata::setContador(int conta)
{
    cont = conta;
}

int Automata::getContador()
{
    return cont;
}

void Automata::inicio()
{
    int cont = 0;
    aut.setContador(cont);
    aut.q1();

}

string Automata::automataFD(string value)
{
    aut.setCadena(value);
    aut.inicio();
    string a = aut.getCadena();
    return a;
}


void Automata::q1()
{
    int cont;
    int tam = strlen(aut.getCadena().c_str());
    if (aut.getContador() < tam){
        if (aut.getCadena()[aut.getContador()]=='0' || aut.getCadena()[aut.getContador()]=='1'
            || aut.getCadena()[aut.getContador()]=='2' || aut.getCadena()[aut.getContador()]=='3'
            || aut.getCadena()[aut.getContador()]=='4' || aut.getCadena()[aut.getContador()]=='5'
            || aut.getCadena()[aut.getContador()]=='6' || aut.getCadena()[aut.getContador()]=='7'
            || aut.getCadena()[aut.getContador()]=='8' || aut.getCadena()[aut.getContador()]=='9'){
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q2();
        }
        else if (aut.getCadena()[aut.getContador()]=='e' || aut.getCadena()[aut.getContador()]=='E') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='+') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='-') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='.') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else {
            aut.error();
        }
    }
    else {
        aut.error();
    }
}

void Automata::q2()
{
    int cont;
    int tam = strlen(aut.getCadena().c_str());
    if (aut.getContador() < tam){
        if(aut.getCadena()[aut.getContador()]=='0' || aut.getCadena()[aut.getContador()]=='1'
            || aut.getCadena()[aut.getContador()]=='2' || aut.getCadena()[aut.getContador()]=='3'
            || aut.getCadena()[aut.getContador()]=='4' || aut.getCadena()[aut.getContador()]=='5'
            || aut.getCadena()[aut.getContador()]=='6' || aut.getCadena()[aut.getContador()]=='7'
            || aut.getCadena()[aut.getContador()]=='8' || aut.getCadena()[aut.getContador()]=='9'){
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q2();
        }
        else if (aut.getCadena()[aut.getContador()]=='e' || aut.getCadena()[aut.getContador()]=='E') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q5();
        }
        else if (aut.getCadena()[aut.getContador()]=='+') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='-') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='.') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q3();
        }
        else {
            aut.error();
        }
    }
    else {
        aut.error();
    }

}

void Automata::q3()
{
    int cont;
    int tam = strlen(aut.getCadena().c_str());
    if (aut.getContador() < tam){
        if (aut.getCadena()[aut.getContador()]=='0' || aut.getCadena()[aut.getContador()]=='1'
            || aut.getCadena()[aut.getContador()]=='2' || aut.getCadena()[aut.getContador()]=='3'
            || aut.getCadena()[aut.getContador()]=='4' || aut.getCadena()[aut.getContador()]=='5'
            || aut.getCadena()[aut.getContador()]=='6' || aut.getCadena()[aut.getContador()]=='7'
            || aut.getCadena()[aut.getContador()]=='8' || aut.getCadena()[aut.getContador()]=='9'){
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q4();
        }
        else if (aut.getCadena()[aut.getContador()]=='e' || aut.getCadena()[aut.getContador()]=='E') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='+') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='-') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='.') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else {
            aut.error();
        }
    }
    else {
        aut.error();
    }
}

void Automata::q4()
{
    int cont;
    int tam = strlen(aut.getCadena().c_str());
    if(aut.getContador() < tam){
        if(aut.getCadena()[aut.getContador()]=='0' || aut.getCadena()[aut.getContador()]=='1'
            || aut.getCadena()[aut.getContador()]=='2' || aut.getCadena()[aut.getContador()]=='3'
            || aut.getCadena()[aut.getContador()]=='4' || aut.getCadena()[aut.getContador()]=='5'
            || aut.getCadena()[aut.getContador()]=='6' || aut.getCadena()[aut.getContador()]=='7'
            || aut.getCadena()[aut.getContador()]=='8' || aut.getCadena()[aut.getContador()]=='9'){
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q4();
        }
        else if (aut.getCadena()[aut.getContador()]=='e' || aut.getCadena()[aut.getContador()]=='E') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='+') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='-') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='.') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else {
            aut.error();
        }
    }
    else{
    string exito = "aceptada";
    aut.setCadena(exito);
    }
}

void Automata::q5()
{
    int cont;
    int tam = strlen(aut.getCadena().c_str());
    if (aut.getContador() < tam){
        if (aut.getCadena()[aut.getContador()]=='0' || aut.getCadena()[aut.getContador()]=='1'
            || aut.getCadena()[aut.getContador()]=='2' || aut.getCadena()[aut.getContador()]=='3'
            || aut.getCadena()[aut.getContador()]=='4' || aut.getCadena()[aut.getContador()]=='5'
            || aut.getCadena()[aut.getContador()]=='6' || aut.getCadena()[aut.getContador()]=='7'
            || aut.getCadena()[aut.getContador()]=='8' || aut.getCadena()[aut.getContador()]=='9'){
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q7();
        }
        else if (aut.getCadena()[aut.getContador()]=='e' || aut.getCadena()[aut.getContador()]=='E') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='+') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q6();
        }
        else if (aut.getCadena()[aut.getContador()]=='-') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q6();
        }
        else if (aut.getCadena()[aut.getContador()]=='.') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else {
            aut.error();
        }
    }
    else {
        aut.error();
    }

}

void Automata::q6()
{
    int cont;
    int tam = strlen(aut.getCadena().c_str());
    if (aut.getContador() < tam){
        if (aut.getCadena()[aut.getContador()]=='0' || aut.getCadena()[aut.getContador()]=='1'
            || aut.getCadena()[aut.getContador()]=='2' || aut.getCadena()[aut.getContador()]=='3'
            || aut.getCadena()[aut.getContador()]=='4' || aut.getCadena()[aut.getContador()]=='5'
            || aut.getCadena()[aut.getContador()]=='6' || aut.getCadena()[aut.getContador()]=='7'
            || aut.getCadena()[aut.getContador()]=='8' || aut.getCadena()[aut.getContador()]=='9'){
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q7();
        }
        else if (aut.getCadena()[aut.getContador()]=='e' || aut.getCadena()[aut.getContador()]=='E') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='+') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='-') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='.') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else {
            aut.error();
        }
    }
    else {
        aut.error();
    }

}

void Automata::q7()
{
    int cont;
    int tam = strlen(aut.getCadena().c_str());
    if (aut.getContador() < tam){
        if (aut.getCadena()[aut.getContador()]=='0' || aut.getCadena()[aut.getContador()]=='1'
            || aut.getCadena()[aut.getContador()]=='2' || aut.getCadena()[aut.getContador()]=='3'
            || aut.getCadena()[aut.getContador()]=='4' || aut.getCadena()[aut.getContador()]=='5'
            || aut.getCadena()[aut.getContador()]=='6' || aut.getCadena()[aut.getContador()]=='7'
            || aut.getCadena()[aut.getContador()]=='8' || aut.getCadena()[aut.getContador()]=='9'){
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q7();
        }
        else if (aut.getCadena()[aut.getContador()]=='e' || aut.getCadena()[aut.getContador()]=='E') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='+') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='-') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else if (aut.getCadena()[aut.getContador()]=='.') {
            cont=aut.getContador();
            cont++;
            aut.setContador(cont);
            aut.q8();
        }
        else {
            aut.error();
        }
    }
    else{
    string exito = "aceptada";
    aut.setCadena(exito);
    }
}
void Automata::q8(){
    aut.error();
}

void Automata::error()
{
    string exito = "rechazada";
    aut.setCadena(exito);
}

