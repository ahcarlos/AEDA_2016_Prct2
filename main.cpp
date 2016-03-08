#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>
#include "calculatorTemp.h"
#include "complejo.hpp"
#include "racional.hpp"

using namespace std;

int main(void)
{
    cout << "************************************************************"<< endl;
    cout << "*------------------AyEDA: Calculadora RPN------------------*" << endl;
    cout << "************************************************************" << endl;
    cout << endl;
    cout << "Introduzca la expresion en formato RPN: ";
    string read;
    getline(cin, read);
    
    istringstream input(read);
    size_t have_dot= read.find('.'); //size_t es un tipo de dato que corresponde a la longitud maxima de la cadena en bytes (numero de caracteres).
    
    //npos nos indica "hasta el final de la cadena" (valor por defecto -1), si found es -1(have_dot == -1) es que no hay ningun punto en la expresion y por tanto no hay flotantes.
    
    if ( (((read[0] == '-') && isdigit(read[1])) || isdigit(read[0])) && ((have_dot == string::npos) || (have_dot != string::npos)) ) //este if permite que aunque haya punto o no en la expresion, evaluamos la expresion
    {
        double result;
        calculator<double> my_calculator;
        result = my_calculator.compute(input);
        cout << "El resultado de la expresion introducida es: " << result << endl;
    }
    else if(read[0] == '(')
    {
        complejo result;
        calculator<complejo> my_calculator;
        result = my_calculator.compute(input);
        cout << "El resultado de la expresion introducida es: " << result << endl;
    }
    else if( read[0] == '"')
    {
        racional result;
        calculator<racional> my_calculator;
        result = my_calculator.compute(input);
        cout << "El resultado de la expresion introducida es: " << result << " (resultado simplificado)" << endl;
    }
    else 
    {
        cout << "La calculadora no trabaja con el/los tipo/s de dato/s introducido/s" << endl;
    }
    
    cout << endl;
}


