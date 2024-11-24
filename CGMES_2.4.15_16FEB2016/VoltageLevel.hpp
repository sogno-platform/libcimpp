#ifndef VoltageLevel_H
#define VoltageLevel_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "EquipmentContainer.hpp"
#include "BaseClassDefiner.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class BaseVoltage;
	class Bay;
	class Substation;

	/*
	A collection of equipment at one common system voltage forming a switchgear. The equipment typically consist of breakers, busbars, instrumentation, control, regulation and protection devices as well as assemblies of all these.
	*/
	class VoltageLevel : public EquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		VoltageLevel();
		~VoltageLevel() override;

		CIMPP::BaseVoltage* BaseVoltage;  /* The base voltage used for all equipment within the voltage level. Default: 0 */
		std::list<CIMPP::Bay*> Bays;  /* The bays within this voltage level. Default: 0 */
		CIMPP::Substation* Substation;  /* The substation of the voltage level. Default: 0 */
		CIMPP::Voltage highVoltageLimit;  /* The bus bar`s high voltage limit Default: nullptr */
		CIMPP::Voltage lowVoltageLimit;  /* The bus bar`s low voltage limit Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* VoltageLevel_factory();
}
#endif
