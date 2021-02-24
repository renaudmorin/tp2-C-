/**
 * \file gestionImmatriculation.cpp
 * \brief Fichier principal du programme qui demande a lutilisateur dentrer une plaque dautomobile
 * \date 2019-10-15
 * \author Renaud Morin
 */
#include <iostream>
#include "Vehicule.h"
#include "validationFormat.h"
#include "Date.h"
#include <string>
#include <sstream>
using namespace std;

int main(){
	cout << "=============================================" << endl;
	cout << "|     Programme pour enregistrer un auto     |" << endl;
	cout << "=============================================" << endl;

	cout<< "Veuillez entrer un NIV valide pour l'automobile: ";
	string niv;
	char buffer[256];
	cin.getline(buffer, 255);
	niv = buffer;
	while(util::validerNiv(niv) == false){
		cout<<"Niv invalide!"<<endl;
		cout<<"Veuillez entrer un NIV valide pour l'automobile: ";
		cin.getline(buffer, 255);
		niv = buffer;

	}

	cout<<endl;
	cout<< "Veuillez entrer une plaque valide pour l'automobile: "<<endl;
	string plaque;
	cin.getline(buffer, 255);
	plaque = buffer;
	while(util::validerImmatriculation(plaque) == false){
		cout<<"Plaque invalide!"<<endl;
		cout<<"Veuillez entrer une plaque valide pour l'automobile: ";
		cin.getline(buffer, 255);
		plaque = buffer;
	}

	cout<<endl;
	cout<<"Enregistrement fait avec succes!"<<endl;
	cout<<"============================================="<<endl;
	cout<<endl;

	util::Date date;
	saaq::Vehicule vehicule(niv, plaque, date);

	cout <<"Voici les informations sur le vehicule que vous venez d'enregistrer"<<endl;
	cout << vehicule.reqVehiculeFormate();

	cout<<endl;
	cout<< "Veuillez entrer une nouvelle plaque valide pour l'automobile: "<<endl;
	string nouvelle_plaque;
	cin.getline(buffer, 255);
	nouvelle_plaque = buffer;
	while(util::validerImmatriculation(nouvelle_plaque) == false){
		cout<<"Plaque invalide!"<<endl;
		cout<<"Veuillez entrer une plaque valide pour l'automobile: ";
		cin.getline(buffer, 255);
		nouvelle_plaque = buffer;
	}

	vehicule.asgImmatriculation(nouvelle_plaque);

	cout << "Nouvelle plaque enregistree avec success!"<<endl;
	cout<<"============================================="<<endl;
	cout << "Voici les nouvelles informations sur le vehicule que vous venez de modifier"<<endl;
	cout << vehicule.reqVehiculeFormate() << endl;
	cout << "Merci d'avoir utilise cet outil!"<<endl;
	cout << "Fermeture du programme."<<endl;







	return 0;
}



