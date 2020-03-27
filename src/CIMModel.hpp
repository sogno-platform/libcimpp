#ifndef CIMModel_HPP
#define CIMModel_HPP

#include <vector>
#include <list>
#include <unordered_map>
#include "CIMFile.hpp"
#include "BaseClass.h"

using namespace CGMES;

/** \brief CIM model handler
 *
 * This model handler organizes the files of a CIM model. It also gives access
 * to model description.
 *
 * The model owns the CIM objects it parses therefore it will free them when the
 * model object is destroyed.
 */
class CIMModel
{
public:
	CIMModel();
	~CIMModel();

	/** \brief Add a file to the current model
	 *
	 * If the file belongs to another model or the file handle is invalid it will
	 * return false otherwise true.
	 */
	bool addCIMFile(CIMFile file);

	/** \brief Add a file to the current model
	 *
	 * If the file belongs to another model or the path is invalid it will
	 * return false otherwise true.
	 */
	bool addCIMFile(std::string path);

	/** \brief Parse CIM Files
	 *
	 * This function parses all the CIM files specified in this model
	 */
	void parseFiles();

	/** Container to access all the CIM objects */
	std::vector<BaseClass*> Objects;

	/** \brief Set dependency check on */
	void setDependencyCheckOn();

	/** \brief Set dependency check off */
	void setDependencyCheckOff();

	/** \brief get dependency check status */
	bool getDependencyCheck();

	// Model meta data

private:
	std::list<CIMFile> Files;
	std::unordered_map<std::string, BaseClass*> RDFMap;
	bool DependencyCheck;
};

#endif // CIMModel_HPP
