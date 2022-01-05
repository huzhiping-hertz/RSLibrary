#include "FileHelper.h"

namespace HZ
{
	using namespace std;

	FileHelper::FileHelper()
	{
	}

	FileHelper::~FileHelper()
	{
	}


	void FileHelper::WriteFile(std::string filename, std::string content)
	{
		std::ofstream ofile(filename, std::ios::out | std::ios::trunc);
		ofile.write(content.c_str(), content.length());
		ofile.flush();
		ofile.close();
	}

	string FileHelper::ReadFile(std::string filename)
	{
		std::ifstream ifile(filename, std::ios::in);
		std::stringstream buffer;
		buffer << ifile.rdbuf();
		std::string contents(buffer.str());
		return contents;
	}

}