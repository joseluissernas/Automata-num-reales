#include <iostream>
#include "automata.h"
using namespace std;

int main()
{
    string auxiliar, cadena;
    Automata aut;
    char opcion;
    do{
    cout<<"|--------------------------|"<<endl;
    cout<<"|**************************|"<<endl;
    cout<<"|**************************|"<<endl;
    cout<<"|INGRESE LA CADENA NUMERICA|"<<endl;
    cout<<"|**************************|"<<endl;
    cout<<"|**************************|"<<endl;
    cout<<"|--------------------------|"<<endl;
    cin>>cadena;

    int tam = strlen(cadena.c_str());
    if(tam <= 20){
        aut.setCadena(cadena);
        auxiliar = aut.automataFD(aut.getCadena());
    }
    else {
        auxiliar = "rechazada";
    }
    if (auxiliar == "aceptada"){
        cout<<endl<<endl;
        cout<<"|-------------------------------------------|"<<endl;
        cout<<"|*******************************************|"<<endl;
        cout<<"|*******************************************|"<<endl;
        cout<<"|FELICIDADES! LA CADENA SI ES UN NUMERO REAL|"<<endl;
        cout<<"|*******************************************|"<<endl;
        cout<<"|*******************************************|"<<endl;
        cout<<"|-------------------------------------------|"<<endl;
    }
    else if(auxiliar == "rechazada"){
        cout<<endl<<endl;
        cout<<"|---------------------------------------------------|"<<endl;
        cout<<"|***************************************************|"<<endl;
        cout<<"|***************************************************|"<<endl;
        cout<<"|LA CADENA FUE RECHAZADA, NO ES UN NUMERO REAL!!!!!!|"<<endl;
        cout<<"|***************************************************|"<<endl;
        cout<<"|***************************************************|"<<endl;
        cout<<"|---------------------------------------------------|"<<endl;
    }
    cout<<"DESEA INGRESAR OTRA CADENA?  S / N"<<endl;
    cin>>opcion;
    system("cls");
    }while(opcion=='S' || opcion=='s');

    return 0;
}
