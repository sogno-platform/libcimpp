#ifndef PhaseTapChangerLinear_H
#define PhaseTapChangerLinear_H

#include "PhaseTapChanger.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "AngleDegrees.hpp"
#include "Reactance.hpp"

namespace CIMPP {


	/*
	Describes a tap changer with a linear relation between the tap step and the phase angle difference across the transformer. This is a mathematical model that is an approximation of a real phase tap changer. The phase angle is computed as stepPhaseShitfIncrement times the tap position. The secondary side voltage magnitude is the same as at the primary side.
	*/
	class PhaseTapChangerLinear: public PhaseTapChanger
	{

	public:
					CIMPP::AngleDegrees stepPhaseShiftIncrement; 	/* Phase shift per step position. A positive value indicates a positive phase shift from the winding where the tap is located to the other winding (for a two-winding transformer). The actual phase shift increment might be more accurately computed from the symmetrical or asymmetrical models or a tap step table lookup if those are available. Default: nullptr */
					CIMPP::Reactance xMax; 	/* The reactance depend on the tap position according to a `u` shaped curve. The maximum reactance (xMax) appear at the low and high tap positions. Default: nullptr */
					CIMPP::Reactance xMin; 	/* The reactance depend on the tap position according to a `u` shaped curve. The minimum reactance (xMin) appear at the mid tap position. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PhaseTapChangerLinear();
		virtual ~PhaseTapChangerLinear();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PhaseTapChangerLinear_factory();
}
#endif
