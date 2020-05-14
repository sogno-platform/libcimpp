#ifndef PhaseTapChangerAsymmetrical_H
#define PhaseTapChangerAsymmetrical_H

#include "PhaseTapChangerNonLinear.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "AngleDegrees.hpp"

namespace CIMPP {


	/*
	Describes the tap model for an asymmetrical phase shifting transformer in which the difference voltage vector adds to the primary side voltage. The angle between the primary side voltage and the difference voltage is named the winding connection angle. The phase shift depends on both the difference voltage magnitude and the winding connection angle.
	*/
	class PhaseTapChangerAsymmetrical: public PhaseTapChangerNonLinear
	{

	public:
					CIMPP::AngleDegrees windingConnectionAngle; 	/* The phase angle between the in-phase winding and the out-of -phase winding used for creating phase shift. The out-of-phase winding produces what is known as the difference voltage.  Setting this angle to 90 degrees is not the same as a symmemtrical transformer. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PhaseTapChangerAsymmetrical();
		virtual ~PhaseTapChangerAsymmetrical();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PhaseTapChangerAsymmetrical_factory();
}
#endif
