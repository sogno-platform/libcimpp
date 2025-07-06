#ifndef RegulatingControl_H
#define RegulatingControl_H
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
#include "RegulatingControlModeKind.hpp"
#include "Simple_Float.hpp"
#include "UnitMultiplier.hpp"

namespace CIMPP
{
	class RegulatingCondEq;
	class RegulationSchedule;
	class Terminal;

	/** \brief Specifies a set of equipment that works together to control a power system quantity such as voltage or flow.  Remote bus voltage control is possible by specifying the controlled terminal located at some place remote from the controlling equipment. In case multiple equipment, possibly of different types, control same terminal there must be only one RegulatingControl at that terminal. The most specific subtype of RegulatingControl shall be used in case such equipment participate in the control, e.g. TapChangerControl for tap changers. For flow control  load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment. */
	class RegulatingControl : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		RegulatingControl();
		~RegulatingControl() override;

		/** \brief The equipment that participates in this regulating control scheme. Default: 0 */
		std::list<CIMPP::RegulatingCondEq*> RegulatingCondEq;

		/** \brief Schedule for this Regulating regulating control. Default: 0 */
		std::list<CIMPP::RegulationSchedule*> RegulationSchedule;

		/** \brief The controls regulating this terminal. Default: 0 */
		CIMPP::Terminal* Terminal;

		/** \brief The regulation is performed in a discrete mode. This applies to equipment with discrete controls, e.g. tap changers and shunt compensators. Default: false */
		CIMPP::Boolean discrete;

		/** \brief The flag tells if regulation is enabled. Default: false */
		CIMPP::Boolean enabled;

		/** \brief The regulating control mode presently available.  This specification allows for determining the kind of regulation without need for obtaining the units from a schedule. Default: 0 */
		CIMPP::RegulatingControlModeKind mode;

		/** \brief This is a deadband used with discrete control to avoid excessive update of controls like tap changers and shunt compensator banks while regulating. The units of those appropriate for the mode. Default: nullptr */
		CIMPP::Simple_Float targetDeadband;

		/** \brief The target value specified for case input.   This value can be used for the target value without the use of schedules. The value has the units appropriate to the mode attribute. Default: nullptr */
		CIMPP::Simple_Float targetValue;

		/** \brief Specify the multiplier for used for the targetValue. Default: 0 */
		CIMPP::UnitMultiplier targetValueUnitMultiplier;

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

	BaseClass* RegulatingControl_factory();
}
#endif
