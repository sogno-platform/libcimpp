#ifndef PhaseTapChangerTable_H
#define PhaseTapChangerTable_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class PhaseTapChangerTablePoint;
	class PhaseTapChangerTabular;

	/*
	Describes a tabular curve for how the phase angle difference and impedance varies with the tap step.
	*/
	class PhaseTapChangerTable : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		PhaseTapChangerTable();
		~PhaseTapChangerTable() override;

		std::list<CIMPP::PhaseTapChangerTablePoint*> PhaseTapChangerTablePoint;  /* The points of this table. Default: 0 */
		std::list<CIMPP::PhaseTapChangerTabular*> PhaseTapChangerTabular;  /* The phase tap changers to which this phase tap table applies. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PhaseTapChangerTable_factory();
}
#endif
