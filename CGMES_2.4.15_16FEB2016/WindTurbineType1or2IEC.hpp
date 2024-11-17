#ifndef WindTurbineType1or2IEC_H
#define WindTurbineType1or2IEC_H

#include "WindTurbineType1or2Dynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class WindMechIEC;
class WindProtectionIEC;
	/*
	Generator model for wind turbine of IEC Type 1 or Type 2 is a standard asynchronous generator model.  Reference: IEC Standard 614000-27-1 Section 6.6.3.1.
	*/
	class WindTurbineType1or2IEC: public WindTurbineType1or2Dynamics
	{

	public:
					CIMPP::WindMechIEC* WindMechIEC; 	/* Wind mechanical model associated with this wind generator type 1 or 2 model. Default: 0 */
					CIMPP::WindProtectionIEC* WindProtectionIEC; 	/* Wind turbune protection model associated with this wind generator type 1 or 2 model. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindTurbineType1or2IEC();
		virtual ~WindTurbineType1or2IEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindTurbineType1or2IEC_factory();
}
#endif
