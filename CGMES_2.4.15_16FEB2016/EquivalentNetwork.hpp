#ifndef EquivalentNetwork_H
#define EquivalentNetwork_H

#include "ConnectivityNodeContainer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class EquivalentEquipment;
	/*
	A class that represents an external meshed network that has been reduced to an electrically equivalent model. The ConnectivityNodes contained in the equivalent are intended to reflect internal nodes of the equivalent. The boundary Connectivity nodes where the equivalent connects outside itself are NOT contained by the equivalent.
	*/
	class EquivalentNetwork: public ConnectivityNodeContainer
	{

	public:
					std::list<CIMPP::EquivalentEquipment*> EquivalentEquipments; 	/* The equivalent where the reduced model belongs. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		EquivalentNetwork();
		virtual ~EquivalentNetwork();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* EquivalentNetwork_factory();
}
#endif
