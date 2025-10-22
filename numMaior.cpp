#include <iostream>


int numMaior(int valor1, int valor2) {
    if (valor1 > valor2){
        return valor1;
    } else {
        return valor2;
    }
}
    
int main() {
    
    int valor1 = 6;
    int valor2 = 10;
    
    std::cout << numMaior(valor1, valor2) << std::endl;

    return 0;
}