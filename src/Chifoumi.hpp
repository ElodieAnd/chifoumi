#ifndef CHIFOUMI_HPP_
#define CHIFOUMI_HPP_

#include "Random.hpp"
#include <iostream>
#include <string>

class Chifoumi {
	
    private:

		std::string utilisateur;
		int user = -1;
		
		
		std::string resultat;
		
		Random _rand;
		std::string ordi[4];
		std::string res[4];
		
		int ordinateur = _rand(3);
		
		std::string const _rock = "rock";
		std::string const _paper = "paper";
		std::string const _scissors = "scissors";

    public:
		Chifoumi();
        // Constructeur à utiliser.
        std::string play(std::string util);
        std::string getOrdinateur();
};

#endif
