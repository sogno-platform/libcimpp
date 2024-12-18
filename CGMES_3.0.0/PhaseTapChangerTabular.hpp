#ifndef PhaseTapChangerTabular_H
#define PhaseTapChangerTabular_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PhaseTapChanger.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class PhaseTapChangerTable;

	/*
	Describes a tap changer with a table defining the relation between the tap step and the phase angle difference across the transformer.
	*/
	class PhaseTapChangerTabular : public PhaseTapChanger
	{
	public:
		/* constructor initialising all attributes to null */
		PhaseTapChangerTabular();
		~PhaseTapChangerTabular() override;

		CIMPP::PhaseTapChangerTable* PhaseTapChangerTable;  /* The phase tap changer table for this phase tap changer. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PhaseTapChangerTabular_factory();
}
#endif
