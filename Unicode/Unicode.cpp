#define _UNICODE
#include <iostream>
#include <tchar.h>
#include <Windows.h>
using namespace std;

void Task1() {
	wcout << "\tЗадание 1\n";
	_TCHAR wstr[50];
	cout << "Введите строку: ";
	wcin.getline(wstr, 50);
	wcout << "\nUnicode строка: " << wstr << endl;
	for (short i = 0; i < 50; i++) {
		if (wstr[i] == ' ') {
			wstr[i] = '\t';
		}
	}
	wcout << "Unicode строка (+tab): " << wstr << endl;
	Sleep(500);
	wcout << "\t---> 1";
	Sleep(500);
	wcout << " 2";
	Sleep(500);
	wcout << " 3";
	Sleep(500);
	system("cls");
}
void Task2() {
	wcout << "\n\tЗадание 2\n";
	_TCHAR wstr[50];
	short let(0), num(0), sym(0);
	wcout << "\nВведите строку: ";
	wcin >> wstr;
	for (int i = 0; i < 50; i++) {
		if (wstr[i] >= 48 && wstr[i] <= 57)
			num++;
		else if (wstr[i] >= 65 && wstr[i] <= 90 || wstr[i] >= 97 && wstr[i] <= 122)
			let++;
		else
			sym++;
	}
	wcout << "\n\nКоличество цифр: " << num << endl;
	wcout << "Количество букв: " << let << endl;
	wcout << "Количество символов: " << sym << endl;
	Sleep(500);
	wcout << "\t---> 1";
	Sleep(500);
	wcout << " 2";
	Sleep(500);
	wcout << " 3";
	Sleep(500);
	system("cls");
}
void Task3() {
	wcout << "\n\tЗадание 3\n";
	_TCHAR wstr[50];
	wcout << "\nВведите строку: ";
	wcin.getline(wstr, 50);
	short words(1);
	for (short i = 0; i < 50; i++) {
		if (wstr[i - 1] == ' ')
			words++;
	}
	wcout << "\n\nКоличество слов в строке: " << words << endl;
	Sleep(500);
	wcout << "\t---> 1";
	Sleep(500);
	wcout << " 2";
	Sleep(500);
	wcout << " 3";
	Sleep(500);
	system("cls");
}
void Task4() {
	wcout << "\n\tЗадание 4\n";
	_TCHAR wstr[50];
	const char* letters = "AaEeIiOoUuYy";
	short LettersCount(0);
	wcout << "\nВведите строку: ";
	wcin.getline(wstr, 50);
	for (short i = 0; i < strlen(letters); i++) {
		for (short j = 0; j < _tcslen(wstr); j++) {
			if (wstr[j] == letters[i])
				LettersCount++;
		}
	}
	wcout << "\n\nКоличество гласных букв: " << letters << endl;
	Sleep(500);
	wcout << "\t---> 1";
	Sleep(500);
	wcout << " 2";
	Sleep(500);
	wcout << " 3";
	Sleep(500);
	system("cls");
}
void Task5() {
	wcout << "\n\tЗадание 5\n";
	_TCHAR wstr[50];
	_TCHAR temp[50];
	_TCHAR wstr2[50];
	wcout << "Введите строку: ";
	wcin.getline(temp, 50);
	_tcscpy_s(wstr, 50, temp);
	for (short i = 0; i < _tcslen(wstr); i++) {
		if (wstr[i] != ' ') {
			_tcscat(wstr2, 50, wstr[i]);
			/*wstr2 += wstr[i];*/
		}
		else {
			for (short j = 0; j < _tcslen(wstr2); j++) {
				if (wstr2[j] != wstr2[_tcslen(wstr2) - j - 1]) {
					cout << "Слово " << wstr2 << " не полиндром." << endl;
				}
				else {
					cout << "Слово " << wstr2 << " полиндром." << endl;
				}
			}
		}
	}
	Sleep(500);
	wcout << "\t---> 1";
	Sleep(500);
	wcout << " 2";
	Sleep(500);
	wcout << " 3";
	Sleep(500);
	system("cls");
}
void Task6() {
	wcout << "\n\tЗадание 6\n";
	_TCHAR wstr[50];
	short position, size(0);
	wcout << "Введите строку: ";
	wcin.getline(wstr, 50);
	do {
		wcout << "Введите номер символа строки для удаления(0-49): ";
		wcin >> position;
		if (position < 0 || position > 49) {
			cout << "Введено неверное значение!" << endl;
		}
		else {
			break;
		}
	} while (true);
	while (wstr[++size]);
	if (size < position)
		return;
	char* str = new char[size];
	for (short i = 0, j = 0; i < size; ++i, j++) {
		if (i != position)
			str[j] = wstr[i];
		else
			--j;
	}
	str[size - 1] = '\0';
	wcout << "Новая строка: " << wstr << endl;
	Sleep(500);
	wcout << "\t---> 1";
	Sleep(500);
	wcout << " 2";
	Sleep(500);
	wcout << " 3";
	Sleep(500);
	system("cls");
}
void Task7() {
	wcout << "\n\tЗадание 7\n";
	_TCHAR wstr[50];
	_TCHAR tch[50];
	wcout << "Введите строку: ";
	wcin.getline(wstr, 50);
	const _TCHAR* old = wstr;
	while (*old) {
		if (*old != tch) {
			*wstr = *old;
			++wstr;
		}
		++old;
	}
	*wstr = '\0';
}
void Task8() {
	wcout << "\n\tЗадание 8\n";
	_TCHAR wstr[50];
	short position, size(0);
	wcout << "Введите строку: ";
	wcin.getline(wstr, 50);
	do {
		wcout << "Введите номер символа строки для удаления(0-49): ";
		wcin >> position;
		if (position < 0 || position > 49) {
			wcout << "Введено неверное значение!" << endl;
		}
		else {
			break;
		}
	} while (true);
	while (wstr[++size]);
	if (size < position)
		return;
	char* str = new char[size];
	for (short i = 0, j = 0; i < size; ++i, j++) {
		if (i != position)
			str[j + 1] = wstr[i + 1];
		else
			++j;
	}
	str[size - 1] = '\0';
	wcout << "Новая строка: " << wstr << endl;
	Sleep(500);
	wcout << "\t---> 1";
	Sleep(500);
	wcout << " 2";
	Sleep(500);
	wcout << " 3";
	Sleep(500);
	system("cls");
}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Task1();
	/*Task2();
	Task3();
	Task4();
	Task5();
	Task6();
	Task7();
	Task8();*/
}