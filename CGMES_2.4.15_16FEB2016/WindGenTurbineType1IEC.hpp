#ifndef WindGenTurbineType1IEC_H
#define WindGenTurbineType1IEC_H

#include "WindTurbineType1or2IEC.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class WindAeroConstIEC;
	/*
	Wind turbine IEC Type 1.  Reference: IEC Standard 61400-27-1, section 6.5.2.
	*/
	class WindGenTurbineType1IEC: public WindTurbineType1or2IEC
	{

	public:
					CIMPP::WindAeroConstIEC* WindAeroConstIEC; 	/* Wind aerodynamic model associated with this wind turbine type 1 model. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindGenTurbineType1IEC();
		virtual ~WindGenTurbineType1IEC();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindGenTurbineType1IEC_factory();
}
#endif
