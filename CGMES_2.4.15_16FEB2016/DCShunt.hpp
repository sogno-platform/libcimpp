#ifndef DCShunt_H
#define DCShunt_H

#include "DCConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Capacitance.hpp"
#include "Voltage.hpp"
#include "Resistance.hpp"

namespace CIMPP {


	/*
	A shunt device within the DC system, typically used for filtering.  Needed for transient and short circuit studies.
	*/
	class DCShunt: public DCConductingEquipment
	{

	public:
					CIMPP::Capacitance capacitance; 	/* Capacitance of the DC shunt. Default: nullptr */
					CIMPP::Voltage ratedUdc; 	/* Rated DC device voltage. Converter configuration data used in power flow. Default: nullptr */
					CIMPP::Resistance resistance; 	/* Resistance of the DC device. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DCShunt();
		virtual ~DCShunt();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCShunt_factory();
}
#endif
