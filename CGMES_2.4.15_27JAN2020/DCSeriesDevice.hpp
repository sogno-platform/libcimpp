#ifndef DCSeriesDevice_H
#define DCSeriesDevice_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DCConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "Inductance.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{

	/*
	A series device within the DC system, typically a reactor used for filtering or smoothing.  Needed for transient and short circuit studies.
	*/
	class DCSeriesDevice : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCSeriesDevice();
		~DCSeriesDevice() override;

		CIMPP::Inductance inductance;  /* Inductance of the device. Default: nullptr */
		CIMPP::Voltage ratedUdc;  /* Rated DC device voltage. Converter configuration data used in power flow. Default: nullptr */
		CIMPP::Resistance resistance;  /* Resistance of the DC device. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCSeriesDevice_factory();
}
#endif
