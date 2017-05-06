// Bryan Burkhardt
// 05 May 2017
// CS372 - Take home final part A.
// Demonstrating the proxy design pattern.
// Example followed located at:
//      https://sourcemaking.com/design_patterns/proxy/cpp/1

#include <iostream>
#include "CookBook.hpp"

int main() {
    Recipe recipes[5];
    
    for(int i; true;) {
        std::cout << "Exit[0], Recipe[1-5]: ";
        std::cin >> i;
        if (i==0)
            break;
        recipes[i-1].print();
    }
    return 0;
}
