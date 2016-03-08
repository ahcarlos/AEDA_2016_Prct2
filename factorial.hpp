#pragma once 

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

class factorial
{
    private:
        int fact_;
    public:
        factorial(void);
        factorial(int n);
        ~factorial(void);
        
        void set_fact(int data);
        int get_fact(void);
        
        int factorize(int num);
        
        ostream& operator<<(ostream& os, const racional& a);
        istream& operator>>(istream& is, const factorial& a);
        
        
}



































int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}