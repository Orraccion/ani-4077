#include <iostream>
#include "MonRhi/MonRhi.h"

int main (){
    std::cout << monrhi::Version() << std :: endl;
    std::cout << monrhi::BackendActif() << std :: endl;
}