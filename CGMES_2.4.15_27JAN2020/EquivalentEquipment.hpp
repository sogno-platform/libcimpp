#ifndef EquivalentEquipment_H
#define EquivalentEquipment_H

#include "ConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class EquivalentNetwork;
	/*
	The class represents equivalent objects that are the result of a network reduction. The class is the base for equivalent objects of different types.
	*/
	class EquivalentEquipment: public ConductingEquipment
	{

	public:
					CIMPP::EquivalentNetwork* EquivalentNetwork; 	/* The associated reduced equivalents. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		EquivalentEquipment();
		virtual ~EquivalentEquipment();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* EquivalentEquipment_factory();
}
#endif
