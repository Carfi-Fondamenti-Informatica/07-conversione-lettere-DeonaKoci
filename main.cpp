#include <iostream>
#include "lib.h"
using namespace std;


int main() {
    char c=0;
    cin>> c;
    if (funzione(c)== true){
        char risultato = conversione (c);
        cout << risultato;
    }else{
        char ris[]="error";
        cout << ris ;
    }
    return 0;
}
