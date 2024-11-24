#ifndef AsynchronousMachineUserDefined_H
#define AsynchronousMachineUserDefined_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "AsynchronousMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class ProprietaryParameterDynamics;

	/*
	Asynchronous machine whose dynamic behaviour is described by a user-defined model.
	*/
	class AsynchronousMachineUserDefined : public AsynchronousMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		AsynchronousMachineUserDefined();
		~AsynchronousMachineUserDefined() override;

		std::list<CIMPP::ProprietaryParameterDynamics*> ProprietaryParameterDynamics;  /* Parameter of this proprietary user-defined model. Default: 0 */
		CIMPP::Boolean proprietary;  /* Behaviour is based on proprietary model as opposed to detailed model. true = user-defined model is proprietary with behaviour mutually understood by sending and receiving applications and parameters passed as general attributes false = user-defined model is explicitly defined in terms of control blocks and their input and output signals. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AsynchronousMachineUserDefined_factory();
}
#endif
