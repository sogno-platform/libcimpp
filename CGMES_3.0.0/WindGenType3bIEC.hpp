#ifndef WindGenType3bIEC_H
#define WindGenType3bIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindGenType3IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;

	/*
	IEC type 3B generator set model. Reference: IEC 61400-27-1:2015, 5.6.3.3.
	*/
	class WindGenType3bIEC : public WindGenType3IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType3bIEC();
		~WindGenType3bIEC() override;

		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;  /* The wind dynamics lookup table associated with this generator type 3B model. Default: 0 */
		CIMPP::Boolean mwtcwp;  /* Crowbar control mode (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;WTcwp&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. true = 1 in the IEC model false = 0 in the IEC model. Default: false */
		CIMPP::Seconds tg;  /* Current generation time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;g&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds two;  /* Time constant for crowbar washout filter (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;wo&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a case-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindGenType3bIEC_factory();
}
#endif
