#ifndef WindMechIEC_H
#define WindMechIEC_H
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
	class WindGenTurbineType3IEC;
	class WindTurbineType1or2IEC;
	class WindTurbineType4bIEC;

	/*
	Two mass model.  Reference: IEC Standard 61400-27-1 Section 6.6.2.1.
	*/
	class WindMechIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindMechIEC();
		~WindMechIEC() override;

		CIMPP::WindGenTurbineType3IEC* WindGenTurbineType3IEC;  /* Wind turbine Type 3 model with which this wind mechanical model is associated. Default: 0 */
		CIMPP::WindTurbineType1or2IEC* WindTurbineType1or2IEC;  /* Wind generator type 1 or 2 model with which this wind mechanical model is associated. Default: 0 */
		CIMPP::WindTurbineType4bIEC* WindTurbineType4bIEC;  /* Wind turbine type 4B model with which this wind mechanical model is associated. Default: 0 */
		CIMPP::PU cdrt;  /* Drive train damping (. It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds hgen;  /* Inertia constant of generator (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds hwtr;  /* Inertia constant of wind turbine rotor (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU kdrt;  /* Drive train stiffness (). It is type dependent parameter. Default: nullptr */

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

	BaseClass* WindMechIEC_factory();
}
#endif
