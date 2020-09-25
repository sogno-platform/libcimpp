#ifndef RegulatingCondEq_H
#define RegulatingCondEq_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"

namespace CIMPP {


class RegulatingControl;
	/*
	A type of conducting equipment that can regulate a quantity (i.e. voltage or flow) at a specific point in the network.
	*/
	class RegulatingCondEq: public ConductingEquipment
	{

	public:
					CIMPP::RegulatingControl* RegulatingControl; 	/* The regulating control scheme in which this equipment participates. Default: 0 */
					CIMPP::Boolean controlEnabled; 	/* Specifies the regulation status of the equipment.  True is regulating, false is not regulating. Default: false */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		RegulatingCondEq();
		virtual ~RegulatingCondEq();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RegulatingCondEq_factory();
}
#endif
