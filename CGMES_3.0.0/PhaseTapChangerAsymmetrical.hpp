#ifndef PhaseTapChangerAsymmetrical_H
#define PhaseTapChangerAsymmetrical_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PhaseTapChangerNonLinear.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"

namespace CIMPP
{

	/*
	Describes the tap model for an asymmetrical phase shifting transformer in which the difference voltage vector adds to the in-phase winding. The out-of-phase winding is the transformer end where the tap changer is located.  The angle between the in-phase and out-of-phase windings is named the winding connection angle. The phase shift depends on both the difference voltage magnitude and the winding connection angle.
	*/
	class PhaseTapChangerAsymmetrical : public PhaseTapChangerNonLinear
	{
	public:
		/* constructor initialising all attributes to null */
		PhaseTapChangerAsymmetrical();
		~PhaseTapChangerAsymmetrical() override;

		CIMPP::AngleDegrees windingConnectionAngle;  /* The phase angle between the in-phase winding and the out-of -phase winding used for creating phase shift. The out-of-phase winding produces what is known as the difference voltage.  Setting this angle to 90 degrees is not the same as a symmetrical transformer. The attribute can only be multiples of 30 degrees.  The allowed range is -150 degrees to 150 degrees excluding 0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PhaseTapChangerAsymmetrical_factory();
}
#endif
