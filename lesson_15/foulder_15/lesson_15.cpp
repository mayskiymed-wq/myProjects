
/*#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main () {
    
    fs::create_directories ("foulder_15");
    ifstream fin ("foulder_15/input.txt");
    ofstream fout ("foulder_15/output.txt", ios_base::app);
    if (!fin.is_open ()) {
        cout << "�� 㤠���� ������ 䠩� 'input.txt'." << endl;
        return 1;
    }
    if (!fout.is_open ()) {
        cout << "�� 㤠���� ������ 䠩� 'output.txt'." << endl;
        return 1;
    }
    //㤮��� �᫨ ᮧ���� ᢮� 蠡���
    string name;
    int age;
    while (fin >> name >> age) {
        fout << "���: " << name << " - " << age << " ���." << endl;
    }  
    cout << "���� ���⠭ � ����ᠭ!" << endl;*/

    //��ਠ�� �᫨ ���� �⠥� ������ ��ப�:
    /*string line;
    while ( getline (fin,line))
    {
        fout << "��ப�: " << line << ";" << endl;
        
    }
    if (fin.eof ()) {printf ("����� �����稫���.");}
    cout << "���� ���⠭ � ����ᠭ!" << endl; */

   /*��ப�: ���� 15 ��� 9 �����;
    ��ப�: ���� 8 ��� 5 �����;
    ��ப�: ��᫠� 14 ��� 8 �����;
    ��ப�: ���� 38 ��⥫�;
    ��ப�: ���� 13 ��� 7 �����;*/

    //�������⭮� ������⢮ ������

    /*int x;
    int sum = 0;
    while (fin >> x) {
        sum += x; 
    }
    fout << "�㬬�: " << sum;
    if (fin.eof ()) {printf ("����� �����稫���.");}
}*/

//======  ��ࠡ�⪠ ���ᨢ��  ======

/*#include <iostream>
#include <fstream>
#include <filesystem>
#include <algorithm>

using namespace std;
namespace fs = std::filesystem;

int main () {
    fs::create_directories ("foulder_15");
    ifstream fin ("foulder_15/input.txt");
    ofstream fout ("foulder_15/output.txt");
    if (!fin) {
        cout << "���� input.txt �� ������." << endl;
        return 1;
    }
    if (!fout) {
        cout << "���� output.txt �� ������." << endl;
        return 1;
    }

    const int NMAX = 100;
    int A [NMAX];
    int N = 0;
    while (N < NMAX && fin >> A [N]) {
        N++;
    }
    if (N == 0) {
        cout << "���� ����, ���஢��� ��祣�" << endl;
        return 0;
    }
    sort (A, A + N); 
    for (int i = 0; i < N; i++) {
        fout << A [i] << " ";
    }
    cout << "� 䠩�� input.txt ������� " << N << " ������⮢." << endl;
    cout << "���� ����ᠭ � output.txt. ����� �����஢���.";
    
}*/

// =====     ���窠 ᮡ���     =====
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <windows.h>

using namespace std;
namespace fs = std::filesystem;

int main () {

    SetConsoleOutputCP (65001);
    SetConsoleCP (65001);

    fs::create_directories ("foulder_15");
    ifstream fin ("foulder_15/input1.txt");
    ofstream fout ("foulder_15/output.txt");
    
    string s;
    while (getline (fin, s)) {
        int pos = s.find (';');
        string s1 = s.substr (pos + 1);
        int age = stoi (s1);
        if (age < 5) {
            fout << s << endl;
        }
    }
    cout << "Записан" << endl;
    cout << "Файл из 'input.txt' перезаписан в 'output.txt'" << endl;
}

