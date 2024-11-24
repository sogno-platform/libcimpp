#ifndef VCompIEEEType2_H
#define VCompIEEEType2_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "VoltageCompensatorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class GenICompensationForGenJ;

	class VCompIEEEType2 : public VoltageCompensatorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		VCompIEEEType2();
		~VCompIEEEType2() override;

		std::list<CIMPP::GenICompensationForGenJ*> GenICompensationForGenJ;  /* Compensation of this voltage compensator`s generator for current flow out of another generator. Default: 0 */
		CIMPP::Seconds tr;  /*  Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* VCompIEEEType2_factory();
}
#endif
