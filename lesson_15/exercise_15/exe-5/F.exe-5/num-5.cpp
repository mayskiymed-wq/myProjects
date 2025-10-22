#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <windows.h>
using namespace std;
namespace fs = std::filesystem;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    fs::create_directories("F.exe-5");
    ofstream ("F.exe-5/exe-5-in.txt");
    fstream Fin("F.exe-5/exe-5-in.txt");
    ofstream Fout("F.exe-5/exe-5-out.txt");

    if (!Fin) { cout << "Нет файла 'exe-5-in.txt'."; return 1; }
    if (!Fout) { cout << "Нет файла 'exe-5-out.txt'."; return 1; }

    string line;
    
}
