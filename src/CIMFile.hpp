#ifndef CIMFILE_HPP
#define CIMFILE_HPP

#include <string>
#include "ModelDescription.hpp"

/** \brief Class for encapsulating CIM XML files
 */
class CIMFile
{
public:
	CIMFile(std::string path);

	std::string getpath();

	ModelDescription* getModelDescription();

private:
	std::string path;

	ModelDescription modelDescription;// Additional meta data
};

#endif // CIMFILE_HPP
