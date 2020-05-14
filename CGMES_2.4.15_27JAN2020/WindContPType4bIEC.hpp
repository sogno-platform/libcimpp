#ifndef WindContPType4bIEC_H
#define WindContPType4bIEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


class WindTurbineType4bIEC;
	/*
	P control model Type 4B.  Reference: IEC Standard 61400-27-1 Section 6.6.5.5.
	*/
	class WindContPType4bIEC: public IdentifiedObject
	{

	public:
					CIMPP::PU dpmax; 	/* Maximum wind turbine power ramp rate (). It is project dependent parameter. Default: nullptr */
					CIMPP::Seconds tpaero; 	/* Time constant in aerodynamic power response (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tpord; 	/* Time constant in power order lag (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tufilt; 	/* Voltage measurement filter time constant (). It is type dependent parameter. Default: nullptr */
					CIMPP::WindTurbineType4bIEC* WindTurbineType4bIEC; 	/* Wind turbine type 4B model with which this wind control P type 4B model is associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindContPType4bIEC();
		virtual ~WindContPType4bIEC();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindContPType4bIEC_factory();
}
#endif
