#ifndef ACDCConverterDCTerminal_H
#define ACDCConverterDCTerminal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DCBaseTerminal.hpp"
#include "BaseClassDefiner.hpp"
#include "DCPolarityKind.hpp"

namespace CIMPP
{
	class ACDCConverter;

	class ACDCConverterDCTerminal : public DCBaseTerminal
	{
	public:
		/* constructor initialising all attributes to null */
		ACDCConverterDCTerminal();
		~ACDCConverterDCTerminal() override;

		CIMPP::ACDCConverter* DCConductingEquipment;  /*  Default: 0 */
		CIMPP::DCPolarityKind polarity;  /* Represents the normal network polarity condition. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ACDCConverterDCTerminal_factory();
}
#endif
