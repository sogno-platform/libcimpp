#ifndef WindTurbineType4bIEC_H
#define WindTurbineType4bIEC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "WindTurbineType4IEC.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class WindContPType4bIEC;
	class WindGenType4IEC;
	class WindMechIEC;

	/** \brief Wind turbine IEC type 4B. Reference: IEC 61400-27-1:2015, 5.5.5.3. */
	class WindTurbineType4bIEC : public WindTurbineType4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType4bIEC();
		~WindTurbineType4bIEC() override;

		/** \brief Wind control P type 4B model associated with this wind turbine type 4B model. Default: 0 */
		CIMPP::WindContPType4bIEC* WindContPType4bIEC;

		/** \brief Wind generator type 4 model associated with this wind turbine type 4B model. Default: 0 */
		CIMPP::WindGenType4IEC* WindGenType4IEC;

		/** \brief Wind mechanical model associated with this wind turbine type 4B model. Default: 0 */
		CIMPP::WindMechIEC* WindMechIEC;

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

	BaseClass* WindTurbineType4bIEC_factory();
}
#endif
