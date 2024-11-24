#ifndef WindMechIEC_H
#define WindMechIEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


class WindGenTurbineType3IEC;
class WindTurbineType1or2IEC;
class WindTurbineType4bIEC;
	/*
	Two mass model.  Reference: IEC Standard 61400-27-1 Section 6.6.2.1.
	*/
	class WindMechIEC: public IdentifiedObject
	{

	public:
					CIMPP::WindGenTurbineType3IEC* WindGenTurbineType3IEC; 	/* Wind turbine Type 3 model with which this wind mechanical model is associated. Default: 0 */
					CIMPP::WindTurbineType1or2IEC* WindTurbineType1or2IEC; 	/* Wind generator type 1 or 2 model with which this wind mechanical model is associated. Default: 0 */
					CIMPP::WindTurbineType4bIEC* WindTurbineType4bIEC; 	/* Wind turbine type 4B model with which this wind mechanical model is associated. Default: 0 */
					CIMPP::PU cdrt; 	/* Drive train damping (. It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds hgen; 	/* Inertia constant of generator (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds hwtr; 	/* Inertia constant of wind turbine rotor (). It is type dependent parameter. Default: nullptr */
					CIMPP::PU kdrt; 	/* Drive train stiffness (). It is type dependent parameter. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindMechIEC();
		virtual ~WindMechIEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindMechIEC_factory();
}
#endif
