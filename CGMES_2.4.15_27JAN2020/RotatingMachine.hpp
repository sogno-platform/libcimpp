#ifndef RotatingMachine_H
#define RotatingMachine_H

#include "RegulatingCondEq.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Simple_Float.hpp"
#include "ApparentPower.hpp"
#include "Voltage.hpp"

namespace CIMPP {


class GeneratingUnit;
class HydroPump;
	/*
	A rotating machine which may be used as a generator or motor.
	*/
	class RotatingMachine: public RegulatingCondEq
	{

	public:
					CIMPP::GeneratingUnit* GeneratingUnit; 	/* A synchronous machine may operate as a generator and as such becomes a member of a generating unit. Default: 0 */
					CIMPP::HydroPump* HydroPump; 	/* The synchronous machine drives the turbine which moves the water from a low elevation to a higher elevation. The direction of machine rotation for pumping may or may not be the same as for generating. Default: 0 */
					CIMPP::ActivePower p; 	/* Active power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
					CIMPP::ReactivePower q; 	/* Reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
					CIMPP::Simple_Float ratedPowerFactor; 	/* Power factor (nameplate data). It is primarily used for short circuit data exchange according to IEC 60909. Default: nullptr */
					CIMPP::ApparentPower ratedS; 	/* Nameplate apparent power rating for the unit. The attribute shall have a positive value. Default: nullptr */
					CIMPP::Voltage ratedU; 	/* Rated voltage (nameplate data, Ur in IEC 60909-0). It is primarily used for short circuit data exchange according to IEC 60909. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		RotatingMachine();
		virtual ~RotatingMachine();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RotatingMachine_factory();
}
#endif
