#ifndef DCGround_H
#define DCGround_H

#include "DCConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Inductance.hpp"
#include "Resistance.hpp"

namespace CIMPP {


	/*
	A ground within a DC system.
	*/
	class DCGround: public DCConductingEquipment
	{

	public:
					CIMPP::Inductance inductance; 	/* Inductance to ground. Default: nullptr */
					CIMPP::Resistance r; 	/* Resistance to ground. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DCGround();
		virtual ~DCGround();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCGround_factory();
}
#endif
