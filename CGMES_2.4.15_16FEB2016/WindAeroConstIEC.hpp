#ifndef WindAeroConstIEC_H
#define WindAeroConstIEC_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class WindGenTurbineType1IEC;
	/*
	The constant aerodynamic torque model assumes that the aerodynamic torque is constant.  Reference: IEC Standard 61400-27-1 Section 6.6.1.1.
	*/
	class WindAeroConstIEC: public IdentifiedObject
	{

	public:
					CIMPP::WindGenTurbineType1IEC* WindGenTurbineType1IEC; 	/* Wind turbine type 1 model with which this wind aerodynamic model is associated. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindAeroConstIEC();
		virtual ~WindAeroConstIEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindAeroConstIEC_factory();
}
#endif
