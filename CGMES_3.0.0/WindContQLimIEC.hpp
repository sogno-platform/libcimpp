#ifndef WindContQLimIEC_H
#define WindContQLimIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"

namespace CIMPP
{
	class WindTurbineType3or4IEC;

	/*
	Constant Q limitation model. Reference: IEC 61400-27-1:2015, 5.6.5.9.
	*/
	class WindContQLimIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContQLimIEC();
		~WindContQLimIEC() override;

		CIMPP::WindTurbineType3or4IEC* WindTurbineType3or4IEC;  /* Wind generator type 3 or type 4 model with which this constant Q limitation model is associated. Default: 0 */
		CIMPP::PU qmax;  /* Maximum reactive power (&lt;i&gt;q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; WindContQLimIEC.qmin). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU qmin;  /* Minimum reactive power (&lt;i&gt;q&lt;/i&gt;&lt;i&gt;&lt;sub&gt;min&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; WindContQLimIEC.qmax). It is a type-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindContQLimIEC_factory();
}
#endif
