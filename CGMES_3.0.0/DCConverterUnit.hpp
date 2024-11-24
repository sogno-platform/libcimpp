#ifndef DCConverterUnit_H
#define DCConverterUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DCEquipmentContainer.hpp"
#include "BaseClassDefiner.hpp"
#include "DCConverterOperatingModeKind.hpp"

namespace CIMPP
{
	class Substation;

	/*
	Indivisible operative unit comprising all equipment between the point of common coupling on the AC side and the point of common coupling - DC side, essentially one or more converters, together with one or more converter transformers, converter control equipment, essential protective and switching devices and auxiliaries, if any, used for conversion.
	*/
	class DCConverterUnit : public DCEquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		DCConverterUnit();
		~DCConverterUnit() override;

		CIMPP::Substation* Substation;  /* The containing substation of the DC converter unit. Default: 0 */
		CIMPP::DCConverterOperatingModeKind operationMode;  /* The operating mode of an HVDC bipole (bipolar, monopolar metallic return, etc). Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCConverterUnit_factory();
}
#endif
