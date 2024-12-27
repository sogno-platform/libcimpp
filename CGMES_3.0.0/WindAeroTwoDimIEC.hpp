#ifndef WindAeroTwoDimIEC_H
#define WindAeroTwoDimIEC_H
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
#include "PU.hpp"

namespace CIMPP
{
	class WindTurbineType3IEC;

	/*
	Two-dimensional aerodynamic model.   Reference: IEC 61400-27-1:2015, 5.6.1.3.
	*/
	class WindAeroTwoDimIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindAeroTwoDimIEC();
		~WindAeroTwoDimIEC() override;

		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;  /* Wind turbine type 3 model with which this wind aerodynamic model is associated. Default: 0 */
		CIMPP::PU dpomega;  /* Partial derivative of aerodynamic power with respect to changes in WTR speed (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;omega&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dptheta;  /* Partial derivative of aerodynamic power with respect to changes in pitch angle (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;theta&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dpv1;  /* Partial derivative (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;v1&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU omegazero;  /* Rotor speed if the wind turbine is not derated (&lt;i&gt;omega&lt;/i&gt;&lt;i&gt;&lt;sub&gt;0&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU pavail;  /* Available aerodynamic power (&lt;i&gt;p&lt;/i&gt;&lt;i&gt;&lt;sub&gt;avail&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;)&lt;/i&gt;. It is a case-dependent parameter. Default: nullptr */
		CIMPP::AngleDegrees thetav2;  /* Blade angle at twice rated wind speed (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;v2&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::AngleDegrees thetazero;  /* Pitch angle if the wind turbine is not derated (&lt;i&gt;theta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;0&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. Default: nullptr */

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

	BaseClass* WindAeroTwoDimIEC_factory();
}
#endif
