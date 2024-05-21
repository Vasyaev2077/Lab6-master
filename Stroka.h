
#ifndef LAB6_STROKA_H
#define LAB6_STROKA_H

// В данном классе не нужен деструктор,
// т.к. память выделяется статически на стеке,
// и компилятор сам позаботится об её освобождении при уничтожении объекта.

class Stroka {
    char str[80];
    char* str2;     // Переменная для примера контруктора с заданной динамической паматью
    int size;       // Размер динамической памяти
public:
    Stroka (char*);
    Stroka(){}
    Stroka(const Stroka&);
    Stroka& operator=(const Stroka&);
    Stroka& operator+(const Stroka&);
    int operator==(const Stroka&);
    int dlina();
    void vvod();
    void vyvod();
    char * konkat(char str[80], const char *str1);
    char * kopir(char str[80], const char *string);
    int sravn(char str[80], const char *str1);

    //Конструктор с заданным размером динамической памятью
    Stroka(int n) {
        size = n;
        str2 = new char[size];
        str2[0] = '\0'; // инициализируем строку пустым значением
    }

    ~Stroka() {
        delete[] str2; // деструктор освобождает динамически выделенную память
    }

};


#endif //LAB6_STROKA_H
