#include <gtkmm/button.h>
#include <gtkmm/main.h>
#include <gtkmm/table.h>
#include <gtkmm/window.h>
#include <gtkmm/label.h>

#include <iostream>
#include <string>
#include "Chifoumi.hpp"


	void nv_fen_rock()
	{
		Gtk::Window fenetre1;
		Chifoumi chifoumi;

		fenetre1.set_default_size(400, 150); //On change la taille de la fenêtre
		fenetre1.set_title("Résultat"); //On change le titre de la fenêtre

		Gtk::Label label1(chifoumi.play("rock")+"("+ chifoumi.getOrdinateur() + ", rock)");
		fenetre1.add(label1);
		
		fenetre1.show_all();
		Gtk::Main::run(fenetre1);
	}

	void nv_fen_paper()
	{
		Gtk::Window fenetre2;
		Chifoumi chifoumi;

		fenetre2.set_default_size(400, 150); //On change la taille de la fenêtre
		fenetre2.set_title("Chifoumi"); //On change le titre de la fenêtre

		Gtk::Label label2(chifoumi.play("paper")+"("+ chifoumi.getOrdinateur() + ", paper)");
		fenetre2.add(label2);
		
		fenetre2.show_all();
		Gtk::Main::run(fenetre2);
	}

	void nv_fen_scissors()
	{
		Gtk::Window fenetre3;
		Chifoumi chifoumi;

		fenetre3.set_default_size(400, 150); //On change la taille de la fenêtre
		fenetre3.set_title("Chifoumi"); //On change le titre de la fenêtre

		Gtk::Label label3(chifoumi.play("scissors")+"("+ chifoumi.getOrdinateur() + ", scissors)");
		fenetre3.add(label3);
		
		fenetre3.show_all();
		Gtk::Main::run(fenetre3);
	}

int main(int argc, char* argv[]) {

	Gtk::Main app(argc, argv);
	
	Gtk::Table tableau(1, 2); //On crée un tableau de 1 case par 4 cases
	tableau.resize(2, 2); 

	Gtk::Window fenetre;
	fenetre.set_default_size(400, 150); //On change la taille de la fenêtre
	fenetre.set_title("Chifoumi"); //On change le titre de la fenêtre
	fenetre.add(tableau);   

	Gtk::Button button1("Rock");   //On crée les boutons
	Gtk::Button button2("Paper");
	Gtk::Button button3("Scissors");
	Gtk::Button button4("Quit");

	tableau.attach(button1, 0, 1, 0, 1);  //On ajoute les boutons sur le tableau
	tableau.attach(button2, 1, 2, 0, 1); 
	tableau.attach(button3, 2, 3, 0, 1);
	tableau.attach(button4, 3, 4, 0, 1);

	fenetre.show_all(); 

	button1.signal_clicked().connect(sigc::ptr_fun(&nv_fen_rock) );

	button2.signal_clicked().connect(sigc::ptr_fun(&nv_fen_paper) );

	button3.signal_clicked().connect(sigc::ptr_fun(&nv_fen_scissors) );

	button4.signal_clicked().connect(sigc::ptr_fun(&Gtk::Main::quit));

	

	Gtk::Main::run(fenetre);
	return 0;
}                                                                                                     
