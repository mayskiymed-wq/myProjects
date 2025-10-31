#include <iostream>
#include <fstream>
#include <cctype>
#include <windows.h>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main () {
    SetConsoleOutputCP (65001);
    SetConsoleCP (65001);

    fs::create_directories ("F_exe-7");
    //ofstream ("F_exe-7/exe-7-in.txt");
    ifstream Fin ("F_exe-7/exe-7-in.txt");
    ofstream Fout ("F_exe-7/exe-7-out.txt");

    if (!Fin) {cout << "Файл F_exe-7/exe-7-in.txt не найден" << endl; return 1;}
    if (!Fout) {cout << "Файл F_exe-7/exe-7-out.txt не найден" << endl; return 1;}

    string line;
    while (Fin >> line)
    {   
        for (char c: line)
            //if (isdigit (c))  {Fout << line << endl; break;}
            if (c >= '0' && c <= '9')  {Fout << line << endl; break;}
    }
    cout << "Файл успешно записан (F_exe-7/exe-7-out.txt)";
    
}