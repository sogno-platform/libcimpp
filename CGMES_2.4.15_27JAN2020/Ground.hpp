#ifndef Ground_H
#define Ground_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	A point where the system is grounded used for connecting conducting equipment to ground. The power system model can have any number of grounds.
	*/
	class Ground : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		Ground();
		~Ground() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Ground_factory();
}
#endif
