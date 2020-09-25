#ifndef EquivalentShunt_H
#define EquivalentShunt_H

#include "EquivalentEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Susceptance.hpp"
#include "Conductance.hpp"

namespace CIMPP {


	/*
	The class represents equivalent shunts.
	*/
	class EquivalentShunt: public EquivalentEquipment
	{

	public:
					CIMPP::Susceptance b; 	/* Positive sequence shunt susceptance. Default: nullptr */
					CIMPP::Conductance g; 	/* Positive sequence shunt conductance. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		EquivalentShunt();
		virtual ~EquivalentShunt();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* EquivalentShunt_factory();
}
#endif
