#ifndef ControlArea_H
#define ControlArea_H
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
#include "ActivePower.hpp"
#include "ControlAreaTypeKind.hpp"

namespace CIMPP
{
	class ControlAreaGeneratingUnit;
	class EnergyArea;
	class TieFlow;

	/** \brief A control area is a grouping of generating units and/or loads and a cutset of tie lines (as terminals) which may be used for a variety of purposes including automatic generation control, power flow solution area interchange control specification, and input to load forecasting. All generation and load within the area defined by the terminals on the border are considered in the area interchange control. Note that any number of overlapping control area specifications can be superimposed on the physical model. The following general principles apply to ControlArea: 1.  The control area orientation for net interchange is positive for an import, negative for an export. 2.  The control area net interchange is determined by summing flows in Terminals. The Terminals are identified by creating a set of TieFlow objects associated with a ControlArea object. Each TieFlow object identifies one Terminal. 3.  In a single network model, a tie between two control areas must be modelled in both control area specifications, such that the two representations of the tie flow sum to zero. 4.  The normal orientation of Terminal flow is positive for flow into the conducting equipment that owns the Terminal. (i.e. flow from a bus into a device is positive.) However, the orientation of each flow in the control area specification must align with the control area convention, i.e. import is positive. If the orientation of the Terminal flow referenced by a TieFlow is positive into the control area, then this is confirmed by setting TieFlow.positiveFlowIn flag TRUE. If not, the orientation must be reversed by setting the TieFlow.positiveFlowIn flag FALSE. */
	class ControlArea : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		ControlArea();
		~ControlArea() override;

		/** \brief The generating unit specifications for the control area. Default: 0 */
		std::list<CIMPP::ControlAreaGeneratingUnit*> ControlAreaGeneratingUnit;

		/** \brief The energy area that is forecast from this control area specification. Default: 0 */
		CIMPP::EnergyArea* EnergyArea;

		/** \brief The tie flows associated with the control area. Default: 0 */
		std::list<CIMPP::TieFlow*> TieFlow;

		/** \brief The specified positive net interchange into the control area, i.e. positive sign means flow into the area. Default: nullptr */
		CIMPP::ActivePower netInterchange;

		/** \brief Active power net interchange tolerance. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::ActivePower pTolerance;

		/** \brief The primary type of control area definition used to determine if this is used for automatic generation control, for planning interchange control, or other purposes.   A control area specified with primary type of automatic generation control could still be forecast and used as an interchange area in power flow analysis. Default: 0 */
		CIMPP::ControlAreaTypeKind type;

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

	BaseClass* ControlArea_factory();
}
#endif
