#ifndef SvVoltage_H
#define SvVoltage_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "AngleDegrees.hpp"
#include "Voltage.hpp"

namespace CIMPP {


class TopologicalNode;
	/*
	State variable for voltage.
	*/
	class SvVoltage: public BaseClass
	{

	public:
					CIMPP::AngleDegrees angle; 	/* The voltage angle of the topological node complex voltage with respect to system reference. Default: nullptr */
					CIMPP::Voltage v; 	/* The voltage magnitude of the topological node. Default: nullptr */
					CIMPP::TopologicalNode* TopologicalNode; 	/* The state voltage associated with the topological node. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		SvVoltage();
		virtual ~SvVoltage();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SvVoltage_factory();
}
#endif
