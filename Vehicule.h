/**
 * \file Vehicule.h
 * \brief Fichier déclaration de la classe Vehicule
 * \date 2019-10-15
 * \author Renaud Morin
 */

#ifndef VEHICULE_H_
#define VEHICULE_H_

#include <string>
#include "Date.h"
namespace saaq{

/**
 * \class Vehicule
 * \brief Classe vehicule qui contient les informations d'une plaque automobile.
 *        Contient la plaque d'immatriculation, la date d'enregistrement et le NIV du vehicule.
 *        Des méthode qui permettent de nous donner chaques valeurs.
 *        Une méthode qui permet d'assigner une nouvelle plaque de vehicule.
 *        Une méthode qui permet d'afficher le tout dans un format console.
 *
 */

class Vehicule
{
public:
	Vehicule(std::string& p_niv, std::string p_immatriculation, util::Date& p_dateEnregistrement);
	//getters
	const std::string& reqNiv() const;
	const std::string& reqImmatriculation() const;
	const util::Date reqDateEnregistrement() const;
	std::string reqVehiculeFormate() const;
	//setters
	void asgImmatriculation(const std::string& p_immatriculation);
	//surgarges
	bool operator==(const Vehicule& p_vehicule) const;

private:
	std::string m_niv;
	std::string m_immatriculation;
	util::Date m_dateEnregistrement;








};

}




#endif /* VEHICULE_H_ */
