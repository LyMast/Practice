#pragma once


struct stCITIZEN
{
	std::string name;
	int age;
};

std::ostream& operator<<(std::ostream& os, const stCITIZEN& c);



