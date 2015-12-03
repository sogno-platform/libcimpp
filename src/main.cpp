#include <iostream>

#include "Integer.h"
#include "Boolean.h"


int main()
{
	Integer zahl;
	zahl = 16;

	Integer zahl2 = zahl;

	Boolean wert = true;

	std::cout << zahl << " blubb " << zahl2 << wert << std::endl;
}
