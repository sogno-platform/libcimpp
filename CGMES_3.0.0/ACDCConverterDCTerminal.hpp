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

	/*
	A DC electrical connection point at the AC/DC converter. The AC/DC converter is electrically connected also to the AC side. The AC connection is inherited from the AC conducting equipment in the same way as any other AC equipment. The AC/DC converter DC terminal is separate from generic DC terminal to restrict the connection with the AC side to AC/DC converter and so that no other DC conducting equipment can be connected to the AC side.
	*/
	class ACDCConverterDCTerminal : public DCBaseTerminal
	{
	public:
		/* constructor initialising all attributes to null */
		ACDCConverterDCTerminal();
		~ACDCConverterDCTerminal() override;

		CIMPP::ACDCConverter* DCConductingEquipment;  /* A DC converter terminal belong to an DC converter. Default: 0 */
		CIMPP::DCPolarityKind polarity;  /* Represents the normal network polarity condition. Depending on the converter configuration the value shall be set as follows: - For a monopole with two converter terminals use DCPolarityKind `positive` and `negative`. - For a bi-pole or symmetric monopole with three converter terminals use DCPolarityKind `positive`, `middle` and `negative`. Default: 0 */

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
