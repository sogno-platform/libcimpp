#ifndef ConductingEquipment_H
#define ConductingEquipment_H
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

namespace CIMPP
{
	class BaseVoltage;
	class SvStatus;
	class Terminal;

	/** \brief The parts of the AC power system that are designed to carry current or that are conductively connected through terminals. */
	class ConductingEquipment : public Equipment
	{
	public:
		/* constructor initialising all attributes to null */
		ConductingEquipment();
		~ConductingEquipment() override;

		/** \brief Base voltage of this conducting equipment.  Use only when there is no voltage level container used and only one base voltage applies.  For example, not used for transformers. Default: 0 */
		CIMPP::BaseVoltage* BaseVoltage;

		/** \brief The status state variable associated with this conducting equipment. Default: 0 */
		CIMPP::SvStatus* SvStatus;

		/** \brief Conducting equipment have terminals that may be connected to other conducting equipment terminals via connectivity nodes or topological nodes. Default: 0 */
		std::list<CIMPP::Terminal*> Terminals;

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

	BaseClass* ConductingEquipment_factory();
}
#endif
