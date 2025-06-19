#ifndef WindTurbineType3IEC_H
#define WindTurbineType3IEC_H
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

namespace CIMPP
{
	class WindAeroOneDimIEC;
	class WindAeroTwoDimIEC;
	class WindContPType3IEC;
	class WindContPitchAngleIEC;
	class WindGenType3IEC;
	class WindMechIEC;

	/** \brief Parent class supporting relationships to IEC wind turbines type 3 including their control models. */
	class WindTurbineType3IEC : public WindTurbineType3or4IEC
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType3IEC();
		~WindTurbineType3IEC() override;

		/** \brief Wind aerodynamic model associated with this wind generator type 3 model. Default: 0 */
		CIMPP::WindAeroOneDimIEC* WindAeroOneDimIEC;

		/** \brief Wind aerodynamic model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindAeroTwoDimIEC* WindAeroTwoDimIEC;

		/** \brief Wind control P type 3 model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindContPType3IEC* WindContPType3IEC;

		/** \brief Wind control pitch angle model associated with this wind turbine type 3. Default: 0 */
		CIMPP::WindContPitchAngleIEC* WindContPitchAngleIEC;

		/** \brief Wind generator type 3 model associated with this wind turbine type 3 model. Default: 0 */
		CIMPP::WindGenType3IEC* WindGenType3IEC;

		/** \brief Wind mechanical model associated with this wind turbine type 3 model. Default: 0 */
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

	BaseClass* WindTurbineType3IEC_factory();
}
#endif
