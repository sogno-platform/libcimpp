#ifndef PhaseTapChangerLinear_H
#define PhaseTapChangerLinear_H
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
#include "CimClassDetails.hpp"
#include "AngleDegrees.hpp"
#include "Reactance.hpp"

namespace CIMPP
{

	/** \brief Describes a tap changer with a linear relation between the tap step and the phase angle difference across the transformer. This is a mathematical model that is an approximation of a real phase tap changer. The phase angle is computed as stepPhaseShiftIncrement times the tap position. The voltage magnitude of both sides is the same. */
	class PhaseTapChangerLinear : public PhaseTapChanger
	{
	public:
		/* constructor initialising all attributes to null */
		PhaseTapChangerLinear();
		~PhaseTapChangerLinear() override;

		/** \brief Phase shift per step position. A positive value indicates a positive angle variation from the Terminal at the  PowerTransformerEnd,  where the TapChanger is located, into the transformer. The actual phase shift increment might be more accurately computed from the symmetrical or asymmetrical models or a tap step table lookup if those are available. Default: nullptr */
		CIMPP::AngleDegrees stepPhaseShiftIncrement;

		/** \brief The reactance depends on the tap position according to a `u` shaped curve. The maximum reactance (xMax) appears at the low and high tap positions. Depending on the `u` curve the attribute can be either higher or lower than PowerTransformerEnd.x. Default: nullptr */
		CIMPP::Reactance xMax;

		/** \brief The reactance depends on the tap position according to a `u` shaped curve. The minimum reactance (xMin) appears at the mid tap position.  PowerTransformerEnd.x shall be consistent with PhaseTapChangerLinear.xMin and PhaseTapChangerNonLinear.xMin. In case of inconsistency, PowerTransformerEnd.x shall be used. Default: nullptr */
		CIMPP::Reactance xMin;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* PhaseTapChangerLinear_factory();
}
#endif
