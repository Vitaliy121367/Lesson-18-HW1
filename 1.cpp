#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include "Employee.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Employee employee[5] = {
        {"Бондаренко", 2009, "хтось1",12000,"базова"},
        {"Лихобаба", 2008, "хтось2",10000,"базова"},
        {"Варичев", 2007, "хтось3",11500,"базова"},
        {"Ряполов", 2008, "хтось4",10300,"базова"},
        {"Васильєв", 2007, "хтось5",11000,"базова"}
    }
}