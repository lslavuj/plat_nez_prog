
 
 /* 
 * File:   Greeter.cpp
 * Author: lslavuj
 * 
 * Created on 29 August 2016, 10:22
 */

#include "../greeter.h"

namespace greet {

    Greeter::Greeter() {
    }

    Greeter::Greeter(const Greeter& orig) {
    }

	std::string Greeter::Greet() {
		std::string resp = "Greetings from the Windows greeting implementation";
		return resp;
    }
	
    Greeter::~Greeter() {
    }
}
