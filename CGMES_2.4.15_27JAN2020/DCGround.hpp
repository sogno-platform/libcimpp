#ifndef DCGround_H
#define DCGround_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DCConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "Inductance.hpp"
#include "Resistance.hpp"

namespace CIMPP
{

	/*
	A ground within a DC system.
	*/
	class DCGround : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCGround();
		~DCGround() override;

		CIMPP::Inductance inductance;  /* Inductance to ground. Default: nullptr */
		CIMPP::Resistance r;  /* Resistance to ground. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCGround_factory();
}
#endif
