# Projeto: Número Maior em C++

Este projeto é um exemplo simples em **C++** que determina qual de dois números inteiros é o maior. Ele demonstra o uso de funções, estruturas condicionais e a entrada/saída padrão.

---

## 📝 Descrição

O programa define uma função chamada `numMaior` que recebe dois inteiros como parâmetros e retorna o maior deles.  
No `main()`, dois números são inicializados e passados para essa função, e o resultado é exibido no console.

Este projeto é ideal para iniciantes em **C++**, ajudando a entender:

- Funções
- Estruturas condicionais (`if` / `else`)
- Entrada e saída de dados (`std::cout` / `std::cin`)

---

## 💻 Código Fonte

```cpp
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
