#include <iostream>
#include <string>
#include "bcrypt/BCrypt.hpp"

int main() {

    std::string password1 = "my password";
    std::string password2 = "my password 2";

    std::string hash = BCrypt::generateHash(password1, 12);
    std::cout << hash << std::endl;
    std::cout << BCrypt::validatePassword(password1, hash) << std::endl;
    std::cout << BCrypt::validatePassword(password2, hash) << std::endl;

    // >> gcc -o app.out main.cpp -lstdc++ -lbcrypt

    return 0;
}
