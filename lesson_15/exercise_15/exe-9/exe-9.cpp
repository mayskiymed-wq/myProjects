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

    fs::create_directories ("F_exe-9");
    //ofstream ("F_exe-9/exe-9-in.txt");
    ifstream Fin ("F_exe-9/exe-9-in.txt");
    ofstream Fout ("F_exe-9/exe-9-out.txt");

    if (!Fin) {cout << "Файл не создан (exe-9-in.txt)";}
    if (!Fout) {cout << "Файл не создан (exe-9-out.txt)";}
}