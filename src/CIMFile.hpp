#ifndef CIMFILE_HPP
#define CIMFILE_HPP

#include <string>

/** \brief Class for encapsulating CIM XML files
 */
class CIMFile
{
public:
	CIMFile(std::string path);

	std::string getpath();
private:
	std::string path;

	// Additional meta data
};

#endif // CIMFILE_HPP
