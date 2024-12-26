#ifndef WindGenType4IEC_H
#define WindGenType4IEC_H
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
	class WindTurbineType4aIEC;
	class WindTurbineType4bIEC;

	/*
	IEC type 4 generator set model. Reference: IEC 61400-27-1:2015, 5.6.3.4.
	*/
	class WindGenType4IEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType4IEC();
		~WindGenType4IEC() override;

		CIMPP::WindTurbineType4aIEC* WindTurbineType4aIEC;  /* Wind turbine type 4A model with which this wind generator type 4 model is associated. Default: 0 */
		CIMPP::WindTurbineType4bIEC* WindTurbineType4bIEC;  /* Wind turbine type 4B model with which this wind generator type 4 model is associated. Default: 0 */
		CIMPP::PU dipmax;  /* Maximum active current ramp rate (&lt;i&gt;di&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pmax&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU diqmax;  /* Maximum reactive current ramp rate (&lt;i&gt;di&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qmax&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU diqmin;  /* Minimum reactive current ramp rate (&lt;i&gt;di&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qmin&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tg;  /* Time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;g&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindGenType4IEC_factory();
}
#endif
