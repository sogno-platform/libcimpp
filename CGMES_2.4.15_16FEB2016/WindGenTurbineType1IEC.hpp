#ifndef WindGenTurbineType1IEC_H
#define WindGenTurbineType1IEC_H
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
	class WindAeroConstIEC;

	/** \brief Wind turbine IEC Type 1.  Reference: IEC Standard 61400-27-1, section 6.5.2. */
	class WindGenTurbineType1IEC : public WindTurbineType1or2IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindGenTurbineType1IEC();
		~WindGenTurbineType1IEC() override;

		/** \brief Wind aerodynamic model associated with this wind turbine type 1 model. Default: 0 */
		CIMPP::WindAeroConstIEC* WindAeroConstIEC;

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

	BaseClass* WindGenTurbineType1IEC_factory();
}
#endif
