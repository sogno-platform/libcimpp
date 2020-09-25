#ifndef DCNode_H
#define DCNode_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCBaseTerminal;
class DCTopologicalNode;
	/*
	DC nodes are points where terminals of DC conducting equipment are connected together with zero impedance.
	*/
	class DCNode: public IdentifiedObject
	{

	public:
					std::list<CIMPP::DCBaseTerminal*> DCTerminals; 	/*  Default: 0 */
					CIMPP::DCTopologicalNode* DCTopologicalNode; 	/* See association end TopologicalNode.ConnectivityNodes. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DCNode();
		virtual ~DCNode();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCNode_factory();
}
#endif
