#ifndef TapSchedule_H
#define TapSchedule_H
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
	class TapChanger;

	/*
	A pre-established pattern over time for a tap step.
	*/
	class TapSchedule : public SeasonDayTypeSchedule
	{
	public:
		/* constructor initialising all attributes to null */
		TapSchedule();
		~TapSchedule() override;

		CIMPP::TapChanger* TapChanger;  /* A TapSchedule is associated with a TapChanger. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TapSchedule_factory();
}
#endif
