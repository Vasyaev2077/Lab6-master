//
// Created by AKosmkov on 21.03.2024.
//

#include "Stroka.h"
#include <iostream>

using namespace std;

Stroka::Stroka(char *string)
{
    kopir(str,string);
}
Stroka:: Stroka(const Stroka& s)
{
    kopir(str, s.str);
}
Stroka& Stroka::operator=(const Stroka& s)
{
    kopir(str, s.str);
    return *this;
}
Stroka& Stroka:: operator+(const Stroka& s)
{
    konkat(str, s.str);
    return *this;
}
int Stroka::operator==(const Stroka& s)
{
    if ((sravn(str, s.str))==0)
        return 1;
    else
        return 0;
}
int Stroka::dlina()
{
    string ch = str;
    return ch.length();
}
void Stroka::vvod()
{
    cin >> str;
}
void Stroka::vyvod()
{
    cout << str;
}

int sravn(char* ch1, char* ch2) {
    while (*ch1 && (*ch1 == *ch2)) {
        ch1++;
        ch2++;
    }
    return *ch1 - *ch2;
}
char* Stroka::konkat(char *ch1, const char *ch2) {
    char* tmp = ch1; // Сохраняем начальный адрес ch1

    // Находим конец строки ch1
    while (*ch1 != '\0') {
        ch1++;
    }

    // Копируем строку ch2 в конец ch1
    while (*ch2 != '\0') {
        *ch1++ = *ch2++;
    }

    // Добавляем завершающий нулевой символ
    *ch1 = '\0';

    return tmp; // Возвращаем начальный адрес ch1
}

char* Stroka::kopir(char *ch1, const char *ch2) {
    char* tmp = ch1;
    while (*ch2) {
        *ch1++ = *ch2++;
    }
    *ch1 = '\0';  // Добавляем завершающий нулевой символ
    return tmp;
}

int Stroka::sravn(char *ch1, const char *ch2) {
    while (*ch1 && (*ch1 == *ch2)) {
        ch1++;
        ch2++;
    }
    return *ch1 - *ch2;
}
