#ifndef WindContPType4bIEC_H
#define WindContPType4bIEC_H
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
	class WindTurbineType4bIEC;

	/*
	P control model type 4B. Reference: IEC 61400-27-1:2015, 5.6.5.6.
	*/
	class WindContPType4bIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContPType4bIEC();
		~WindContPType4bIEC() override;

		CIMPP::WindTurbineType4bIEC* WindTurbineType4bIEC;  /* Wind turbine type 4B model with which this wind control P type 4B model is associated. Default: 0 */
		CIMPP::PU dpmaxp4b;  /* Maximum wind turbine power ramp rate (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;maxp4B&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpaero;  /* Time constant in aerodynamic power response (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;paero&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpordp4b;  /* Time constant in power order lag (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pordp4B&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tufiltp4b;  /* Voltage measurement filter time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ufiltp4B&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindContPType4bIEC_factory();
}
#endif
