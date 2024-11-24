#ifndef WindContPitchAngleIEC_H
#define WindContPitchAngleIEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "PU.hpp"
#include "AngleDegrees.hpp"
#include "Seconds.hpp"

namespace CIMPP {


class WindGenTurbineType3IEC;
	/*
	Pitch angle control model.  Reference: IEC Standard 61400-27-1 Section 6.6.5.8.
	*/
	class WindContPitchAngleIEC: public IdentifiedObject
	{

	public:
					CIMPP::WindGenTurbineType3IEC* WindGenTurbineType3IEC; 	/* Wind turbine type 3 model with which this pitch control model is associated. Default: 0 */
					CIMPP::Simple_Float dthetamax; 	/* Maximum pitch positive ramp rate (d). It is type dependent parameter. Unit = degrees/sec. Default: nullptr */
					CIMPP::Simple_Float dthetamin; 	/* Maximum pitch negative ramp rate (d). It is type dependent parameter. Unit = degrees/sec. Default: nullptr */
					CIMPP::PU kic; 	/* Power PI controller integration gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kiomega; 	/* Speed PI controller integration gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kpc; 	/* Power PI controller proportional gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kpomega; 	/* Speed PI controller proportional gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kpx; 	/* Pitch cross coupling gain (K). It is type dependent parameter. Default: nullptr */
					CIMPP::AngleDegrees thetamax; 	/* Maximum pitch angle (). It is type dependent parameter. Default: nullptr */
					CIMPP::AngleDegrees thetamin; 	/* Minimum pitch angle (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds ttheta; 	/* Pitch time constant (t). It is type dependent parameter. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindContPitchAngleIEC();
		virtual ~WindContPitchAngleIEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindContPitchAngleIEC_factory();
}
#endif
