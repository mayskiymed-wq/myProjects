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

    fs::create_directories ("F_exe-8");
    //ofstream ("F_exe-8/exe-8-in.txt");
    ifstream Fin ("F_exe-8/exe-8-in.txt");
    ofstream Fout ("F_exe-8/exe-8-out.txt");

    if (!Fin) {cout << "Файл не найден (exe-8-in.txt)"; return 1;}
    if (!Fout) {cout << "Файл не найден (exe-8-out.txt)"; return 1;}

    const char c = ' ';
    string line;
    string punct = ",.-;:!?";
    while (getline (Fin, line)) {
        for (int i = 0; i < line.size (); i++) {
            if (line [i] == ',' or line [i] == '.' or line [i] == ';'
                 or line [i] == ':' or line [i] == '!') {
                line [i] = c;
            Fout << line << endl;
                }
            else {
                Fout << line << endl;
            }
        }
    }
    cout << "Файл успешно записан!" << endl;
}
