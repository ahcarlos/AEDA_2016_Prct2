#pragma once

#include "sllTemp.h"

using namespace std;

template <class T>
    class stackTemp{
        private:
            sllTemp<T> list_;
            
        public:
            stackTemp(void);
            ~stackTemp(void);
            
            void push(T dato);
            T pop(void);
            
            bool empty(void);
            void release_stack(void);
            
            ostream& write(ostream& os);
        
    };
    
template <class T>
stackTemp<T>::stackTemp(void):
list_()
{}

    
template <class T>
stackTemp<T>::~stackTemp(void)
{
    release_stack();
}

    
template <class T>
void stackTemp<T>::release_stack(void)
{
  list_.release_list();
}

    
template <class T>
void stackTemp<T>::push(T dato)
{
    list_.insert_beginning(new nodeTemp<T>(dato));
}
    
template <class T>
T stackTemp<T>::pop(void)
{
    nodeTemp<T>* n_aux= (list_.extract_beginning());
    T aux= n_aux->get_dato();
    delete n_aux;
    return aux;
}

    
template <class T>
bool stackTemp<T>::empty(void)
{
    return (list_.empty());
}
    
template <class T>
ostream& stackTemp<T>::write(ostream& os)
{
    list_.write(os);
    return os;
}

