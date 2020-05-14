#ifndef DCSeriesDevice_H
#define DCSeriesDevice_H

#include "DCConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Inductance.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP {


	/*
	A series device within the DC system, typically a reactor used for filtering or smoothing.  Needed for transient and short circuit studies.
	*/
	class DCSeriesDevice: public DCConductingEquipment
	{

	public:
					CIMPP::Inductance inductance; 	/* Inductance of the device. Default: nullptr */
					CIMPP::Resistance resistance; 	/* Resistance of the DC device. Default: nullptr */
					CIMPP::Voltage ratedUdc; 	/* Rated DC device voltage. Converter configuration data used in power flow. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DCSeriesDevice();
		virtual ~DCSeriesDevice();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCSeriesDevice_factory();
}
#endif
