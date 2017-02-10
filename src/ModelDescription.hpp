#ifndef MODELDESCRIPTION_HPP
#define MODELDESCRIPTION_HPP

#include <string>
#include <vector>

class ModelDescription
{
public:
	ModelDescription();
	~ModelDescription();

	std::string rdfID;
	std::string created;
	std::string scenarioTime;
	std::string version;
	std::string description;
	std::string modelingAuthoritySet;
	std::string profile;

	std::vector<std::string> dependencyID;//TODO:Besserer Speicher fuer Dependencies? (tree)

	//TODO: Evtl. Suche nach ID im Vector implementieren
};

#endif // MODELDESCRIPTION_HPP
