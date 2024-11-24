#ifndef RotatingMachine_H
#define RotatingMachine_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "RegulatingCondEq.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "ApparentPower.hpp"
#include "Float.hpp"
#include "ReactivePower.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class GeneratingUnit;
	class HydroPump;

	/*
	A rotating machine which may be used as a generator or motor.
	*/
	class RotatingMachine : public RegulatingCondEq
	{
	public:
		/* constructor initialising all attributes to null */
		RotatingMachine();
		~RotatingMachine() override;

		CIMPP::GeneratingUnit* GeneratingUnit;  /* A synchronous machine may operate as a generator and as such becomes a member of a generating unit. Default: 0 */
		CIMPP::HydroPump* HydroPump;  /* The synchronous machine drives the turbine which moves the water from a low elevation to a higher elevation. The direction of machine rotation for pumping may or may not be the same as for generating. Default: 0 */
		CIMPP::ActivePower p;  /* Active power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ReactivePower q;  /* Reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
		CIMPP::Float ratedPowerFactor;  /* Power factor (nameplate data). It is primarily used for short circuit data exchange according to IEC 60909. The attribute cannot be a negative value. Default: 0.0 */
		CIMPP::ApparentPower ratedS;  /* Nameplate apparent power rating for the unit. The attribute shall have a positive value. Default: nullptr */
		CIMPP::Voltage ratedU;  /* Rated voltage (nameplate data, Ur in IEC 60909-0). It is primarily used for short circuit data exchange according to IEC 60909. The attribute shall be a positive value. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* RotatingMachine_factory();
}
#endif
