#ifndef DCChopper_H
#define DCChopper_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DCConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	Low resistance equipment used in the internal DC circuit to balance voltages. It has typically positive and negative pole terminals and a ground.
	*/
	class DCChopper : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCChopper();
		~DCChopper() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCChopper_factory();
}
#endif
