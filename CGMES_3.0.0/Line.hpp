#ifndef Line_H
#define Line_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "EquipmentContainer.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class SubGeographicalRegion;

	/*
	Contains equipment beyond a substation belonging to a power transmission line.
	*/
	class Line : public EquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		Line();
		~Line() override;

		CIMPP::SubGeographicalRegion* Region;  /* The sub-geographical region of the line. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Line_factory();
}
#endif
