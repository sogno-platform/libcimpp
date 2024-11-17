#ifndef WindGenTurbineType3aIEC_H
#define WindGenTurbineType3aIEC_H

#include "WindGenTurbineType3IEC.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	IEC Type 3A generator set model.  Reference: IEC Standard 61400-27-1 Section 6.6.3.2.
	*/
	class WindGenTurbineType3aIEC: public WindGenTurbineType3IEC
	{

	public:
					CIMPP::Simple_Float kpc; 	/* Current PI controller proportional gain (K). It is type dependent parameter. Default: nullptr */
					CIMPP::Seconds tic; 	/* Current PI controller integration time constant (T). It is type dependent parameter. Default: nullptr */
					CIMPP::PU xs; 	/* Electromagnetic transient reactance (x). It is type dependent parameter. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindGenTurbineType3aIEC();
		virtual ~WindGenTurbineType3aIEC();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindGenTurbineType3aIEC_factory();
}
#endif
