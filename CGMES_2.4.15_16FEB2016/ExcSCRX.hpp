#ifndef ExcSCRX_H
#define ExcSCRX_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "Seconds.hpp"
#include "PU.hpp"
#include "Boolean.hpp"

namespace CIMPP {


	/*
	Simple excitation system model representing generic characteristics of many excitation systems; intended for use where negative field current may be a problem.
	*/
	class ExcSCRX: public ExcitationSystemDynamics
	{

	public:
					CIMPP::Simple_Float tatb; 	/* Ta/Tb - gain reduction ratio of lag-lead element (TaTb). The parameter Ta is not defined explicitly.  Typical Value = 0.1. Default: nullptr */
					CIMPP::Seconds tb; 	/* Denominator time constant of lag-lead block (Tb).  Typical Value = 10. Default: nullptr */
					CIMPP::PU k; 	/* Gain (K) (&gt;0).  Typical Value = 200. Default: nullptr */
					CIMPP::Seconds te; 	/* Time constant of gain block (Te) (&gt;0).  Typical Value = 0.02. Default: nullptr */
					CIMPP::PU emin; 	/* Minimum field voltage output (Emin).  Typical Value = 0. Default: nullptr */
					CIMPP::PU emax; 	/* Maximum field voltage output (Emax).  Typical Value = 5. Default: nullptr */
					CIMPP::Boolean cswitch; 	/* Power source switch (Cswitch). true = fixed voltage of 1.0 PU false = generator terminal voltage. Default: false */
					CIMPP::Simple_Float rcrfd; 	/* Rc/Rfd - ratio of field discharge resistance to field winding resistance (RcRfd).  Typical Value = 0. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ExcSCRX();
		virtual ~ExcSCRX();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcSCRX_factory();
}
#endif
