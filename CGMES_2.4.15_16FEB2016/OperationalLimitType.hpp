#ifndef OperationalLimitType_H
#define OperationalLimitType_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Seconds.hpp"
#include "OperationalLimitDirectionKind.hpp"
#include "LimitTypeKind.hpp"

namespace CIMPP {


class OperationalLimit;
	/*
	The operational meaning of a category of limits.
	*/
	class OperationalLimitType: public IdentifiedObject
	{

	public:
					std::list<CIMPP::OperationalLimit*> OperationalLimit; 	/* The operational limits associated with this type of limit. Default: 0 */
					CIMPP::Seconds acceptableDuration; 	/* The nominal acceptable duration of the limit.  Limits are commonly expressed in terms of the a time limit for which the limit is normally acceptable.   The actual acceptable duration of a specific limit may depend on other local factors such as temperature or wind speed. Default: nullptr */
					CIMPP::OperationalLimitDirectionKind direction; 	/* The direction of the limit. Default: 0 */
					CIMPP::LimitTypeKind limitType; 	/* Types of limits defined in the ENTSO-E Operational Handbook Policy 3. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		OperationalLimitType();
		virtual ~OperationalLimitType();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* OperationalLimitType_factory();
}
#endif
