#ifndef WindTurbineType4bIEC_H
#define WindTurbineType4bIEC_H

#include "WindGenType4IEC.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class WindContPType4bIEC;
class WindMechIEC;
	/*
	Wind turbine IEC Type 4A.  Reference: IEC Standard 61400-27-1, section 6.5.5.3.
	*/
	class WindTurbineType4bIEC: public WindGenType4IEC
	{

	public:
					CIMPP::WindContPType4bIEC* WindContPType4bIEC; 	/* Wind control P type 4B model associated with this wind turbine type 4B model. Default: 0 */
					CIMPP::WindMechIEC* WindMechIEC; 	/* Wind mechanical model associated with this wind turbine Type 4B model. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindTurbineType4bIEC();
		virtual ~WindTurbineType4bIEC();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindTurbineType4bIEC_factory();
}
#endif
