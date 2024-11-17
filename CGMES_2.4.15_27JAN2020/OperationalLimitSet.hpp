#ifndef OperationalLimitSet_H
#define OperationalLimitSet_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class Equipment;
class OperationalLimit;
class ACDCTerminal;
	/*
	A set of limits associated with equipment.  Sets of limits might apply to a specific temperature, or season for example. A set of limits may contain different severities of limit levels that would apply to the same equipment. The set may contain limits of different types such as apparent power and current limits or high and low voltage limits  that are logically applied together as a set.
	*/
	class OperationalLimitSet: public IdentifiedObject
	{

	public:
					CIMPP::Equipment* Equipment; 	/* The equipment to which the limit set applies. Default: 0 */
					std::list<CIMPP::OperationalLimit*> OperationalLimitValue; 	/* The limit set to which the limit values belong. Default: 0 */
					CIMPP::ACDCTerminal* Terminal; 	/*  Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		OperationalLimitSet();
		virtual ~OperationalLimitSet();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* OperationalLimitSet_factory();
}
#endif
