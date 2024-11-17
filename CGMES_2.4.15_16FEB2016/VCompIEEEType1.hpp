#ifndef VCompIEEEType1_H
#define VCompIEEEType1_H

#include "VoltageCompensatorDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP {


	/*
	Reference: IEEE Standard 421.5-2005 Section 4.
	*/
	class VCompIEEEType1: public VoltageCompensatorDynamics
	{

	public:
					CIMPP::PU rc; 	/*  Default: nullptr */
					CIMPP::Seconds tr; 	/*  Default: nullptr */
					CIMPP::PU xc; 	/*  Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		VCompIEEEType1();
		virtual ~VCompIEEEType1();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* VCompIEEEType1_factory();
}
#endif
