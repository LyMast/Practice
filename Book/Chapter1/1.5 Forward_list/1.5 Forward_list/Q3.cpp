

#include <iostream>
#include <string>
#include <forward_list>

#include "Q3.h"


std::ostream& operator<<(std::ostream& os, const stCITIZEN& c)
{
	return (os << "[" << c.name << ", " << c.age << "]");
}