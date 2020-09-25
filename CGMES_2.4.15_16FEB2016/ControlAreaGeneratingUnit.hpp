#ifndef ControlAreaGeneratingUnit_H
#define ControlAreaGeneratingUnit_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class GeneratingUnit;
class ControlArea;
	/*
	A control area generating unit. This class is needed so that alternate control area definitions may include the same generating unit.   Note only one instance within a control area should reference a specific generating unit.
	*/
	class ControlAreaGeneratingUnit: public IdentifiedObject
	{

	public:
					CIMPP::GeneratingUnit* GeneratingUnit; 	/* The generating unit specified for this control area.  Note that a control area should include a GeneratingUnit only once. Default: 0 */
					CIMPP::ControlArea* ControlArea; 	/* The parent control area for the generating unit specifications. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ControlAreaGeneratingUnit();
		virtual ~ControlAreaGeneratingUnit();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ControlAreaGeneratingUnit_factory();
}
#endif
