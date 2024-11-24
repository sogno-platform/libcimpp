#ifndef EarthFaultCompensator_H
#define EarthFaultCompensator_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "Resistance.hpp"

namespace CIMPP
{

	/*
	A conducting equipment used to represent a connection to ground which is typically used to compensate earth faults.   An earth fault compensator device modelled with a single terminal implies a second terminal solidly connected to ground.  If two terminals are modelled, the ground is not assumed and normal connection rules apply.
	*/
	class EarthFaultCompensator : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		EarthFaultCompensator();
		~EarthFaultCompensator() override;

		CIMPP::Resistance r;  /* Nominal resistance of device. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* EarthFaultCompensator_factory();
}
#endif
