#ifndef Conductor_H
#define Conductor_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "Length.hpp"

namespace CIMPP
{

	/*
	Combination of conducting material with consistent electrical characteristics, building a single electrical system, used to carry current between points in the power system.
	*/
	class Conductor : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		Conductor();
		~Conductor() override;

		CIMPP::Length length;  /* Segment length for calculating line section capabilities Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Conductor_factory();
}
#endif
