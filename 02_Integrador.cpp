//
//  02_Integrador.cpp
//  Examen Integrador ejercicio2
//
//  Created by Ma. Guadalupe Roque Díaz de León on 15/10/23.
//
//  Nombre - Diego García González
//  matricula - A01198976
//  carrera - ITC
//  fecha - 16/10/23
//  tema de tu memorama - Animales en inglés

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int goles, total;
double promedio;

void opcion1( string matriz[][2], int renglones){

total = 0;

for ( int r = 0; r < renglones; r++){

 cout << matriz[r][0] << " " << matriz[r][1] << endl;
   total += stoi(matriz[r][1]);
}
cout << "Total = " << total << endl;

}


void opcion2(string matriz[][2], int renglones){

int total;
double promedio;

for ( int r = 0; r < renglones ; r++){

    total += stoi(matriz[r][1]);

}

promedio = 1.0 * total / renglones;
cout << "Promedio = " << promedio << endl;

}




int main(){

int queMatriz, opcion, renglones;



    string matriz[7][2];

    string equipos[7][2] = {
    {"AME", "9"},
    {"CHI","7"},
    {"CAZ", "40"},
    {"MON",  "100"},
    {"TIG", "200"},
    {"TIJ", "100"},
    {"TOL","60"}};

    string alumnos[7][2] =  {
    {"Jose", "90"},
    {"Nodal",  "90"},
    {"Frida","100"},
    {"Vaggio",  "100"},
    {"Ariana",  "100"},
    {"Taylor", "110"},
    {"Shakira", "110"}};


  cin >> queMatriz;

  cin >> opcion;


// 4 combinaciones


if (queMatriz == 1 && opcion == 1){

 opcion1(equipos, 7);
}

else if (queMatriz == 1 && opcion == 2){
  opcion2(equipos, 7);
}

else if (queMatriz == 2 && opcion == 1){

 opcion1(alumnos, 7);

}
else if (queMatriz == 2 && opcion == 2){

 opcion2(alumnos, 7);
}

else {
    cout << "Error" << endl;

}

return 0;
}
