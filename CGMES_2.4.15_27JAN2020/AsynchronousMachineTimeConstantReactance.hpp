#ifndef AsynchronousMachineTimeConstantReactance_H
#define AsynchronousMachineTimeConstantReactance_H

#include "AsynchronousMachineDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	The parameters used for models expressed in time constant reactance form include:
	*/
	class AsynchronousMachineTimeConstantReactance: public AsynchronousMachineDynamics
	{

	public:
					CIMPP::Seconds tpo; 	/* Transient rotor time constant (T`o) (&gt; T``o).  Typical Value = 5. Default: nullptr */
					CIMPP::Seconds tppo; 	/* Subtransient rotor time constant (T``o) (&gt; 0).  Typical Value = 0.03. Default: nullptr */
					CIMPP::PU xp; 	/* Transient reactance (unsaturated) (X`) (&gt;=X``).  Typical Value = 0.5. Default: nullptr */
					CIMPP::PU xpp; 	/* Subtransient reactance (unsaturated) (X``) (&gt; Xl).  Typical Value = 0.2. Default: nullptr */
					CIMPP::PU xs; 	/* Synchronous reactance (Xs) (&gt;= X`).  Typical Value = 1.8. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		AsynchronousMachineTimeConstantReactance();
		virtual ~AsynchronousMachineTimeConstantReactance();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AsynchronousMachineTimeConstantReactance_factory();
}
#endif
