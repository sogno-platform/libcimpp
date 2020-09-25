#ifndef InductancePerLength_H
#define InductancePerLength_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"

namespace CIMPP {


class Float;
	/*
	Inductance per unit of length.
	*/
	class InductancePerLength: public BaseClass
	{

	public:
					CIMPP::Float* value; 	/*  Default: nullptr */
					CIMPP::UnitSymbol unit; 	/*  Default: 0 */
					CIMPP::UnitMultiplier multiplier; 	/*  Default: 0 */
					CIMPP::UnitSymbol denominatorUnit; 	/*  Default: 0 */
					CIMPP::UnitMultiplier denominatorMultiplier; 	/*  Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		InductancePerLength();
		virtual ~InductancePerLength();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* InductancePerLength_factory();
}
#endif
