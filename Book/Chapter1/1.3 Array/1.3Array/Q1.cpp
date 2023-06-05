
#include <iostream>
#include <sstream>
#include <algorithm>

#include "Q1.h"


std::ostream& operator<<(std::ostream& os, const student& s)
{
	return (os << "[" << s.name << ", " << s.standart << "]");
}