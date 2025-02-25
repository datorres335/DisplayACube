#ifndef _CUBE
#define _CUBE

#include<string> 
using namespace std;

class Cube
{
private:
	int side; //user input
	string output;

public:
	Cube();
	int getSide();
	void setSide(int sidePar);
	void displayCube();
	void drawSpaces(int numOfSpaces);
	void drawStars(int numOfStars);
	void drawEndl();
	void clear();
};
#endif