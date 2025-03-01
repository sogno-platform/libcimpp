#ifndef PowerElectronicsUnit_H
#define PowerElectronicsUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "Equipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"

namespace CIMPP
{
	class PowerElectronicsConnection;

	/** \brief A generating unit or battery or aggregation that connects to the AC network using power electronics rather than rotating machines. */
	class PowerElectronicsUnit : public Equipment
	{
	public:
		/* constructor initialising all attributes to null */
		PowerElectronicsUnit();
		~PowerElectronicsUnit() override;

		/** \brief A power electronics unit has a connection to the AC network. Default: 0 */
		CIMPP::PowerElectronicsConnection* PowerElectronicsConnection;

		/** \brief Maximum active power limit. This is the maximum (nameplate) limit for the unit. Default: nullptr */
		CIMPP::ActivePower maxP;

		/** \brief Minimum active power limit. This is the minimum (nameplate) limit for the unit. Default: nullptr */
		CIMPP::ActivePower minP;

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

	BaseClass* PowerElectronicsUnit_factory();
}
#endif
