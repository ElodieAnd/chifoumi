#include <iostream>
#include <ctime>
#include <string>
#include <glog/logging.h>
#include "Chifoumi.hpp"
#include <fstream>

int main(int argc, char *argv[])
{
	
	std::string util;
	
	std::cout << "**** Chifoumi **** \n \n";
	std::cout << "move (rock, paper, scissors, quit) : ";
	std::cin >> util;
	
	Chifoumi chifoumi;
	
	std::cout << "\n" << chifoumi.play(util) << "(" << chifoumi.getOrdinateur() << "," << util << ") \n";
	
	 //std::fstream fichier("logfile.txt", std::ios::in | std::ios::out | std::ios::ate);
	 //if(fichier){
	//	std::string ligne;
	//	while(getline(fichier, ligne)){ // tant que l'on peut mettre la ligne dans "contenu"
		
	//		std::cout << ligne << std::endl; // on l'affiche
	//	}
		
	//	fichier << "Log file created at :" << "\n" << std::endl; 
		
	//} 
}


