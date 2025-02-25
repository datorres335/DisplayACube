#include"Cube.h"
#include<iostream>

Cube::Cube()
{
	side = 0; 
	output = "";
}
int Cube::getSide()
{
	return side;
}
void Cube::setSide(int sidePar)
{
	side = sidePar;
}
void Cube::displayCube() //cout only
{
	cout << output;
}
void Cube::drawSpaces(int numOfSpaces)
{
	for (int i = 0; i < numOfSpaces; i++)
	{
		output += " ";
	}
}
void Cube::drawStars(int numOfStars)
{
	for (int i = 0; i < numOfStars; i++)
	{
		output += "*";
	}
}

void Cube::drawEndl()
{
	output += "\n";
}

void Cube::clear()
{
	output = "";
}