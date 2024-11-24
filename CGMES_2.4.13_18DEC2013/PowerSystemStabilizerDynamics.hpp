#ifndef PowerSystemStabilizerDynamics_H
#define PowerSystemStabilizerDynamics_H
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
	class ExcitationSystemDynamics;
	class RemoteInputSignal;

	/*
	Power system stabilizer function block whose behaviour is described by reference to a standard model
	*/
	class PowerSystemStabilizerDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		PowerSystemStabilizerDynamics();
		~PowerSystemStabilizerDynamics() override;

		CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics;  /* Excitation system model with which this power system stabilizer model is associated. Default: 0 */
		std::list<CIMPP::RemoteInputSignal*> RemoteInputSignal;  /* Remote input signal used by this power system stabilizer model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PowerSystemStabilizerDynamics_factory();
}
#endif
