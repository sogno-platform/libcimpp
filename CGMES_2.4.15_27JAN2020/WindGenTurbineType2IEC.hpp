#ifndef WindGenTurbineType2IEC_H
#define WindGenTurbineType2IEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindTurbineType1or2IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class WindContRotorRIEC;
	class WindPitchContEmulIEC;

	/*
	Wind turbine IEC Type 2.  Reference: IEC Standard 61400-27-1, section 6.5.3.
	*/
	class WindGenTurbineType2IEC : public WindTurbineType1or2IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType2IEC();
		~WindGenTurbineType2IEC() override;

		CIMPP::WindContRotorRIEC* WindContRotorRIEC;  /* Wind control rotor resistance model associated with wind turbine type 2 model. Default: 0 */
		CIMPP::WindPitchContEmulIEC* WindPitchContEmulIEC;  /* Pitch control emulator model associated with this wind turbine type 2 model. Default: 0 */

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

	BaseClass* WindGenTurbineType2IEC_factory();
}
#endif
