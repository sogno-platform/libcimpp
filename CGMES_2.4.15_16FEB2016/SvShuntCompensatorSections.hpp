#ifndef SvShuntCompensatorSections_H
#define SvShuntCompensatorSections_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"

namespace CIMPP {


class ShuntCompensator;
	/*
	State variable for the number of sections in service for a shunt compensator.
	*/
	class SvShuntCompensatorSections: public BaseClass
	{

	public:
					CIMPP::Simple_Float sections; 	/* The number of sections in service as a continous variable. To get integer value scale with ShuntCompensator.bPerSection. Default: nullptr */
					CIMPP::ShuntCompensator* ShuntCompensator; 	/* The shunt compensator for which the state applies. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		SvShuntCompensatorSections();
		virtual ~SvShuntCompensatorSections();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SvShuntCompensatorSections_factory();
}
#endif
