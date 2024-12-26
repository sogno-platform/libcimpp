#ifndef ValueToAlias_H
#define ValueToAlias_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"

namespace CIMPP {


class ValueAliasSet;
	/*
	Describes the translation of one particular value into a name, e.g. 1 as "Open".
	*/
	class ValueToAlias: public IdentifiedObject
	{

	public:
					CIMPP::ValueAliasSet* ValueAliasSet; 	/* The ValueToAlias mappings included in the set. Default: 0 */
					CIMPP::Integer value; 	/* The value that is mapped. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ValueToAlias();
		virtual ~ValueToAlias();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ValueToAlias_factory();
}
#endif
