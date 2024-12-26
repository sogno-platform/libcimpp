#ifndef WindContPType3IEC_H
#define WindContPType3IEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


class WindDynamicsLookupTable;
class WindGenTurbineType3IEC;
	/*
	P control model Type 3.  Reference: IEC Standard 61400-27-1 Section 6.6.5.3.
	*/
	class WindContPType3IEC: public IdentifiedObject
	{

	public:
					std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable; 	/* The P control type 3 model with which this wind dynamics lookup table is associated. Default: 0 */
					CIMPP::WindGenTurbineType3IEC* WindGenTurbineType3IEC; 	/* Wind turbine type 3 model with which this Wind control P type 3 model is associated. Default: 0 */
					CIMPP::PU dpmax; 	/* Maximum wind turbine power ramp rate (). It is project dependent parameter. Default: nullptr */
					CIMPP::PU dtrisemaxlvrt; 	/* Limitation of torque rise rate during LVRT for S (d). It is project dependent parameter. Default: nullptr */
					CIMPP::PU kdtd; 	/* Gain for active drive train damping (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kip; 	/* PI controller integration parameter (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kpp; 	/* PI controller proportional gain (). It is type dependent parameter. Default: nullptr */
					CIMPP::Boolean mplvrt; 	/* Enable LVRT power control mode (M true = 1: voltage control false = 0: reactive power control.  It is project dependent parameter. Default: false */
					CIMPP::PU omegaoffset; 	/* Offset to reference value that limits controller action during rotor speed changes (omega). It is case dependent parameter. Default: nullptr */
					CIMPP::PU pdtdmax; 	/* Maximum active drive train damping power (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU rramp; 	/* Ramp limitation of torque, required in some grid codes (). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds tdvs; 	/* Timedelay after deep voltage sags (T). It is project dependent parameter. Default: nullptr */
					CIMPP::PU temin; 	/* Minimum electrical generator torque (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tomegafilt; 	/* Filter time constant for generator speed measurement (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tpfilt; 	/* Filter time constant for power measurement (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU tpord; 	/* Time constant in power order lag (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tufilt; 	/* Filter time constant for voltage measurement (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU tuscale; 	/* Voltage scaling factor of reset-torque (T). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds twref; 	/* Time constant in speed reference filter (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU udvs; 	/* Voltage limit for hold LVRT status after deep voltage sags (). It is project dependent parameter. Default: nullptr */
					CIMPP::PU updip; 	/* Voltage dip threshold for P-control ().  Part of turbine control, often different (e.g 0.8) from converter thresholds. It is project dependent parameter. Default: nullptr */
					CIMPP::PU wdtd; 	/* Active drive train damping frequency (omega). It can be calculated from two mass model parameters. It is type dependent parameter. Default: nullptr */
					CIMPP::Simple_Float zeta; 	/* Coefficient for active drive train damping (zeta). It is type dependent parameter. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindContPType3IEC();
		virtual ~WindContPType3IEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindContPType3IEC_factory();
}
#endif
