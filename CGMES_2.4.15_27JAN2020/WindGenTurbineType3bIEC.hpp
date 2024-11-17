#ifndef WindGenTurbineType3bIEC_H
#define WindGenTurbineType3bIEC_H

#include "WindGenTurbineType3IEC.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	IEC Type 3B generator set model.  Reference: IEC Standard 61400-27-1 Section 6.6.3.3.
	*/
	class WindGenTurbineType3bIEC: public WindGenTurbineType3IEC
	{

	public:
					CIMPP::Simple_Float fducw; 	/* Crowbar duration versus voltage variation look-up table (f()). It is case dependent parameter. Default: nullptr */
					CIMPP::Boolean mwtcwp; 	/* Crowbar control mode ().   The parameter is case dependent parameter. Default: false */
					CIMPP::Seconds tg; 	/* Current generation Time constant (). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds two; 	/* Time constant for crowbar washout filter (). It is case dependent parameter. Default: nullptr */
					CIMPP::PU xs; 	/* Electromagnetic transient reactance (x). It is type dependent parameter. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindGenTurbineType3bIEC();
		virtual ~WindGenTurbineType3bIEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindGenTurbineType3bIEC_factory();
}
#endif
