#pragma once
#include <iostream>
#include <clocale>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <stdio.h>
#include <cstdio>
using namespace std;

struct Employee
{
	char Surname[100] = "";
	int years = 0;
	char pos[100] = "";
	float zp = 0;
	char osvita[100] = "";
};