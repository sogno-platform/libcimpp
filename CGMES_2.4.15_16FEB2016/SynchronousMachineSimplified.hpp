#ifndef SynchronousMachineSimplified_H
#define SynchronousMachineSimplified_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "SynchronousMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	The simplified model represents a synchronous generator as a constant internal voltage behind an impedance ( + ) as shown in the Simplified diagram.  Since internal voltage is held constant, there is no  input and any excitation system model will be ignored.  There is also no  output.  This model should not be used for representing a real generator except, perhaps, small generators whose response is insignificant.    The parameters used for the Simplified model include:
	*/
	class SynchronousMachineSimplified : public SynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineSimplified();
		~SynchronousMachineSimplified() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SynchronousMachineSimplified_factory();
}
#endif
