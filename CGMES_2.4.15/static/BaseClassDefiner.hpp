#ifndef BASECLASSDEFINER_HPP
#define BASECLASSDEFINER_HPP

#include <unordered_map>
#include <ostream>

namespace CGMES
{
	class BaseClass;
	typedef bool (*class_assign_function)(BaseClass*, BaseClass*);
	typedef bool (*assign_function)(std::stringstream&, BaseClass*);

	class BaseClassDefiner {
	public:
		BaseClassDefiner(void(*addConstruct)(std::unordered_map<std::string, BaseClass* (*)()>&),
				 void(*addPrimitiveAssignFns)(std::unordered_map<std::string, assign_function>&),
				 void(*addClassAssignFns)(std::unordered_map<std::string, class_assign_function>&),
				 const char *debugStr);
		void (*addConstructToMap)(std::unordered_map<std::string, BaseClass* (*)()>&);
		void (*addPrimitiveAssignFnsToMap)(std::unordered_map<std::string, assign_function>&);
		void (*addClassAssignFnsToMap)(std::unordered_map<std::string, class_assign_function>&);
		const char* debugString;
	};
}
#endif // BASECLASSDEFINER
