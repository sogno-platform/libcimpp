#ifndef PhaseTapChangerNonLinear_H
#define PhaseTapChangerNonLinear_H

#include "PhaseTapChanger.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PerCent.hpp"
#include "Reactance.hpp"

namespace CIMPP {


	/*
	The non-linear phase tap changer describes the non-linear behavior of a phase tap changer. This is a base class for the symmetrical and asymmetrical phase tap changer models. The details of these models can be found in the IEC 61970-301 document.
	*/
	class PhaseTapChangerNonLinear: public PhaseTapChanger
	{

	public:
					CIMPP::PerCent voltageStepIncrement; 	/* The voltage step increment on the out of phase winding specified in percent of nominal voltage of the transformer end. Default: nullptr */
					CIMPP::Reactance xMax; 	/* The reactance depend on the tap position according to a `u` shaped curve. The maximum reactance (xMax) appear at the low and high tap positions. Default: nullptr */
					CIMPP::Reactance xMin; 	/* The reactance depend on the tap position according to a `u` shaped curve. The minimum reactance (xMin) appear at the mid tap position. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		PhaseTapChangerNonLinear();
		virtual ~PhaseTapChangerNonLinear();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PhaseTapChangerNonLinear_factory();
}
#endif
