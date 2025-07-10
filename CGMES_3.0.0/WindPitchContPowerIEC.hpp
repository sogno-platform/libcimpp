#ifndef WindPitchContPowerIEC_H
#define WindPitchContPowerIEC_H
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

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindGenTurbineType1bIEC;
	class WindGenTurbineType2IEC;

	/** \brief Pitch control power model. Reference: IEC 61400-27-1:2015, 5.6.5.1. */
	class WindPitchContPowerIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPitchContPowerIEC();
		~WindPitchContPowerIEC() override;

		/** \brief The wind dynamics lookup table associated with this pitch control power model. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind turbine type 1B model with which this pitch control power model is associated. Default: 0 */
		CIMPP::WindGenTurbineType1bIEC* WindGenTurbineType1bIEC;

		/** \brief Wind turbine type 2 model with which this pitch control power model is associated. Default: 0 */
		CIMPP::WindGenTurbineType2IEC* WindGenTurbineType2IEC;

		/** \brief Rate limit for increasing power (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPitchContPowerIEC.dpmin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dpmax;

		/** \brief Rate limit for decreasing power (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPitchContPowerIEC.dpmax). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dpmin;

		/** \brief Minimum power setting (&lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU pmin;

		/** \brief If &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;init&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt; &lt;/sub&gt;&amp;lt; &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;set&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt; &lt;/sub&gt;then power will be ramped down to &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;. It is (&lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;set&lt;/sub&gt;&lt;/i&gt;) in the IEC 61400-27-1:2015. It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU pset;

		/** \brief Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Voltage measurement time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;r&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tr;

		/** \brief Dip detection threshold (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UVRT&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU uuvrt;

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

	BaseClass* WindPitchContPowerIEC_factory();
}
#endif
