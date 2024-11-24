#ifndef ConnectivityNodeContainer_H
#define ConnectivityNodeContainer_H

#include "PowerSystemResource.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class ConnectivityNode;
class TopologicalNode;
	/*
	A base class for all objects that may contain connectivity nodes or topological nodes.
	*/
	class ConnectivityNodeContainer: public PowerSystemResource
	{

	public:
					std::list<CIMPP::ConnectivityNode*> ConnectivityNodes; 	/* Connectivity nodes which belong to this connectivity node container. Default: 0 */
					std::list<CIMPP::TopologicalNode*> TopologicalNode; 	/* The topological nodes which belong to this connectivity node container. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ConnectivityNodeContainer();
		virtual ~ConnectivityNodeContainer();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ConnectivityNodeContainer_factory();
}
#endif
