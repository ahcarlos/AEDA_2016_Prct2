#pragma once

#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;




class racional {

private:
  int numerador;
  int denominador;
  int mcd;
     
public:
  
  racional(void);//constructor por defecto
  racional(int num, int den);//constructor de asignación
  racional(const racional& n);//constructor de copia
  racional(double n);
  ~racional(void);//destructor
  
  int get_numerador(void) const;
  int get_denominador(void) const;
  int m_d(void) const; //máximo común divisor
  
  //SOBRECARGA DE OPERADORES
  racional& operator=(const racional&);
  racional& operator=(const string cad);
  
  //aritméticos
  friend racional operator+(const racional&, const racional&);
  friend racional operator-(const racional&, const racional&);
  friend racional operator*(const racional&, const racional&);
  friend racional operator/(const racional&, const racional&);
  
  //comparación
  friend bool operator==(const racional&, const racional&);
  friend bool operator!=(const racional&, const racional&);
  friend bool operator<(const racional&, const racional&);
  friend bool operator>(const racional&, const racional&);
  friend bool operator<=(const racional&, const racional&);
  friend bool operator>=(const racional&, const racional&);
  
  //Entrada-Salida
  friend ostream& operator<<(ostream&, const racional&);
  friend istream& operator>>(istream&,  racional&);
  
};