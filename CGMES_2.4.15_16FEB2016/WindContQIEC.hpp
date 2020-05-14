#ifndef WindContQIEC_H
#define WindContQIEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"
#include "WindLVRTQcontrolModesKind.hpp"
#include "WindQcontrolModesKind.hpp"

namespace CIMPP {


class WindTurbineType3or4IEC;
	/*
	Q control model.  Reference: IEC Standard 61400-27-1 Section 6.6.5.6.
	*/
	class WindContQIEC: public IdentifiedObject
	{

	public:
					CIMPP::PU iqh1; 	/* Maximum reactive current injection during dip (i). It is type dependent parameter. Default: nullptr */
					CIMPP::PU iqmax; 	/* Maximum reactive current injection (i). It is type dependent parameter. Default: nullptr */
					CIMPP::PU iqmin; 	/* Minimum reactive current injection (i). It is type dependent parameter. Default: nullptr */
					CIMPP::PU iqpost; 	/* Post fault reactive current injection (). It is project dependent parameter. Default: nullptr */
					CIMPP::PU kiq; 	/* Reactive power PI controller integration gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kiu; 	/* Voltage PI controller integration gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kpq; 	/* Reactive power PI controller proportional gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kpu; 	/* Voltage PI controller proportional gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kqv; 	/* Voltage scaling factor for LVRT current (). It is project dependent parameter. Default: nullptr */
					CIMPP::PU qmax; 	/* Maximum reactive power (q). It is type dependent parameter. Default: nullptr */
					CIMPP::PU qmin; 	/* Minimum reactive power (q). It is type dependent parameter. Default: nullptr */
					CIMPP::PU rdroop; 	/* Resistive component of voltage drop impedance (). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds tiq; 	/* Time constant in reactive current lag (T). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tpfilt; 	/* Power measurement filter time constant (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tpost; 	/* Length of time period where post fault reactive power is injected (). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds tqord; 	/* Time constant in reactive power order lag (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tufilt; 	/* Voltage measurement filter time constant (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU udb1; 	/* Voltage dead band lower limit (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU udb2; 	/* Voltage dead band upper limit (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU umax; 	/* Maximum voltage in voltage PI controller integral term (u). It is type dependent parameter. Default: nullptr */
					CIMPP::PU umin; 	/* Minimum voltage in voltage PI controller integral term (u). It is type dependent parameter. Default: nullptr */
					CIMPP::PU uqdip; 	/* Voltage threshold for LVRT detection in q control (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU uref0; 	/* User defined bias in voltage reference (), used when  =. It is case dependent parameter. Default: nullptr */
					CIMPP::WindLVRTQcontrolModesKind windLVRTQcontrolModesType; 	/* Types of LVRT Q control modes (). It is project dependent parameter. Default: 0 */
					CIMPP::WindQcontrolModesKind windQcontrolModesType; 	/* Types of general wind turbine Q control modes ().  It is project dependent parameter. Default: 0 */
					CIMPP::PU xdroop; 	/* Inductive component of voltage drop impedance (). It is project dependent parameter. Default: nullptr */
					CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC; 	/* Wind turbine type 3 or 4 model with which this reactive control mode is associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindContQIEC();
		virtual ~WindContQIEC();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindContQIEC_factory();
}
#endif
