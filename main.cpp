#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <errno.h>

using namespace std;

int main() 
{
	string tag = "[kittens]";     //The tag you wish to add for each image
	string extension = ".jpg";   //Extension of the image(s)
	string file = "image-list.txt"; //List of images with full file path you wish to rename
	string line;

	ifstream fin;
	ofstream fout;

	fin.open(file);
	if (fin.fail()) {
		cout << "Failed to open file" << endl;
		exit(1);
	}
	
	while (getline(fin, line)) {
		line.pop_back();
		line.erase(line.begin(), line.begin() + 1);
		//These first two lines of code remove parantheses at the beginning and end
		//of each line in your text file

		string strold_name = line;
		string strnew_name = strold_name;

		strnew_name.erase(strnew_name.end() - 4, strnew_name.end()); //Erases extension
		strnew_name += tag + extension;  //Adds tag and then extension

		const char* old_name = strold_name.c_str();
		const char* new_name = strnew_name.c_str();

		cout << old_name << endl;
		cout << new_name << endl;

		if (rename(old_name, new_name) == 0)
		{
			cout << "Rename was successful" << endl;
		}
		else
		{
			cout << "Failed to rename" << endl;
			perror("Error");
		}
	}

	return 0;
}
