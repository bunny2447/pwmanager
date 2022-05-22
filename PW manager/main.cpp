//============================================================================
// Name        : Main.cpp
// Author      : AAron Metcalfe
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : password manager in c++
//============================================================================

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cstdlib>
#include "header.hpp"

int main(){
    std::string option_one;

    //create a intro to the program 
    std::cout << "Welcome to the password manager!" << std::endl;
    std::cout << "Do you have an account with this password manager ";  
    std::cout << "or would you like to create one?" << std::endl;
    std::cin >> option_one;
    std::cout << option_one;
    // ask them to log in with user name and password or to create and account
    // if they enter the correct user name and password, they will be able to access the program
    // if they enter the wrong user name or password, they will be able to try again
    // if they enter the wrong user name and password, they will be able to try again


}