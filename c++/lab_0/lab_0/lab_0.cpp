// lab_0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include "Conteiner.h"
#include "Box.h"


using namespace std;
const int n = 3;

// main
int main()
{

	setlocale(LC_ALL, "Russian");
	cout << "+ нужна защита от дураков" << endl
		<< endl
		<< endl;

	cout << "ублюдский язык" << endl;
	cout << "сил моих на тебя нет" << endl;
	cout << "век бы тобой не занималась" << endl;
	cout << "чтоб те пусто было!" << endl
		<< endl;

	Box box1 = { 2, 3, 1, 4.3, 10 };
	Box box2 = { 7, 8, 10, 2, 1 };
	Box box3 = { 4, 7, 9, 6, 8 };
	Box box4 = { 2,4,7,9,5 };

	Box boxes[n] = { box3, box2, box1 };
	double sum = FunSum(boxes);

	cout << sum << endl;
	cout << check(boxes, 25) << endl;
	cout << maxWeight(boxes, 20) << endl;

	bool b = boxInBox(boxes);
	cout << b << endl;
	cout << box1;

	vector<Box> boxes = { box1,box2,box3};

	

	return 0;
}

//#ifndef MODUL
//#define MODUL




//class Conteiner
//{
//private:
//	Box boxes[n];
//	int lengh, height, wight;
//	int weightMax;
//public:
//	int getLengh() {
//		return lengh;
//	}
//	int getHeight() {
//		return height;
//	}
//	int getWight() {
//		return wight;
//	}
//	Box* getBoxes() {
//		return boxes;
//	}
//	Box getBox(int id) {
//		return boxes[id];
//	}
//
//};

//#endif



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
