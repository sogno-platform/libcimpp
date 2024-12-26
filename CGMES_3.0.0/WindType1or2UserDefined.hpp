#ifndef WindType1or2UserDefined_H
#define WindType1or2UserDefined_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindTurbineType1or2Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class ProprietaryParameterDynamics;

	/*
	Wind type 1 or type 2 function block whose dynamic behaviour is described by <font color="#0f0f0f">a user-defined model.</font>
	*/
	class WindType1or2UserDefined : public WindTurbineType1or2Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		WindType1or2UserDefined();
		~WindType1or2UserDefined() override;

		std::list<CIMPP::ProprietaryParameterDynamics*> ProprietaryParameterDynamics;  /* Parameter of this proprietary user-defined model. Default: 0 */
		CIMPP::Boolean proprietary;  /* Behaviour is based on a proprietary model as opposed to a detailed model. true = user-defined model is proprietary with behaviour mutually understood by sending and receiving applications and parameters passed as general attributes false = user-defined model is explicitly defined in terms of control blocks and their input and output signals. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindType1or2UserDefined_factory();
}
#endif