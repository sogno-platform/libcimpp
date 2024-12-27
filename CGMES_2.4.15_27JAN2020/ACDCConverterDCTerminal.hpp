#ifndef ACDCConverterDCTerminal_H
#define ACDCConverterDCTerminal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DCBaseTerminal.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "DCPolarityKind.hpp"

namespace CIMPP
{
	class ACDCConverter;

	/*
	A DC electrical connection point at the AC/DC converter. The AC/DC converter is electrically connected also to the AC side. The AC connection is inherited from the AC conducting equipment in the same way as any other AC equipment. The AC/DC converter DC terminal is separate from generic DC terminal to restrict the connection with the AC side to AC/DC converter and so that no other DC conducting equipment can be connected to the AC side.
	*/
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

	BaseClass* ACDCConverterDCTerminal_factory();
}
#endif
