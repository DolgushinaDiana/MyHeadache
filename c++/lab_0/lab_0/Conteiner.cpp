#include <iostream>
#include "Conteiner.h"
#include "Box.h"
#include <vector>
using namespace std;
//const int n = 10;


class Conteiner
{
private:
	vector<Box> boxes;
	//Box boxes[n];
	int lengh, height, wight;
	int maxWeight;
public:
	int getLengh() {
		return lengh;
	}
	int getHeight() {
		return height;
	}
	int getWight() {
		return wight;
	}
	vector<Box> getBoxes() {
		return boxes;
	}
	Box getBox(int id) {
		return boxes[id];
	}
	int getMaxWeight() {
		return maxWeight;
	}
	unsigned quanityOfBox() {
		return boxes.size();
	}
	double massaBoxes() {
		double res = 0;
		for (Box& b:boxes)
		{
			res += b.weight;
		}
		return res;
	}
	double valueBoxes() {
		double res = 0;
		for (Box& b : boxes)
		{
			res += b.value;
		}
		return res;
	}
	void pop(Box b) {
		if (massaBoxes() + b.weight > maxWeight);
	}
	 
};


//bool operator==(const Conteiner& x, const Conteiner& y) {
//	return (abs(x.get() – y.getRe()) < ACC) &&
//		(abs(x.getIm() – y.getIm()) < ACC);
//}