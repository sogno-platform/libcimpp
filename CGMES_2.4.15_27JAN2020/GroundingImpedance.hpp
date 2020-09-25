#ifndef GroundingImpedance_H
#define GroundingImpedance_H

#include "EarthFaultCompensator.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Reactance.hpp"

namespace CIMPP {


	/*
	A fixed impedance device used for grounding.
	*/
	class GroundingImpedance: public EarthFaultCompensator
	{

	public:
					CIMPP::Reactance x; 	/* Reactance of device. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		GroundingImpedance();
		virtual ~GroundingImpedance();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* GroundingImpedance_factory();
}
#endif
