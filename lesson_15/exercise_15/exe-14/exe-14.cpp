#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <windows.h>

using namespace std;
namespace fs = std::filesystem;

int main () {

    SetConsoleOutputCP (65001);
    SetConsoleCP (65001);

    fs::create_directories ("F_exe-14");
    ofstream ("F_exe-14/exe-14-in.txt");
    ifstream Fin ("F_exe-14/exe-14-in.txt");
    ofstream Fout ("F_exe-14/exe-14-out.txt");

    if (!Fin) {cout << "Файл не найден (exe-14-in.txt)"; return 1;}
    if (!Fout) {cout << "Файл не найден (exe-14-out.txt)"; return 1;}

}
