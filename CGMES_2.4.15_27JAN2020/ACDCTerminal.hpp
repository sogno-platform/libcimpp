#ifndef ACDCTerminal_H
#define ACDCTerminal_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"
#include "Boolean.hpp"

namespace CIMPP {


class BusNameMarker;
class OperationalLimitSet;
class Measurement;
	/*
	An electrical connection point (AC or DC) to a piece of conducting equipment. Terminals are connected at physical connection points called connectivity nodes.
	*/
	class ACDCTerminal: public IdentifiedObject
	{

	public:
					CIMPP::BusNameMarker* BusNameMarker; 	/* The bus name marker used to name the bus (topological node). Default: 0 */
					CIMPP::Integer sequenceNumber; 	/* The orientation of the terminal connections for a multiple terminal conducting equipment.  The sequence numbering starts with 1 and additional terminals should follow in increasing order.   The first terminal is the `starting point` for a two terminal branch. Default: 0 */
					std::list<CIMPP::OperationalLimitSet*> OperationalLimitSet; 	/*  Default: 0 */
					std::list<CIMPP::Measurement*> Measurements; 	/* Measurements associated with this terminal defining  where the measurement is placed in the network topology.  It may be used, for instance, to capture the sensor position, such as a voltage transformer (PT) at a busbar or a current transformer (CT) at the bar between a breaker and an isolator. Default: 0 */
					CIMPP::Boolean connected; 	/* The connected status is related to a bus-branch model and the topological node to terminal relation.  True implies the terminal is connected to the related topological node and false implies it is not.  In a bus-branch model, the connected status is used to tell if equipment is disconnected without having to change the connectivity described by the topological node to terminal relation. A valid case is that conducting equipment can be connected in one end and open in the other. In particular for an AC line segment, where the reactive line charging can be significant, this is a relevant case. Default: false */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ACDCTerminal();
		virtual ~ACDCTerminal();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ACDCTerminal_factory();
}
#endif
