#ifndef NonConformLoad_H
#define NonConformLoad_H

#include "EnergyConsumer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class NonConformLoadGroup;
	/*
	NonConformLoad represent loads that do not follow a daily load change pattern and changes are not correlated with the daily load change pattern.
	*/
	class NonConformLoad: public EnergyConsumer
	{

	public:
					CIMPP::NonConformLoadGroup* LoadGroup; 	/* Conform loads assigned to this ConformLoadGroup. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		NonConformLoad();
		virtual ~NonConformLoad();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* NonConformLoad_factory();
}
#endif
