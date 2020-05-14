#ifndef DCBaseTerminal_H
#define DCBaseTerminal_H

#include "ACDCTerminal.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCNode;
class DCTopologicalNode;
	/*
	An electrical connection point at a piece of DC conducting equipment. DC terminals are connected at one physical DC node that may have multiple DC terminals connected. A DC node is similar to an AC connectivity node. The model enforces that DC connections are distinct from AC connections.
	*/
	class DCBaseTerminal: public ACDCTerminal
	{

	public:
					CIMPP::DCNode* DCNode; 	/*  Default: 0 */
					CIMPP::DCTopologicalNode* DCTopologicalNode; 	/* See association end TopologicalNode.Terminal. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DCBaseTerminal();
		virtual ~DCBaseTerminal();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCBaseTerminal_factory();
}
#endif
