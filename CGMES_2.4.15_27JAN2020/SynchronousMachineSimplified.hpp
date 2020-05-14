#ifndef SynchronousMachineSimplified_H
#define SynchronousMachineSimplified_H

#include "SynchronousMachineDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	The simplified model represents a synchronous generator as a constant internal voltage behind an impedance ( + ) as shown in the Simplified diagram.  Since internal voltage is held constant, there is no  input and any excitation system model will be ignored.  There is also no  output.  This model should not be used for representing a real generator except, perhaps, small generators whose response is insignificant.    The parameters used for the Simplified model include:
	*/
	class SynchronousMachineSimplified: public SynchronousMachineDynamics
	{

	public:
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		SynchronousMachineSimplified();
		virtual ~SynchronousMachineSimplified();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SynchronousMachineSimplified_factory();
}
#endif
