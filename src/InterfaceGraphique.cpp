#include <gtkmm/button.h>
#include <gtkmm/main.h>
#include <gtkmm/table.h>
#include <gtkmm/window.h>

int main(int argc, char* argv[]) {
	Gtk::Main app(argc, argv);
	Gtk::Window fenetre;
	Gtk::Table tableau(1, 2); //On crée un tableau de 1 case par 4 cases
	tableau.resize(2, 2); 
	fenetre.set_default_size(400, 150); //On change la taille de la fenêtre
	fenetre.set_title("Chifoumi"); //On change le titre de la fenêtre
	fenetre.add(tableau);   
	 
	Gtk::Button button1("Rock");   //On crée les boutons
	Gtk::Button button2("Paper");
	Gtk::Button button3("Cissors");
	Gtk::Button button4("Quit");

	tableau.attach(button1, 0, 1, 0, 1);  //On ajoute les boutons sur le tableau
	tableau.attach(button2, 1, 2, 0, 1); 
	tableau.attach(button3, 2, 3, 0, 1);
	tableau.attach(button4, 3, 4, 0, 1);

	fenetre.show_all(); 
	Gtk::Main::run(fenetre);
	return 0;
}                                                                                                     
