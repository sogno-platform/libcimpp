#ifndef VoltageAdjusterDynamics_H
#define VoltageAdjusterDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class PFVArControllerType1Dynamics;

	/*
	Voltage adjuster function block whose behaviour is described by reference to a standard model
	*/
	class VoltageAdjusterDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		VoltageAdjusterDynamics();
		~VoltageAdjusterDynamics() override;

		CIMPP::PFVArControllerType1Dynamics* PFVArControllerType1Dynamics;  /* Power Factor or VAr controller Type I model with which this voltage adjuster is associated. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* VoltageAdjusterDynamics_factory();
}
#endif
