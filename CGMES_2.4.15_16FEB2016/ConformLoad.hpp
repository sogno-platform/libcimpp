#ifndef ConformLoad_H
#define ConformLoad_H

#include "EnergyConsumer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class ConformLoadGroup;
	/*
	ConformLoad represent loads that follow a daily load change pattern where the pattern can be used to scale the load with a system load.
	*/
	class ConformLoad: public EnergyConsumer
	{

	public:
					CIMPP::ConformLoadGroup* LoadGroup; 	/* Group of this ConformLoad. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ConformLoad();
		virtual ~ConformLoad();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ConformLoad_factory();
}
#endif
