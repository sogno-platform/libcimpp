#ifndef TapChangerControl_H
#define TapChangerControl_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "RegulatingControl.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class TapChanger;

	/*
	Describes behavior specific to tap changers, e.g. how the voltage at the end of a line varies with the load level and compensation of the voltage drop by tap adjustment.
	*/
	class TapChangerControl : public RegulatingControl
	{
	public:
		/* constructor initialising all attributes to null */
		TapChangerControl();
		~TapChangerControl() override;

		std::list<CIMPP::TapChanger*> TapChanger;  /* The regulating control scheme in which this tap changer participates. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TapChangerControl_factory();
}
#endif
