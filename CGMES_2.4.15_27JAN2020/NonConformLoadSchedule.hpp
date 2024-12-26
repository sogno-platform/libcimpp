#ifndef NonConformLoadSchedule_H
#define NonConformLoadSchedule_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "SeasonDayTypeSchedule.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class NonConformLoadGroup;

	/*
	An active power (Y1-axis) and reactive power (Y2-axis) schedule (curves) versus time (X-axis) for non-conforming loads, e.g., large industrial load or power station service (where modeled).
	*/
	class NonConformLoadSchedule : public SeasonDayTypeSchedule
	{
	public:
		/* constructor initialising all attributes to null */
		NonConformLoadSchedule();
		~NonConformLoadSchedule() override;

		CIMPP::NonConformLoadGroup* NonConformLoadGroup;  /* The NonConformLoadGroup where the NonConformLoadSchedule belongs. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* NonConformLoadSchedule_factory();
}
#endif
