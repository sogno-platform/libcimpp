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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindGenTurbineType1bIEC;
	class WindGenTurbineType2IEC;

	/*
	Pitch control power model. Reference: IEC 61400-27-1:2015, 5.6.5.1.
	*/
	class WindPitchContPowerIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPitchContPowerIEC();
		~WindPitchContPowerIEC() override;

		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;  /* The wind dynamics lookup table associated with this pitch control power model. Default: 0 */
		CIMPP::WindGenTurbineType1bIEC* WindGenTurbineType1bIEC;  /* Wind turbine type 1B model with which this pitch control power model is associated. Default: 0 */
		CIMPP::WindGenTurbineType2IEC* WindGenTurbineType2IEC;  /* Wind turbine type 2 model with which this pitch control power model is associated. Default: 0 */
		CIMPP::PU dpmax;  /* Rate limit for increasing power (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPitchContPowerIEC.dpmin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dpmin;  /* Rate limit for decreasing power (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPitchContPowerIEC.dpmax). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum power setting (&lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU pset;  /* If &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;init&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt; &lt;/sub&gt;&amp;lt; &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;set&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt; &lt;/sub&gt;then power will be ramped down to &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;. It is (&lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;set&lt;/sub&gt;&lt;/i&gt;) in the IEC 61400-27-1:2015. It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds t1;  /* Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tr;  /* Voltage measurement time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;r&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU uuvrt;  /* Dip detection threshold (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;UVRT&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */

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

	BaseClass* WindPitchContPowerIEC_factory();
}
#endif
