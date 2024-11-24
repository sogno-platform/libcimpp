#ifndef DCShunt_H
#define DCShunt_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DCConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "Capacitance.hpp"
#include "Resistance.hpp"

namespace CIMPP
{

	/*
	A shunt device within the DC system, typically used for filtering.  Needed for transient and short circuit studies.
	*/
	class DCShunt : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCShunt();
		~DCShunt() override;

		CIMPP::Capacitance capacitance;  /* Capacitance of the DC shunt. Default: nullptr */
		CIMPP::Resistance resistance;  /* Resistance of the DC device. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCShunt_factory();
}
#endif
