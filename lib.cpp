
#include "lib.h"
bool funzione (char c){
    if(c>=65 and c<=90){
        return true;
    }else if(c>=97 and c<=122){
        return true;
    }else {
        return false;
    }
}
char conversione( char c){
    if(funzione(c)== true){

        if(c>=65 and c<=90){
            char ris=c+32;
            return ris;
        }else if(c>=97 and c<=122){
            char ris=c-32;
            return ris;
        }
    }else{
        return false;
    }
}
