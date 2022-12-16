#ifndef PRINTABLE_HPP_
#define PRINTABLE_HPP_

#include <iostream>
#include <string.h>

class Printable
{
public:
	virtual void show(const std::string&) noexcept = 0;
};

#endif

