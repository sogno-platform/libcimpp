#ifndef WindContQPQULimIEC_H
#define WindContQPQULimIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindTurbineType3or4IEC;

	/*
	QP and QU limitation model. Reference: IEC 61400-27-1:2015, 5.6.5.10.
	*/
	class WindContQPQULimIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContQPQULimIEC();
		~WindContQPQULimIEC() override;

		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;  /* The wind dynamics lookup table associated with this QP and QU limitation model. Default: 0 */
		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;  /* Wind generator type 3 or type 4 model with which this QP and QU limitation model is associated. Default: 0 */
		CIMPP::Seconds tpfiltql;  /* Power measurement filter time constant for Q capacity (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pfiltql&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tufiltql;  /* Voltage measurement filter time constant for Q capacity (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ufiltql&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindContQPQULimIEC_factory();
}
#endif
