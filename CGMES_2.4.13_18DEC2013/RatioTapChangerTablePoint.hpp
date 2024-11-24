#ifndef RatioTapChangerTablePoint_H
#define RatioTapChangerTablePoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TapChangerTablePoint.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class RatioTapChangerTable;

	/*
	Describes each tap step in the ratio tap changer tabular curve.
	*/
	class RatioTapChangerTablePoint : public TapChangerTablePoint
	{
	public:
		/* constructor initialising all attributes to null */
		RatioTapChangerTablePoint();
		~RatioTapChangerTablePoint() override;

		CIMPP::RatioTapChangerTable* RatioTapChangerTable;  /* Points of this table. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* RatioTapChangerTablePoint_factory();
}
#endif
