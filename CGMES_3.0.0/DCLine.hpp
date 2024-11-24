#ifndef DCLine_H
#define DCLine_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DCEquipmentContainer.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class SubGeographicalRegion;

	/*
	Overhead lines and/or cables connecting two or more HVDC substations.
	*/
	class DCLine : public DCEquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		DCLine();
		~DCLine() override;

		CIMPP::SubGeographicalRegion* Region;  /* The SubGeographicalRegion containing the DC line. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCLine_factory();
}
#endif
