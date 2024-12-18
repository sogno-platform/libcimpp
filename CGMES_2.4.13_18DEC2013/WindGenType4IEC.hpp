#ifndef WindGenType4IEC_H
#define WindGenType4IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "WindTurbineType3or4IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IEC Type 4 generator set model.  Reference: IEC Standard 61400-27-1 Section 6.6.3.4.
	*/
	class WindGenType4IEC : public WindTurbineType3or4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType4IEC();
		~WindGenType4IEC() override;

		CIMPP::PU dipmax;  /* Maximum active current ramp rate (di). It is project dependent parameter. Default: nullptr */
		CIMPP::PU diqmax;  /* Maximum reactive current ramp rate (di). It is project dependent parameter. Default: nullptr */
		CIMPP::PU diqmin;  /* Minimum reactive current ramp rate (d). It is case dependent parameter. Default: nullptr */
		CIMPP::Seconds tg;  /* Time constant (T). It is type dependent parameter. Default: nullptr */

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
