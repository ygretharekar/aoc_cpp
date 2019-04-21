#include "Day4.h"

Day4::Day4()
{
}


Day4::~Day4()
{
}

std::string Day4::md5(const std::string &input) {
	unsigned char digest[MD5_DIGEST_LENGTH];
	MD5((unsigned char*) input.c_str(), input.length(), (unsigned char *) &digest);

	char bufferString[33];

	for (int i = 0; i < 16; i++)
	{
		//sprintf_s(&bufferString[i*2], "%02x", (unsigned int) digest[i]);
		sprintf(&bufferString[i*2], "%02x", (unsigned int) digest[i]);
	}

	return bufferString;
}

void Day4::process(const std::string &input) {
	std::cout << input << std::endl;

	int i = 0;
	std::string str;

	while (true)
	{
		str = input + std::to_string(i);

		str = md5(str);

		if (str.substr(0, 6) == "000000")
		{
			std::cout << "First: " << str << " = " << i << std::endl;
			break;
		}
		i++;
	}
}
