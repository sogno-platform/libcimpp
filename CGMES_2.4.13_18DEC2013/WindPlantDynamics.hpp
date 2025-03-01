#ifndef WindPlantDynamics_H
#define WindPlantDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class RemoteInputSignal;
	class WindTurbineType3or4Dynamics;

	/** \brief Parent class supporting relationships to wind turbines Type 3 and 4 and wind plant IEC and user defined wind plants including their control models. */
	class WindPlantDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		WindPlantDynamics();
		~WindPlantDynamics() override;

		/** \brief The wind plant using the remote signal. Default: 0 */
		CIMPP::RemoteInputSignal* RemoteInputSignal;

		/** \brief The wind turbine type 3 or 4 associated with this wind plant. Default: 0 */
		std::list<CIMPP::WindTurbineType3or4Dynamics*> WindTurbineType3or4Dynamics;

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

	BaseClass* WindPlantDynamics_factory();
}
#endif
