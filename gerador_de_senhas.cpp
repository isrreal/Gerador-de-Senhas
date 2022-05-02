#include <iostream>
int main() {
    srand(time(0));
    std::string base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "abcdefghijklmnopqrstuvwxyz"
                        "0987654321";
    std::string senha;
    for(size_t i = 1; i < 13 ; i++) 
        senha += base[rand() % 63];
    senha.data()[rand() % 10] = '.';
    std::cout << "Sua senha: " << std::endl;
    for (size_t i = 1; i < 13; i++)
        std::cout << senha[i];
}
