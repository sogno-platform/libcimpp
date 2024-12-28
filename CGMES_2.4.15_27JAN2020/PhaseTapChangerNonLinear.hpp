#ifndef PhaseTapChangerNonLinear_H
#define PhaseTapChangerNonLinear_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PhaseTapChanger.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PerCent.hpp"
#include "Reactance.hpp"

namespace CIMPP
{

	/*
	The non-linear phase tap changer describes the non-linear behavior of a phase tap changer. This is a base class for the symmetrical and asymmetrical phase tap changer models. The details of these models can be found in the IEC 61970-301 document.
	*/
	class PhaseTapChangerNonLinear : public PhaseTapChanger
	{
	public:
		/* constructor initialising all attributes to null */
		PhaseTapChangerNonLinear();
		~PhaseTapChangerNonLinear() override;

		CIMPP::PerCent voltageStepIncrement;  /* The voltage step increment on the out of phase winding specified in percent of nominal voltage of the transformer end. Default: nullptr */
		CIMPP::Reactance xMax;  /* The reactance depend on the tap position according to a `u` shaped curve. The maximum reactance (xMax) appear at the low and high tap positions. Default: nullptr */
		CIMPP::Reactance xMin;  /* The reactance depend on the tap position according to a `u` shaped curve. The minimum reactance (xMin) appear at the mid tap position. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* PhaseTapChangerNonLinear_factory();
}
#endif
