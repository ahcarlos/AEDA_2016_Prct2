#pragma once 

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>

#define EPSILON 0.01

using namespace std;

//Definición de la clase complejo

class complejo {

private:
  double r;
  double i;
  double m; //módulo
     
public:
  
  complejo(void);//constructor por defecto
  complejo(double re, double im);//constructor de asignación
  complejo(const complejo& n);//constructor de copia
  complejo(double n);

  ~complejo(void);//destructor
  
  double get_r(void) const;
  double get_i(void) const;
  double get_m(void) const;
  
  //SOBRECARGA DE OPERADORES
  complejo& operator=(const complejo&);
  complejo& operator=(int n); // para poder nultiplicar por -1;
  complejo& operator=(const string a);//operador de asignación para darle un valor desde una cadena del tipo X+Yi
  
  
  //aritméticos
  friend complejo operator+(const complejo&, const complejo&);
  friend complejo operator-(const complejo&, const complejo&);
  friend complejo operator*(const complejo&, const complejo&);
  friend complejo operator/(const complejo&, const complejo&);
  
  //comparación
  friend bool operator==(const complejo&, const complejo&);
  friend bool operator!=(const complejo&, const complejo&);
  friend bool operator<(const complejo&, const complejo&);
  friend bool operator>(const complejo&, const complejo&);
  friend bool operator<=(const complejo&, const complejo&);
  friend bool operator>=(const complejo&, const complejo&);
  
  //Entrada-Salida
  friend ostream& operator<<(ostream&, const complejo&);
  friend istream& operator>>(istream&,  complejo&);
  
};