#ifndef WindGenType3aIEC_H
#define WindGenType3aIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindGenType3IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Float.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindTurbineType4IEC;

	/*
	IEC type 3A generator set model. Reference: IEC 61400-27-1:2015, 5.6.3.2.
	*/
	class WindGenType3aIEC : public WindGenType3IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenType3aIEC();
		~WindGenType3aIEC() override;

		CIMPP::WindTurbineType4IEC* WindTurbineType4IEC;  /* Wind turbine type 4 model with which this wind generator type 3A model is associated. Default: 0 */
		CIMPP::Float kpc;  /* Current PI controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Pc&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Seconds tic;  /* Current PI controller integration time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Ic&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* WindGenType3aIEC_factory();
}
#endif
