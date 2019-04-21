#pragma once

#include <openssl/md5.h>
#include <string>
#include "Header.h"

class Day4
{
public:
	Day4();
	~Day4();
	std::string md5(const std::string& input);
	void process(const std::string &input);
};
