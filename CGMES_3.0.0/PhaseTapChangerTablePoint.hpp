#ifndef PhaseTapChangerTablePoint_H
#define PhaseTapChangerTablePoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TapChangerTablePoint.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"

namespace CIMPP
{
	class PhaseTapChangerTable;

	/*
	Describes each tap step in the phase tap changer tabular curve.
	*/
	class PhaseTapChangerTablePoint : public TapChangerTablePoint
	{
	public:
		/* constructor initialising all attributes to null */
		PhaseTapChangerTablePoint();
		~PhaseTapChangerTablePoint() override;

		CIMPP::PhaseTapChangerTable* PhaseTapChangerTable;  /* The table of this point. Default: 0 */
		CIMPP::AngleDegrees angle;  /* The angle difference in degrees. A positive value indicates a positive angle variation from the Terminal at the  PowerTransformerEnd,  where the TapChanger is located, into the transformer. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PhaseTapChangerTablePoint_factory();
}
#endif
