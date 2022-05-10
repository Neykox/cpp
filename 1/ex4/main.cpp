#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

int main(int argc, char** argv)
{
	if (argc != 4)
		return (1);
	std::string name(argv[1]), s1(argv[2]), s2(argv[3]);
	if (name == "" || s1 == "" || s2 == "")
		return (1);

	std::string dst, appended;
	std::ifstream ifs(name);
	std::ofstream ofs(name + ".replace");
	size_t pos = 0;

	while (std::getline(ifs, dst))
	{
		appended.append(dst);
		if (ifs.eof() == 0)
			appended.append("\n");
	}
	while (1)
	{
		pos = appended.find(s1);
		if (pos == std::string::npos)
			break ;
		appended.erase(pos, s1.length());
		appended.insert(pos, s2);
	}
	ofs << appended;
	ofs.close();
	return (0);
}
