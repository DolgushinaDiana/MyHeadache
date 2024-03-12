#pragma once
struct Box
{
	int lengh, wight, height; // sm
	double weight;            // kg
	int value;                // money
	Box();
	Box(int , int , int , double , int );
};
double FunSum(Box[]);         // 2 +
bool check(Box[], int);       // 3 +
double maxWeight(Box[], int); // 4 +
bool boxInBox(Box[]);         // 5 +
bool operator==(Box& , Box& );

ostream& operator<<(ostream& , Box& ); 
istream& operator>>(istream& , Box& );
