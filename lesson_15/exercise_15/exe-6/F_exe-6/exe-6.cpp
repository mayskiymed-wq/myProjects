#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <random>
#include <ctime>
#include <windows.h>
#include <algorithm>
#include <cstdlib>

using namespace std;
namespace fs = std::filesystem;

int ranDint (int a, int b) {return a + rand () % (b - a + 1);}

bool isPrime (int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt (n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main () {

    SetConsoleOutputCP (65001);
    SetConsoleCP (65001);
    srand (static_cast <unsigned> (time (0)));

    fs::create_directories ("F_exe-6");
    ofstream Fgen ("F_exe-6/exe-6-in.txt");
    if (!Fgen) {cout << "Не удалось создать exe-6-in.txt." << endl; return 1;}

    const int N = 20;
    int A [N] = {};
    generate (A, A + N, [] {return ranDint (3, 200);});
    for_each (A, A + N, [] (int x) {cout << x << " ";});
    cout << endl;
    for (int x: A) Fgen << x << endl;
    cout << "Файл F_exe-6/exe-6-in.txt успешно записан!" << endl;

    ifstream Fin ("F_exe-6/exe-6-in.txt");
    ofstream Fout ("F_exe-6/exe-6-out.txt");

    
    if (!Fin) {cout << "Файл exe-6-in.txt не найден." << endl; return 1;}
    if (!Fout) {cout << "Файл exe-6-out.txt не найден." << endl; return 1;}
    cout << endl;

    int line;
    while (Fin >> line) {
        if (isPrime (line))
            Fout << line << endl;
    }
    cout << "Файл exe-6-out.txt успешно записан!" << endl;
}
