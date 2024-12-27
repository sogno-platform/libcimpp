#ifndef WindGenTurbineType3IEC_H
#define WindGenTurbineType3IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindTurbineType3or4IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"

namespace CIMPP
{
	class WindAeroLinearIEC;
	class WindContPType3IEC;
	class WindContPitchAngleIEC;
	class WindMechIEC;

	/*
	Generator model for wind turbines of IEC type 3A and 3B.
	*/
	class WindGenTurbineType3IEC : public WindTurbineType3or4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType3IEC();
		~WindGenTurbineType3IEC() override;

		CIMPP::WindAeroLinearIEC* WindAeroLinearIEC;  /* Wind aerodynamic model associated with this wind generator type 3 model. Default: 0 */
		CIMPP::WindContPType3IEC* WindContPType3IEC;  /* Wind control P type 3 model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindContPitchAngleIEC* WindContPitchAngleIEC;  /* Wind control pitch angle model associated with this wind turbine type 3. Default: 0 */
		CIMPP::WindMechIEC* WindMechIEC;  /* Wind mechanical model associated with this wind turbine Type 3 model. Default: 0 */
		CIMPP::PU dipmax;  /* Maximum active current ramp rate (di). It is project dependent parameter. Default: nullptr */
		CIMPP::PU diqmax;  /* Maximum reactive current ramp rate (di). It is project dependent parameter. Default: nullptr */

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

	BaseClass* WindGenTurbineType3IEC_factory();
}
#endif
