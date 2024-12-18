#ifndef WindRefFrameRotIEC_H
#define WindRefFrameRotIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindTurbineType3or4IEC;

	/*
	Reference frame rotation model. Reference: IEC 61400-27-1:2015, 5.6.3.5.
	*/
	class WindRefFrameRotIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindRefFrameRotIEC();
		~WindRefFrameRotIEC() override;

		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;  /* Wind turbine type 3 or type 4 model with which this reference frame rotation model is associated. Default: 0 */
		CIMPP::Seconds tpll;  /* Time constant for PLL first order filter model (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PLL&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU upll1;  /* Voltage below which the angle of the voltage is filtered and possibly also frozen (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PLL1&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU upll2;  /* Voltage (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PLL2&lt;/sub&gt;&lt;/i&gt;) below which the angle of the voltage is frozen if &lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PLL2&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt; &lt;/sub&gt;is smaller or equal to &lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PLL1&lt;/sub&gt;&lt;/i&gt; . It is a type-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindRefFrameRotIEC_factory();
}
#endif
