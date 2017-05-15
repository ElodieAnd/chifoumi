#include <iostream>
#include <string>
#include "Chifoumi.hpp"

int main(int argc, char *argv[])
{
	std::string util;
	
	std::cout << "**** Chifoumi **** \n \n";
	std::cout << "move (rock, paper, scissors, quit) : ";
	std::cin >> util;
	
	Chifoumi chifoumi;
	
	std::cout << "\n" << chifoumi.play(util) << "(" << chifoumi.getOrdinateur() << "," << util << ") \n";
	
}
