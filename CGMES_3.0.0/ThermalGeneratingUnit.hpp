#ifndef ThermalGeneratingUnit_H
#define ThermalGeneratingUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "GeneratingUnit.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class CAESPlant;
	class CogenerationPlant;
	class CombinedCyclePlant;
	class FossilFuel;

	/** \brief A generating unit whose prime mover could be a steam turbine, combustion turbine, or diesel engine. */
	class ThermalGeneratingUnit : public GeneratingUnit
	{
	public:
		/* constructor initialising all attributes to null */
		ThermalGeneratingUnit();
		~ThermalGeneratingUnit() override;

		/** \brief A thermal generating unit may be a member of a compressed air energy storage plant. Default: 0 */
		CIMPP::CAESPlant* CAESPlant;

		/** \brief A thermal generating unit may be a member of a cogeneration plant. Default: 0 */
		CIMPP::CogenerationPlant* CogenerationPlant;

		/** \brief A thermal generating unit may be a member of a combined cycle plant. Default: 0 */
		CIMPP::CombinedCyclePlant* CombinedCyclePlant;

		/** \brief A thermal generating unit may have one or more fossil fuels. Default: 0 */
		std::list<CIMPP::FossilFuel*> FossilFuels;

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

	BaseClass* ThermalGeneratingUnit_factory();
}
#endif
