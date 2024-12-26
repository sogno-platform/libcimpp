#ifndef Status_H
#define Status_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "DateTime.hpp"
#include "String.hpp"

namespace CIMPP
{

	/*
	Current status information relevant to an entity.
	*/
	class Status : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		Status();
		~Status() override;

		CIMPP::DateTime dateTime;  /* Date and time for which status `value` applies. Default: '' */
		CIMPP::String reason;  /* Reason code or explanation for why an object went to the current status `value`. Default: '' */
		CIMPP::String remark;  /* Pertinent information regarding the current `value`, as free form text. Default: '' */
		CIMPP::String value;  /* Status value at `dateTime`; prior status changes may have been kept in instances of activity records associated with the object to which this status applies. Default: '' */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Status_factory();
}
#endif
