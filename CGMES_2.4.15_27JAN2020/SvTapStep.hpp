#ifndef SvTapStep_H
#define SvTapStep_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class TapChanger;

	/*
	State variable for transformer tap step.     This class is to be used for taps of LTC (load tap changing) transformers, not fixed tap transformers.
	*/
	class SvTapStep : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		SvTapStep();
		~SvTapStep() override;

		CIMPP::TapChanger* TapChanger;  /* The tap changer associated with the tap step state. Default: 0 */
		CIMPP::Simple_Float position;  /* The floating point tap position.   This is not the tap ratio, but rather the tap step position as defined by the related tap changer model and normally is constrained to be within the range of minimum and maximum tap positions. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SvTapStep_factory();
}
#endif
