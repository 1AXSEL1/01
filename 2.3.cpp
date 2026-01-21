#include <iostream>
#include <windows.h> // Потрібно для налаштування кирилиці у Windows

using namespace std;

int main() {
    // Налаштування кодування консолі на Windows-1251 (кирилиця)
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Виведення вірша
    cout << "Стала весна, чорну землю" << endl;
    cout << "Сонну розбудила," << endl;
    cout << "Уквітчала її рястом," << endl;
    cout << "Барвінком укрила;" << endl;
    cout << "І на полі жайворонок," << endl;
    cout << "Соловейко в гаї" << endl;
    cout << "Землю, убрану весною," << endl;
    cout << "Вранці зустрічають..." << endl;
    
    cout << endl; // Порожній рядок для розділення
    cout << "Уривок із поеми «Гайдамаки»" << endl;

    return 0;
}
