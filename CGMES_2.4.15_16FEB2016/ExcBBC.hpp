#ifndef ExcBBC_H
#define ExcBBC_H

#include "ExcitationSystemDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Seconds.hpp"
#include "PU.hpp"
#include "Boolean.hpp"

namespace CIMPP {


	/*
	Transformer fed static excitation system (static with ABB regulator). This model represents a static excitation system in which a gated thyristor bridge fed by a transformer at the main generator terminals feeds the main generator directly.
	*/
	class ExcBBC: public ExcitationSystemDynamics
	{

	public:
					CIMPP::Seconds t1; 	/* Controller time constant (T1).  Typical Value = 6. Default: nullptr */
					CIMPP::Seconds t2; 	/* Controller time constant (T2).  Typical Value = 1. Default: nullptr */
					CIMPP::Seconds t3; 	/* Lead/lag time constant (T3).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Seconds t4; 	/* Lead/lag time constant (T4).  Typical Value = 0.01. Default: nullptr */
					CIMPP::PU k; 	/* Steady state gain (K).  Typical Value = 300. Default: nullptr */
					CIMPP::PU vrmin; 	/* Minimum control element output (Vrmin).  Typical Value = -5. Default: nullptr */
					CIMPP::PU vrmax; 	/* Maximum control element output (Vrmax).  Typical Value = 5. Default: nullptr */
					CIMPP::PU efdmin; 	/* Minimum open circuit exciter voltage (Efdmin).  Typical Value = -5. Default: nullptr */
					CIMPP::PU efdmax; 	/* Maximum open circuit exciter voltage (Efdmax).  Typical Value = 5. Default: nullptr */
					CIMPP::PU xe; 	/* Effective excitation transformer reactance (Xe).  Typical Value = 0.05. Default: nullptr */
					CIMPP::Boolean _switch; 	/* Supplementary signal routing selector (switch). true = Vs connected to 3rd summing point false =  Vs connected to 1st summing point (see diagram). Typical Value = true. Default: false */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ExcBBC();
		virtual ~ExcBBC();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ExcBBC_factory();
}
#endif
