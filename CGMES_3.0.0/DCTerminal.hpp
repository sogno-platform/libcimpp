#ifndef DCTerminal_H
#define DCTerminal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DCBaseTerminal.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class DCConductingEquipment;

	/*
	An electrical connection point to generic DC conducting equipment.
	*/
	class DCTerminal : public DCBaseTerminal
	{
	public:
		/* constructor initialising all attributes to null */
		DCTerminal();
		~DCTerminal() override;

		CIMPP::DCConductingEquipment* DCConductingEquipment;  /* An DC  terminal belong to a DC conducting equipment. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCTerminal_factory();
}
#endif
