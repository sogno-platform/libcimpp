#ifndef BASECLASS_HPP
#define BASECLASS_HPP

#include <unordered_map>
#include "BaseClassDefiner.hpp"

namespace CGMES
{
	class BaseClass {
	public:
		enum cgmesProfile {EQ = 0, SSH = 1, TP = 2, SV = 3, DY = 4, GL = 5, DI = 6};
		virtual ~BaseClass();
		static BaseClassDefiner define();
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>&);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
	        const static char debugName[];
		virtual const char* debugString();
	};
}
#endif // BASECLASS_HPP
