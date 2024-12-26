#ifndef WindPlantReactiveControlIEC_H
#define WindPlantReactiveControlIEC_H
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
#include "WindPlantQcontrolModeKind.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindPlantIEC;

	/*
	Simplified plant voltage and reactive power control model for use with type 3 and type 4 wind turbine models. Reference: IEC 61400-27-1:2015, Annex D.
	*/
	class WindPlantReactiveControlIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantReactiveControlIEC();
		~WindPlantReactiveControlIEC() override;

		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;  /* The wind dynamics lookup table associated with this voltage and reactive power wind plant model. Default: 0 */
		CIMPP::WindPlantIEC* WindPlantIEC;  /* Wind plant reactive control model associated with this wind plant. Default: 0 */
		CIMPP::PU dxrefmax;  /* Maximum positive ramp rate for wind turbine reactive power/voltage reference (&lt;i&gt;dx&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantReactiveControlIEC.dxrefmin). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dxrefmin;  /* Maximum negative ramp rate for wind turbine reactive power/voltage reference (&lt;i&gt;dx&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantReactiveControlIEC.dxrefmax). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Float kiwpx;  /* Plant Q controller integral gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IWPx&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kiwpxmax;  /* Maximum reactive power/voltage reference from integration (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IWPxmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantReactiveControlIEC.kiwpxmin). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU kiwpxmin;  /* Minimum reactive power/voltage reference from integration (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IWPxmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantReactiveControlIEC.kiwpxmax). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Float kpwpx;  /* Plant Q controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PWPx&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: 0.0 */
		CIMPP::PU kwpqref;  /* Reactive power reference gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqref&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU kwpqu;  /* Plant voltage control droop (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqu&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tuqfilt;  /* Filter time constant for voltage-dependent reactive power (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;uqfilt&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds twppfiltq;  /* Filter time constant for active power measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPpfiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds twpqfiltq;  /* Filter time constant for reactive power measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqfiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds twpufiltq;  /* Filter time constant for voltage measurement (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPufiltq&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds txft;  /* Lead time constant in reference value transfer function (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;xft&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds txfv;  /* Lag time constant in reference value transfer function (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;xfv&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU uwpqdip;  /* Voltage threshold for UVRT detection in Q control (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqdip&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::WindPlantQcontrolModeKind windPlantQcontrolModesType;  /* Reactive power/voltage controller mode (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WPqmode&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. Default: 0 */
		CIMPP::PU xrefmax;  /* Maximum &lt;i&gt;x&lt;/i&gt;&lt;sub&gt;WTref&lt;/sub&gt; (&lt;i&gt;q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; or delta&lt;i&gt; u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt;) request from the plant controller (&lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindPlantReactiveControlIEC.xrefmin). It is a case-dependent parameter. Default: nullptr */
		CIMPP::PU xrefmin;  /* Minimum &lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; (&lt;i&gt;q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt; or delta &lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTref&lt;/sub&gt;&lt;/i&gt;) request from the plant controller (&lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindPlantReactiveControlIEC.xrefmax). It is a project-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindPlantReactiveControlIEC_factory();
}
#endif
