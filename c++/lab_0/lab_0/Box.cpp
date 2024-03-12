#include <iostream>
#include <cstdio>
#include "Box.h"
using namespace std;

const int n = 10;

const double ACC = 0.00001;

struct Box
{
	int lengh, wight, height; // sm
	double weight;            // kg
	int value;                // money
	Box(int l, int wi, int h, double w, int v) : lengh(l), wight{ wi }, height(h), weight(w), value(v) {}
	Box() :lengh(0), wight(0), height(0), weight(0), value(0) {}
};
double FunSum(Box[n]);         // 2 +
bool check(Box[n], int);       // 3 +
double maxWeight(Box[n], int); // 4 +
bool boxInBox(Box[n]);         // 5 +


bool operator==(Box& b1, Box& b2)         // 6 +
{
	return (
		abs(b1.height - b2.height) < ACC &&
		abs(b1.lengh - b2.lengh) < ACC &&
		abs(b1.wight - b2.wight) < ACC &&
		abs(b1.value - b2.value) < ACC &&
		abs(b1.weight - b2.weight) < ACC);
}

ostream& operator<<(ostream& out, Box& cn) {		// 7 +
	out << cn.height << " " << cn.lengh << " " << cn.value << " " << cn.weight << " " << cn.wight << endl;
}
istream& operator>>(istream& in, Box& b) {
	cout << "введите ...";
	int lengh, wight, height;
	double weight;
	int value;
	in >> lengh >> wight >> height >> weight >> value;
}

double FunSum(Box b[n])
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += b[i].value;
	}
	return sum;
}
bool check(Box box[n], int m)
{
	bool c = true;
	for (int i = 0; i < n; i++)
	{
		if (box[i].lengh + box[i].wight + box[i].height > m)
		{
			c = false;
		}
	}
	return c;
}
double maxWeight(Box box[n], int maxV)
{
	if (maxV < 0)
	{
		cout << "error" << endl;
	}
	double mv = -1;
	for (int i = 0; i < n; i++)
	{
		if (box[i].lengh * box[i].wight * box[i].height < maxV)
		{
			if (box[i].weight > mv)
			{
				mv = box[i].weight;
			}
		}
	}
	return mv;
}
bool boxInBox(Box b[n])
{
	bool in = true;
	int maxBox = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((b[i].lengh < b[j].lengh && b[i].wight < b[j].wight && b[i].height < b[j].height) ||
				(b[i].lengh > b[j].lengh && b[i].wight > b[j].wight && b[i].height > b[j].height))
			{
				cout << i << " " << j << " " << b[i].lengh << " " << b[j].lengh << endl;
			}
			else
			{
				cout << i << " " << j << " " << b[i].lengh << " " << b[j].lengh << endl;
				in = false;
			}
			cout << in << endl;
			if (in == false)
				break;
		}
	}
	return in;
}