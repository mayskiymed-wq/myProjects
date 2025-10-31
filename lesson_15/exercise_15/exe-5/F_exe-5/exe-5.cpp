#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <windows.h>
using namespace std;
namespace fs = std::filesystem;

string isPalindrom (string line) {
    string lineRev;
    for (int i = line.size () - 1; i >= 0; i--) {
        lineRev += line [i];
    }
    return lineRev;
    //if (lineRev == line) {return true;}
    //else                 {return false;}

}

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    fs::create_directories("F_exe-5");
    //ofstream ("F.exe-5/exe-5-in.txt");
    fstream Fin("F_exe-5/exe-5-in.txt");
    ofstream Fout("F_exe-5/exe-5-out.txt");

    if (!Fin) { cout << "Нет файла 'exe-5-in.txt'."; return 1; }
    if (!Fout) { cout << "Нет файла 'exe-5-out.txt'."; return 1; }

    string oldLine;
    while (getline (Fin, oldLine)) {
        string isPal = isPalindrom (oldLine);
        if (isPal == oldLine)
            Fout << isPal << endl;
    } 
    cout << "Файл записан." << endl;
}

/*#include <iostream>
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

    fs::create_directories ("exe-7");
    fs::create_directories ("F_exe-7");
    //ofstream ("F_exe-7/exe-7-in.txt");
    ifstream Fin ("F_exe-7/exe-7-in.txt");
    ofstream Fout ("F_exe-7/exe-7-out.txt");

    if (!Fin) {cout << "Файл F_exe-7/exe-7-in.txt не найден" << endl; return 1;}
    if (!Fout) {cout << "Файл F_exe-7/exe-7-out.txt не найден" << endl; return 1;}

    
}*/