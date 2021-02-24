
/**
 * \file Vehicule.cpp
 * \brief Fichier d'implémentation de la classe Vehicule
 * \date 2019-10-15
 * \author Renaud Morin
 */
#include <iostream>
#include "Date.h"
#include "Vehicule.h"
#include "validationFormat.h"
#include <string>
#include <sstream>
using namespace std;

namespace saaq{
/**
 * \brief Constructeur d'un nouvel objet de la classe Vehicule
 * \param[in] p_niv NIV du vehicule
 * \param[in] p_immatriculation immatriculation du vehicule
 * \param[in] p_dateEnregistrement date d'enregistrement
 * \pre p_nom, p_prenom et p_dateNaissance doivent etre valide
 * \post l'objet courant a été correctement créé et assigné
 */
Vehicule::Vehicule(std::string& p_niv, std::string p_immatriculation, util::Date& p_dateEnregistrement):
		m_niv(p_niv), m_immatriculation(p_immatriculation), m_dateEnregistrement(p_dateEnregistrement)
{

}
/**
 * \brief Retourne le NIV
 * \return le NIV
 */
const std::string& Vehicule::reqNiv() const
{
	return m_niv;
}
/**
 * \brief Retourne le numéro d'immatriculation
 * \return Le numéro d'immatriculation
 */
const std::string& Vehicule::reqImmatriculation() const
{
	return m_immatriculation;
}
/**
 * \brief Retourne la date d'enregistrement
 * \return date d'enregistrement
 */
const util::Date Vehicule::reqDateEnregistrement() const
{
	return m_dateEnregistrement;
}

/**
 * \brief Assigne une nouvelle plaque automobile
 * \param[in] p_immatriculation est la nouvelle plaque automobile qui est valide
 * \pre p_immatriculation correspond a une plaque automobile valide
 * \post la nouvelle plaque a été assigné correctement
 */
void Vehicule::asgImmatriculation(const std::string& p_immatriculation)
{
	m_immatriculation = p_immatriculation;
}

/**
 * \brief Renvoie les informations de l'enregistrement dans un format console
 * \return Informations de la plaque automobile, son NIV et la date d'enregistrement
 */
std::string Vehicule::reqVehiculeFormate() const
{
	ostringstream os;
	os << "Numero de serie          : " << Vehicule::reqNiv() << endl;
	os << "Numero d’immatriculation : " << Vehicule::reqImmatriculation() << endl;
	os << "Date d’enregistrement    : " << Vehicule::reqDateEnregistrement().reqDateFormatee() << endl;

	return os.str();
}
/**
 * \brief Surcharge de l'opérateur == qui permet de vérifier si la plaques et la date d'enregistrement sont identiques
 * \param[in] p_vehicule objet vehicule à comparer
 * \return valeur booléene de la comparaison de la plaque et de la date d'enregistrement
 */
bool Vehicule::operator==(const Vehicule& p_vehicule) const
{
	if (m_niv == p_vehicule.m_niv && m_immatriculation == p_vehicule.m_immatriculation && m_dateEnregistrement == p_vehicule.m_dateEnregistrement)
	{
		return true;
	}
	else
	{
		return false;
	}
}






}//namespace saaq
