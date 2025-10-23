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

    fs::create_directories("F.exe-5");
    //ofstream ("F.exe-5/exe-5-in.txt");
    fstream Fin("F.exe-5/exe-5-in.txt");
    ofstream Fout("F.exe-5/exe-5-out.txt");

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
