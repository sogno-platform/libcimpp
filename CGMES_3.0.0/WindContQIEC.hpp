#ifndef WindContQIEC_H
#define WindContQIEC_H
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
#include "PU.hpp"
#include "Seconds.hpp"
#include "WindQcontrolModeKind.hpp"
#include "WindUVRTQcontrolModeKind.hpp"

namespace CIMPP
{
	class WindTurbineType3or4IEC;

	/** \brief Q control model. Reference: IEC 61400-27-1:2015, 5.6.5.7. */
	class WindContQIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContQIEC();
		~WindContQIEC() override;

		/** \brief Wind turbine type 3 or type 4 model with which this reactive control model is associated. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;

		/** \brief Maximum reactive current injection during dip (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qh1&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU iqh1;

		/** \brief Maximum reactive current injection (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindContQIEC.iqmin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU iqmax;

		/** \brief Minimum reactive current injection (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindContQIEC.iqmax). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU iqmin;

		/** \brief Post fault reactive current injection (&lt;i&gt;i&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qpost&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU iqpost;

		/** \brief Reactive power PI controller integration gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I,q&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kiq;

		/** \brief Voltage PI controller integration gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I,u&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kiu;

		/** \brief Reactive power PI controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;P,q&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kpq;

		/** \brief Voltage PI controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;P,u&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kpu;

		/** \brief Voltage scaling factor for UVRT current (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qv&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU kqv;

		/** \brief Resistive component of voltage drop impedance (&lt;i&gt;r&lt;/i&gt;&lt;i&gt;&lt;sub&gt;droop&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU rdroop;

		/** \brief Power measurement filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pfiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpfiltq;

		/** \brief Length of time period where post fault reactive power is injected (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;post&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpost;

		/** \brief Time constant in reactive power order lag (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qord&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tqord;

		/** \brief Voltage measurement filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ufiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tufiltq;

		/** \brief Voltage deadband lower limit (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;db1&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU udb1;

		/** \brief Voltage deadband upper limit (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;db2&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU udb2;

		/** \brief Maximum voltage in voltage PI controller integral term (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindContQIEC.umin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU umax;

		/** \brief Minimum voltage in voltage PI controller integral term (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindContQIEC.umax). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU umin;

		/** \brief Voltage threshold for UVRT detection in Q control (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qdip&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU uqdip;

		/** \brief User-defined bias in voltage reference (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ref0&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. Default: nullptr */
		CIMPP::PU uref0;

		/** \brief Types of general wind turbine Q control modes (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qG&lt;/sub&gt;&lt;/i&gt;).  It is a project-dependent parameter. Default: 0 */
		CIMPP::WindQcontrolModeKind windQcontrolModesType;

		/** \brief Types of UVRT Q control modes (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qUVRT&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: 0 */
		CIMPP::WindUVRTQcontrolModeKind windUVRTQcontrolModesType;

		/** \brief Inductive component of voltage drop impedance (&lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;droop&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU xdroop;

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

	BaseClass* WindContQIEC_factory();
}
#endif
