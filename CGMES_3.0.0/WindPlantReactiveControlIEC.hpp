#ifndef WindPlantReactiveControlIEC_H
#define WindPlantReactiveControlIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "WindPlantQcontrolModeKind.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindPlantIEC;

	/** \brief Simplified plant voltage and reactive power control model for use with type 3 and type 4 wind turbine models. Reference: IEC 61400-27-1:2015, Annex D. */
	class WindPlantReactiveControlIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantReactiveControlIEC();
		~WindPlantReactiveControlIEC() override;

		/** \brief The wind dynamics lookup table associated with this voltage and reactive power wind plant model. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind plant reactive control model associated with this wind plant. Default: 0 */
		CIMPP::WindPlantIEC* WindPlantIEC;

		/** \brief Maximum positive ramp rate for wind turbine reactive power/voltage reference (&lt;i&gt;dx&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantReactiveControlIEC.dxrefmin). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dxrefmax;

		/** \brief Maximum negative ramp rate for wind turbine reactive power/voltage reference (&lt;i&gt;dx&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantReactiveControlIEC.dxrefmax). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dxrefmin;

		/** \brief Plant Q controller integral gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IWPx&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Float kiwpx;

		/** \brief Maximum reactive power/voltage reference from integration (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IWPxmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantReactiveControlIEC.kiwpxmin). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU kiwpxmax;

		/** \brief Minimum reactive power/voltage reference from integration (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IWPxmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantReactiveControlIEC.kiwpxmax). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU kiwpxmin;

		/** \brief Plant Q controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PWPx&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::Float kpwpx;

		/** \brief Reactive power reference gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqref&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU kwpqref;

		/** \brief Plant voltage control droop (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqu&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU kwpqu;

		/** \brief Filter time constant for voltage-dependent reactive power (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;uqfilt&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tuqfilt;

		/** \brief Filter time constant for active power measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPpfiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds twppfiltq;

		/** \brief Filter time constant for reactive power measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqfiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds twpqfiltq;

		/** \brief Filter time constant for voltage measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPufiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds twpufiltq;

		/** \brief Lead time constant in reference value transfer function (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;xft&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds txft;

		/** \brief Lag time constant in reference value transfer function (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;xfv&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds txfv;

		/** \brief Voltage threshold for UVRT detection in Q control (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqdip&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU uwpqdip;

		/** \brief Reactive power/voltage controller mode (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqmode&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. Default: 0 */
		CIMPP::WindPlantQcontrolModeKind windPlantQcontrolModesType;

		/** \brief Maximum &lt;i&gt;x&lt;/i&gt;&lt;sub&gt;WTref&lt;/sub&gt; (&lt;i&gt;q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; or delta&lt;i&gt; u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt;) request from the plant controller (&lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantReactiveControlIEC.xrefmin). It is a case-dependent parameter. Default: nullptr */
		CIMPP::PU xrefmax;

		/** \brief Minimum &lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; or delta &lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt;) request from the plant controller (&lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantReactiveControlIEC.xrefmax). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU xrefmin;

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

	BaseClass* WindPlantReactiveControlIEC_factory();
}
#endif
