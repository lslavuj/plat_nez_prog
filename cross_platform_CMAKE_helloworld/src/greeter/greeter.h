
 /* 
 * File:   Greeter.h
 * Author: lslavuj
 * 
 * Created on 29 August 2016, 10:22
 */

#ifndef Greeter_H
#define	Greeter_H
#include <string>

namespace greet {

    class Greeter {
    public:
        Greeter();
        Greeter(const Greeter& orig);
		std::string Greet();
        virtual ~Greeter();
    private:

    };
}
#endif	/* Greeter_H */

