#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void menu() {
    std::cout << "\n======== ENIGMA ========" << std::endl;
    std::cout << "1. Cifrar Mensaje" << std::endl; 
    std::cout << "2. Descifrar Mensaje" << std::endl;
    std::cout << "3. Editar Rotores" << std::endl;
    std::cout << "4. Salir" << std::endl;
}

int main() 
{
    int opcion = 0;
    while (opcion != 4) 
    {
        menu();
        std::cin >> opcion;
        switch (opcion) 
        {

        case 1:
            std::cout << "Cifrando..." << std::endl;
            break;
        case 2:
            std::cout << "Descifrando..." << std::endl;
            break;
        case 3:
            std::cout << "Edita los rotores" << std::endl;
            break;
        case 4:
            std::cout << "Saliendo..." << std::endl;
            break;
        default:
            break;
        }
    }
    return 0;
}