#ifndef PFVArType2Common1_H
#define PFVArType2Common1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PFVArControllerType2Dynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"

namespace CIMPP
{

	/*
	Power factor / Reactive power regulator. This model represents the power factor or reactive power controller such as the Basler SCP-250. The controller measures power factor or reactive power (PU on generator rated power) and compares it with the operator's set point.
	*/
	class PFVArType2Common1 : public PFVArControllerType2Dynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArType2Common1();
		~PFVArType2Common1() override;

		CIMPP::Boolean j;  /* Selector (J). true = control mode for reactive power false = control mode for power factor. Default: false */
		CIMPP::PU ki;  /* Reset gain (Ki). Default: nullptr */
		CIMPP::PU kp;  /* Proportional gain (Kp). Default: nullptr */
		CIMPP::PU max;  /* Output limit (max). Default: nullptr */
		CIMPP::PU ref;  /* Reference value of reactive power or power factor (Ref). The reference value is initialised by this model. This initialisation may override the value exchanged by this attribute to represent a plant operator`s change of the reference setting. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PFVArType2Common1_factory();
}
#endif
