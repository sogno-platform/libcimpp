#ifndef SvStatus_H
#define SvStatus_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"

namespace CIMPP {


class ConductingEquipment;
	/*
	State variable for status.
	*/
	class SvStatus: public BaseClass
	{

	public:
					CIMPP::ConductingEquipment* ConductingEquipment; 	/* The conducting equipment associated with the status state variable. Default: 0 */
					CIMPP::Boolean inService; 	/* The in service status as a result of topology processing. Default: false */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		SvStatus();
		virtual ~SvStatus();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SvStatus_factory();
}
#endif
