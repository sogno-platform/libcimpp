#ifndef VCompIEEEType2_H
#define VCompIEEEType2_H

#include "VoltageCompensatorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Seconds.hpp"

namespace CIMPP {


class GenICompensationForGenJ;
	/*
	
	*/
	class VCompIEEEType2: public VoltageCompensatorDynamics
	{

	public:
					CIMPP::Seconds tr; 	/*  Default: nullptr */
					CIMPP::GenICompensationForGenJ* GenICompensationForGenJ; 	/* Compensation of this voltage compensator`s generator for current flow out of another generator. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		VCompIEEEType2();
		virtual ~VCompIEEEType2();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* VCompIEEEType2_factory();
}
#endif
