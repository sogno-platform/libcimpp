#ifndef VoltageLimit_H
#define VoltageLimit_H

#include "OperationalLimit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Voltage.hpp"

namespace CIMPP {


	/*
	Operational limit applied to voltage.
	*/
	class VoltageLimit: public OperationalLimit
	{

	public:
					CIMPP::Voltage value; 	/* Limit on voltage. High or low limit nature of the limit depends upon the properties of the operational limit type. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		VoltageLimit();
		virtual ~VoltageLimit();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* VoltageLimit_factory();
}
#endif
