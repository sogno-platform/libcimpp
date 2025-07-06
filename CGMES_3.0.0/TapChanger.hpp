#ifndef TapChanger_H
#define TapChanger_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "Float.hpp"
#include "Integer.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class SvTapStep;
	class TapChangerControl;
	class TapSchedule;

	/** \brief Mechanism for changing transformer winding tap positions. */
	class TapChanger : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		TapChanger();
		~TapChanger() override;

		/** \brief The tap step state associated with the tap changer. Default: 0 */
		CIMPP::SvTapStep* SvTapStep;

		/** \brief The regulating control scheme in which this tap changer participates. Default: 0 */
		CIMPP::TapChangerControl* TapChangerControl;

		/** \brief A TapChanger can have TapSchedules. Default: 0 */
		std::list<CIMPP::TapSchedule*> TapSchedules;

		/** \brief Specifies the regulation status of the equipment.  True is regulating, false is not regulating. Default: false */
		CIMPP::Boolean controlEnabled;

		/** \brief Highest possible tap step position, advance from neutral. The attribute shall be greater than lowStep. Default: 0 */
		CIMPP::Integer highStep;

		/** \brief Lowest possible tap step position, retard from neutral. Default: 0 */
		CIMPP::Integer lowStep;

		/** \brief Specifies whether or not a TapChanger has load tap changing capabilities. Default: false */
		CIMPP::Boolean ltcFlag;

		/** \brief The neutral tap step position for this winding. The attribute shall be equal to or greater than lowStep and equal or less than highStep. It is the step position where the voltage is neutralU when the other terminals of the transformer are at the ratedU.  If there are other tap changers on the transformer those taps are kept constant at their neutralStep. Default: 0 */
		CIMPP::Integer neutralStep;

		/** \brief Voltage at which the winding operates at the neutral tap setting. It is the voltage at the terminal of the PowerTransformerEnd associated with the tap changer when all tap changers on the transformer are at their neutralStep position.  Normally neutralU of the tap changer is the same as ratedU of the PowerTransformerEnd, but it can differ in special cases such as when the tapping mechanism is separate from the winding more common on lower voltage transformers. This attribute is not relevant for PhaseTapChangerAsymmetrical, PhaseTapChangerSymmetrical and PhaseTapChangerLinear. Default: nullptr */
		CIMPP::Voltage neutralU;

		/** \brief The tap step position used in `normal` network operation for this winding. For a `Fixed` tap changer indicates the current physical tap setting. The attribute shall be equal to or greater than lowStep and equal to or less than highStep. Default: 0 */
		CIMPP::Integer normalStep;

		/** \brief Tap changer position. Starting step for a steady state solution. Non integer values are allowed to support continuous tap variables. The reasons for continuous value are to support study cases where no discrete tap changer has yet been designed, a solution where a narrow voltage band forces the tap step to oscillate or to accommodate for a continuous solution as input. The attribute shall be equal to or greater than lowStep and equal to or less than highStep. Default: 0.0 */
		CIMPP::Float step;

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

	BaseClass* TapChanger_factory();
}
#endif
