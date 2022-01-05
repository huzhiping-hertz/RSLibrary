#ifndef FILEHELPER_H
#define FILEHELPER_H
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
namespace HZ
{
	class FileHelper
	{
	private:
		FileHelper();

	public:
		~FileHelper();
		static void WriteFile(std::string filename, std::string content);
		static string ReadFile(std::string filename);

	private:
	};
}
#endif
