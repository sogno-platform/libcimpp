#ifndef BASECLASS_HPP
#define BASECLASS_HPP

#ifndef CGMES_BUILD
#define CGMES_BUILD
#endif

#include <unordered_map>
#include "BaseClassDefiner.hpp"

class BaseClass {
public:
	enum cgmesProfile {EQ = 0, SSH = 1, TP = 2, SV = 3, DY = 4, GL = 5, DI = 6};
	virtual ~BaseClass();
	static CIMPP::BaseClassDefiner declare();
	static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>&);
	static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
	static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
        const static char debugName[];
	virtual const char* debugString();
};
#endif // BASECLASS_HPP
