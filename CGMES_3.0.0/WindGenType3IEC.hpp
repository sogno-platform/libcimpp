#ifndef WindGenType3IEC_H
#define WindGenType3IEC_H
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
	class WindTurbineType3IEC;

	/*
	Parent class supporting relationships to IEC wind turbines type 3 generator models of IEC type 3A and 3B.
	*/
	class WindGenType3IEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType3IEC();
		~WindGenType3IEC() override;

		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;  /* Wind turbine type 3 model with which this wind generator type 3 is associated. Default: 0 */
		CIMPP::PU dipmax;  /* Maximum active current ramp rate (&lt;i&gt;di&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pmax&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU diqmax;  /* Maximum reactive current ramp rate (&lt;i&gt;di&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qmax&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU xs;  /* Electromagnetic transient reactance (&lt;i&gt;x&lt;/i&gt;&lt;i&gt;&lt;sub&gt;S&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindGenType3IEC_factory();
}
#endif
