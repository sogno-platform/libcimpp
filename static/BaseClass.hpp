#ifndef BASECLASS_HPP
#define BASECLASS_HPP

#ifndef CGMES_BUILD
#define CGMES_BUILD
#endif

#include <string>
#include <unordered_map>

#include "BaseClassDefiner.hpp"

class BaseClass
{
public:
	enum cgmesProfile {EQ = 0, SSH = 1, TP = 2, SV = 3, DY = 4, GL = 5, DI = 6};
	virtual ~BaseClass();

	static const char debugName[];
	virtual const char* debugString() const;

	static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
	static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
	static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
	static const CIMPP::BaseClassDefiner declare();
};
#endif // BASECLASS_HPP
