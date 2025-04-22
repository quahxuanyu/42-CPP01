#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		std::string srcName = std::string(argv[1]);
		std::string dstName = srcName + ".copy";
		std::string s1 = std::string(argv[2]);
		std::string s2 = std::string(argv[3]);
	
		std::ifstream src(srcName, std::ios::binary);
		if (!src)
		{
			std::cerr << "Error: Source file not found" << std::endl;
			return 1;
		}
		std::ofstream dst(dstName, std::ios::binary);

		std::string line;
		while (std::getline(src, line))
		{
			std::string new_line;
			size_t i = 0;
			while (i < line.length())
			{
				if (line.substr(i, s1.length()) == s1)
				{
					new_line += s2;
					i += s1.length();

				}
				else
				{
					new_line += line[i];
					i++;
				}
			}
			dst << new_line << std::endl;
		}
	}
	else
	{
		std::cout << "Error: Incorrect Number of Arguments" << std::endl;
		return 1;
	}
}