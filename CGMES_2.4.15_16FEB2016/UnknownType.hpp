#ifndef UnknownType_H
#define UnknownType_H
#include <sstream>
#include <iostream>
#include <istream>
#include "BaseClass.hpp"


namespace CIMPP {

	class UnknownType: public BaseClass
	{
public:
		static const char debugName[];
		UnknownType();
		virtual ~UnknownType();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();
	};
}
#endif
