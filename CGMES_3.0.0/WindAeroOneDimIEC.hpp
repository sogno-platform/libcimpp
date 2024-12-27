#ifndef WindAeroOneDimIEC_H
#define WindAeroOneDimIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "AngleDegrees.hpp"
#include "Float.hpp"

namespace CIMPP
{
	class WindTurbineType3IEC;

	/*
	One-dimensional aerodynamic model.   Reference: IEC 61400-27-1:2015, 5.6.1.2.
	*/
	class WindAeroOneDimIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindAeroOneDimIEC();
		~WindAeroOneDimIEC() override;

		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;  /* Wind turbine type 3 model with which this wind aerodynamic model is associated. Default: 0 */
		CIMPP::Float ka;  /* Aerodynamic gain (&lt;i&gt;k&lt;/i&gt;&lt;i&gt;&lt;sub&gt;a&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::AngleDegrees thetaomega;  /* Initial pitch angle (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;omega0&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. Default: nullptr */

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

	BaseClass* WindAeroOneDimIEC_factory();
}
#endif
