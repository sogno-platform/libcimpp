#ifndef WindContPType4bIEC_H
#define WindContPType4bIEC_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindTurbineType4bIEC;

	/*
	P control model Type 4B.  Reference: IEC Standard 61400-27-1 Section 6.6.5.5.
	*/
	class WindContPType4bIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContPType4bIEC();
		~WindContPType4bIEC() override;

		CIMPP::WindTurbineType4bIEC* WindTurbineType4bIEC;  /* Wind turbine type 4B model with which this wind control P type 4B model is associated. Default: 0 */
		CIMPP::PU dpmax;  /* Maximum wind turbine power ramp rate (). It is project dependent parameter. Default: nullptr */
		CIMPP::Seconds tpaero;  /* Time constant in aerodynamic power response (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tpord;  /* Time constant in power order lag (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tufilt;  /* Voltage measurement filter time constant (). It is type dependent parameter. Default: nullptr */

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

	BaseClass* WindContPType4bIEC_factory();
}
#endif
