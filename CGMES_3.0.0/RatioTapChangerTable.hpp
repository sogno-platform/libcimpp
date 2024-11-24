#ifndef RatioTapChangerTable_H
#define RatioTapChangerTable_H
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
	class RatioTapChanger;
	class RatioTapChangerTablePoint;

	/*
	Describes a curve for how the voltage magnitude and impedance varies with the tap step.
	*/
	class RatioTapChangerTable : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		RatioTapChangerTable();
		~RatioTapChangerTable() override;

		std::list<CIMPP::RatioTapChanger*> RatioTapChanger;  /* The ratio tap changer of this tap ratio table. Default: 0 */
		std::list<CIMPP::RatioTapChangerTablePoint*> RatioTapChangerTablePoint;  /* Points of this table. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* RatioTapChangerTable_factory();
}
#endif
