
#include "BaseClassDefiner.hpp"

using namespace CIMPP;

BaseClassDefiner::BaseClassDefiner(void(*addConstruct)(std::unordered_map<std::string, BaseClass* (*)()>&),
			 void(*addPrimitiveAssignFns)(std::unordered_map<std::string, assign_function>&),
			 void(*addClassAssignFns)(std::unordered_map<std::string, class_assign_function>&),
			 const char *debugStr) {
	addConstructToMap = addConstruct;
	addPrimitiveAssignFnsToMap = addPrimitiveAssignFns;
	addClassAssignFnsToMap = addClassAssignFns;
	debugString = debugStr;
}
