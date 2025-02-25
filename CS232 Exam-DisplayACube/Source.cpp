#include <iostream>
#include "Cube.h"
using namespace std;

int main()
{
	//declarations
	Cube cube;
	int userInput;
	char tryAgain = 'y';

	while (tryAgain == 'y' || tryAgain == 'Y')
	{
		//get user input
		cout << "Enter a side length of a cube greater than 1: ";
		cin >> userInput;
		while (userInput <= 1)
		{
			cout << "Enter a side length of a cube greater than 1: ";
			cin >> userInput;
		}

		cube.setSide(userInput);

		//calculations
		//section 1
		cube.drawSpaces(cube.getSide() - 1);
		cube.drawStars(cube.getSide());
		cube.drawEndl();

		//section 2
		for (int i = 0; i < cube.getSide() - 2; i++)
		{
			cube.drawSpaces(cube.getSide() - 2 - i);
			cube.drawStars(1);
			cube.drawSpaces(cube.getSide() - 2);
			cube.drawStars(1);
			cube.drawSpaces(i);
			cube.drawStars(1);
			cube.drawEndl();
		}

		//section 3
		cube.drawStars(cube.getSide());
		cube.drawSpaces(cube.getSide() - 2);
		cube.drawStars(1);
		cube.drawEndl();

		//section 4
		for (int i = 0; i < cube.getSide() - 2; i++)
		{
			cube.drawStars(1);
			cube.drawSpaces(cube.getSide() - 2);
			cube.drawStars(1);
			cube.drawSpaces(cube.getSide() - 3 - i);
			cube.drawStars(1);
			cube.drawEndl();
		}

		//section 5
		cube.drawStars(cube.getSide());

		//ouput
		cube.displayCube();
		cube.clear();
		
		cout << endl;
		cout << "Try again? (Y/N): ";
		cin >> tryAgain;
	}


	return 0;
}