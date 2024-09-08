//
//  01_Integrador.cpp
//  Examen Integrador ejercicio1
//
//  Created by Ma. Guadalupe Roque Díaz de León on 15/10/23.
//  Nombre - Diego García González
//  matricula - A01198976
//  carrera - ITC
//  fecha - 16/10/2023
//  tema de tu memorama - Animales en ingles

#include <stdio.h>
#include <iostream>
#include <cmath>


using namespace std;
double x1, x2, area, s;

void calculaRaices (int a, int b, int c){

 x1 = (-b - (sqrt(b * b - 4.0 * a * c))) / (2.0 * a);
 x2 = (-b + (sqrt(b * b - 4.0 * a * c))) / (2.0 * a);

double determinante =b * b - 4.0 * a * c;


 if ( determinante < 0) {

    cout << "None" << endl;

 }

 else{

   cout << "x1 = " << x1 << " x2 = " << x2 << endl;

 }

}


double calculaAreaTriangulo(int a,int b, int c, double &area){

s = ( a + b + c) / 2.0;

area = sqrt( s * ( s - a ) * ( s - b ) * ( s - c ));


}







int main(){

int opcion, x, y, z, lado1, lado2, lado3;

cin >> opcion;

if (opcion == 1){

    cin >> x;
    cin >> y;
    cin >> z;

calculaRaices (x, y, z);



}

else if (opcion == 2){

    cin >> lado1;
    cin >> lado2;
    cin >> lado3;

    calculaAreaTriangulo(lado1, lado2, lado3, area);
    cout << "area = " << area << endl;



}












return 0;
}

