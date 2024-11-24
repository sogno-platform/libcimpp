#ifndef AccumulatorReset_H
#define AccumulatorReset_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Control.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class AccumulatorValue;

	/*
	This command reset the counter value to zero.
	*/
	class AccumulatorReset : public Control
	{
	public:
		/* constructor initialising all attributes to null */
		AccumulatorReset();
		~AccumulatorReset() override;

		CIMPP::AccumulatorValue* AccumulatorValue;  /* The accumulator value that is reset by the command. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AccumulatorReset_factory();
}
#endif
