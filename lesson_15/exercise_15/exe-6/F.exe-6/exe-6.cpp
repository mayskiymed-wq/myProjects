#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <random>
#include <ctime>
#include <windows.h>
#include <algorithm>

using namespace std;
namespace fs = std::filesystem;

int ranDint (int a, int b) {return a + rand () % (b - a + 1);}

int main () {

    SetConsoleOutputCP (65001);
    SetConsoleCP (65001);
    srand (static_cast <unsigned> (time (0)));

    fs::create_directories ("F.exe-6");
    ofstream ("F.exe-6/exe-6-in.txt");
    ifstream Fin ("F.exe-6/exe-6-in.txt");
    ofstream Fout ("F.exe-6/exe-6-out.txt");

    if (!Fin) {cout << "Файл exe-6-in.txt не найден." << endl; return 1;}
    if (!Fout) {cout << "Файл exe-6-out.txt не найден." << endl; return 1;}
    cout << endl;
    const int N = 20;
    int A [N] = {};
    generate (A, A + N, [] {return ranDint (3, 200);});
    for_each (A, A + N, [] (int x) {cout << x << " ";});
    cout << endl;

}
