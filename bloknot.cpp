#include <iostream>
#include <fstream> //��� ������ � �������� �������
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");

    string line;

    ifstream file("C:\\Users\\Lenovo\\Desktop\\����\\hello.txt"); // �������� ���� ��� ������
    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << std::endl;
        }
    }
    file.close();     // ��������� ����

    ofstream fout;

    fout.open("C:\\Users\\Lenovo\\Desktop\\����\\hello.txt", ofstream::app);
    if (!fout.is_open()) {
        cout << "���� �� ��������:(" << endl;
    }
    else {
        string note;
        cout << "������� ���� �������: ";
        getline(cin, note);
        fout << "\n";
        for (int i = 0; i < note.length(); i++) {
            
            fout << note[i];
        }
        
    }
    int a;
    cout << "������� ����� �������?(1-��; 2-���) ";
    cin >> a;
    cout << endl;
    switch (a) {//����� ���� � ������ �� ��������;))))
    case 1: {
        string note;
        cout << "������� ���� �������: ";
        getline(cin, note);
        fout << "\n";
        for (int i = 0; i < note.length(); i++) {

            fout << note[i];
        }
    }
        break;
    case 2:
        return 0;
        break;
    }
    cout << "End of program" << endl;
    return 0;
}