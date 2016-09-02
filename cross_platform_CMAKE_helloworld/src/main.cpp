/* 
 * File:   main.cpp
 * Author: lslavuj
 * 
 * Created on 29 August 2016, 10:22
 */

#include "common/stdafx.h"
#include "greeter/greeter.h"
#include <iostream>

int main(int argc, char** argv) {

	// Create a platform specific greeter and print it's greeting
	greet::Greeter myGreeter = greet::Greeter();
	std::cout << myGreeter.Greet() << std::endl;
	std::cout << "Press any key to quit" << std::endl;
	std::cin.get();
    return 0;
}

