#ifndef DCShunt_H
#define DCShunt_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DCConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Capacitance.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{

	/** \brief A shunt device within the DC system, typically used for filtering.  Needed for transient and short circuit studies. */
	class DCShunt : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCShunt();
		~DCShunt() override;

		/** \brief Capacitance of the DC shunt. Default: nullptr */
		CIMPP::Capacitance capacitance;

		/** \brief Rated DC device voltage. Converter configuration data used in power flow. Default: nullptr */
		CIMPP::Voltage ratedUdc;

		/** \brief Resistance of the DC device. Default: nullptr */
		CIMPP::Resistance resistance;

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

	BaseClass* DCShunt_factory();
}
#endif
