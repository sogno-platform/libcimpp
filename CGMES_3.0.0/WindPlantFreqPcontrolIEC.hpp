#ifndef WindPlantFreqPcontrolIEC_H
#define WindPlantFreqPcontrolIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindPlantIEC;

	/*
	Frequency and active power controller model. Reference: IEC 61400-27-1:2015, Annex D.
	*/
	class WindPlantFreqPcontrolIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantFreqPcontrolIEC();
		~WindPlantFreqPcontrolIEC() override;

		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;  /* The wind dynamics lookup table associated with this frequency and active power wind plant model. Default: 0 */
		CIMPP::WindPlantIEC* WindPlantIEC;  /* Wind plant model with which this wind plant frequency and active power control is associated. Default: 0 */
		CIMPP::PU dprefmax;  /* Maximum ramp rate of &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; request from the plant controller to the wind turbines (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantFreqPcontrolIEC.dprefmin). It is a case-dependent parameter. Default: nullptr */
		CIMPP::PU dprefmin;  /* Minimum (negative) ramp rate of &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; request from the plant controller to the wind turbines (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantFreqPcontrolIEC.dprefmax). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dpwprefmax;  /* Maximum positive ramp rate for wind plant power reference (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPrefmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantFreqPcontrolIEC.dpwprefmin). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dpwprefmin;  /* Maximum negative ramp rate for wind plant power reference (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPrefmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantFreqPcontrolIEC.dpwprefmax). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Float kiwpp;  /* Plant P controller integral gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IWPp&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kiwppmax;  /* Maximum PI integrator term (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IWPpmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantFreqPcontrolIEC.kiwppmin). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU kiwppmin;  /* Minimum PI integrator term (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IWPpmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantFreqPcontrolIEC.kiwppmax). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Float kpwpp;  /* Plant P controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PWPp&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kwppref;  /* Power reference gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPpref&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU prefmax;  /* Maximum &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; request from the plant controller to the wind turbines (&lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantFreqPcontrolIEC.prefmin). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU prefmin;  /* Minimum &lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; request from the plant controller to the wind turbines (&lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantFreqPcontrolIEC.prefmax). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpft;  /* Lead time constant in reference value transfer function (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pft&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpfv;  /* Lag time constant in reference value transfer function (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pfv&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds twpffiltp;  /* Filter time constant for frequency measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPffiltp&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds twppfiltp;  /* Filter time constant for active power measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPpfiltp&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindPlantFreqPcontrolIEC_factory();
}
#endif
