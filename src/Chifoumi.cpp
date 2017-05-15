#include "Chifoumi.hpp"

Chifoumi::Chifoumi() 
{
		ordi[0] = "rock";
		ordi[1] = "paper";
		ordi[2] = "scissors";
		ordi[3] = "quit";
		
		res[0] = "draw";
		res[1] = "win";
		res[2] = "loss";
		
}

std::string Chifoumi::play(std::string util)
{  
		utilisateur = util;
		
		if(utilisateur.compare("rock") == 0) { user = 0; }
		if(utilisateur.compare("paper") == 0) { user = 1; }
		if(utilisateur.compare("scissors") == 0) { user = 2; }
		
		switch(ordinateur)
		{
			case 0 : 
				switch(user)
				{
					case 0 : resultat = res[0]; break ;
					case 1 : resultat = res[1]; break ;
					case 2 : resultat = res[2]; break ;
				}
				break;
				
			case 1 : 
				switch(user)
				{
					case 0 : resultat = res[2]; break ;
					case 1 : resultat = res[0]; break ;
					case 2 : resultat = res[1]; break ;
				}
				break;
				
			case 2 : 
				switch(user)
				{
					case 0 : resultat = res[1]; break ;
					case 1 : resultat = res[2]; break ;
					case 2 : resultat = res[0]; break ;
				}
				break;
		}
		
		return resultat;
		
}

std::string Chifoumi::getOrdinateur()
{
	return ordi[ordinateur];
}
