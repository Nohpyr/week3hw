#include "Parser.h"

Parser::Parser() 
{

}

string Parser::getCommandRef(string cmd)
{
	if (cmd == "levels")
	{
		return "prints the levels you inputed";
	}
	if (cmd == "pluma")
	{
		return "a text editor that no one uses";
	}
	if (cmd == "hi")
	{
		return "returns Hi Ronak";
	}
	return "reference";
}
