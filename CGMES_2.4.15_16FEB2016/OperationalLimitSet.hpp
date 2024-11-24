#ifndef OperationalLimitSet_H
#define OperationalLimitSet_H
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
	class ACDCTerminal;
	class Equipment;
	class OperationalLimit;

	/*
	A set of limits associated with equipment.  Sets of limits might apply to a specific temperature, or season for example. A set of limits may contain different severities of limit levels that would apply to the same equipment. The set may contain limits of different types such as apparent power and current limits or high and low voltage limits  that are logically applied together as a set.
	*/
	class OperationalLimitSet : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		OperationalLimitSet();
		~OperationalLimitSet() override;

		CIMPP::Equipment* Equipment;  /* The equipment to which the limit set applies. Default: 0 */
		std::list<CIMPP::OperationalLimit*> OperationalLimitValue;  /* The limit set to which the limit values belong. Default: 0 */
		CIMPP::ACDCTerminal* Terminal;  /*  Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* OperationalLimitSet_factory();
}
#endif
