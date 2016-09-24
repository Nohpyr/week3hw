#include <iostream>
#include "Parser.h"
using namespace std;

void pyramid(int levels, string* output)
{
	int space, i2;
	i2 = levels;
	for (int i = levels; i > 0; i--)
	{	
		for (space = i2; space>=0; space--)
		{
			(*output)+=" ";	
		}
		for (int j = i; j < levels; j++)
		{
			(*output)+="* ";
		}
		i2--;
		(*output)+="\n";
	}
}

string inp;

int main(){
	cout << "Enter in Amount of Levels to make a pyramid (add 1 to amount of levels you want): \n-->";
	int levels;
	cin >> levels;
	string py = "";
	string* pyLoc = &py;
	pyramid(levels, pyLoc);
	cout << "As Promised:\n\n" << *pyLoc << "\n\n";
	
	cout << "Input command here: " << endl;
	cin >> inp;
	Parser p;
	cout<< inp << " Command: " << p.getCommandRef(inp) << endl;

	return 0;
}

void levels()
{
	cout << inp << endl;
}

