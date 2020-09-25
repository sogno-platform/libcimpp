#ifndef Terminal_H
#define Terminal_H

#include "ACDCTerminal.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PhaseCode.hpp"

namespace CIMPP {


class ConductingEquipment;
class RemoteInputSignal;
class ConnectivityNode;
class ACDCConverter;
class RegulatingControl;
class TieFlow;
class TransformerEnd;
class MutualCoupling;
class SvPowerFlow;
class TopologicalNode;
	/*
	An AC electrical connection point to a piece of conducting equipment. Terminals are connected at physical connection points called connectivity nodes.
	*/
	class Terminal: public ACDCTerminal
	{

	public:
					CIMPP::ConductingEquipment* ConductingEquipment; 	/* The conducting equipment of the terminal.  Conducting equipment have  terminals that may be connected to other conducting equipment terminals via connectivity nodes or topological nodes. Default: 0 */
					std::list<CIMPP::RemoteInputSignal*> RemoteInputSignal; 	/* Input signal coming from this terminal. Default: 0 */
					CIMPP::ConnectivityNode* ConnectivityNode; 	/* Terminals interconnected with zero impedance at a this connectivity node. Default: 0 */
					CIMPP::PhaseCode phases; 	/* Represents the normal network phasing condition. If the attribute is missing three phases (ABC or ABCN) shall be assumed. Default: 0 */
					std::list<CIMPP::ACDCConverter*> ConverterDCSides; 	/* Point of common coupling terminal for this converter DC side. It is typically the terminal on the power transformer (or switch) closest to the AC network. The power flow measurement must be the sum of all flows into the transformer. Default: 0 */
					CIMPP::RegulatingControl* RegulatingControl; 	/* The terminal associated with this regulating control.  The terminal is associated instead of a node, since the terminal could connect into either a topological node (bus in bus-branch model) or a connectivity node (detailed switch model).  Sometimes it is useful to model regulation at a terminal of a bus bar object since the bus bar can be present in both a bus-branch model or a model with switch detail. Default: 0 */
					CIMPP::TieFlow* TieFlow; 	/* The control area tie flows to which this terminal associates. Default: 0 */
					std::list<CIMPP::TransformerEnd*> TransformerEnd; 	/* All transformer ends connected at this terminal. Default: 0 */
					std::list<CIMPP::MutualCoupling*> HasFirstMutualCoupling; 	/* Mutual couplings associated with the branch as the first branch. Default: 0 */
					std::list<CIMPP::MutualCoupling*> HasSecondMutualCoupling; 	/* Mutual couplings with the branch associated as the first branch. Default: 0 */
					CIMPP::SvPowerFlow* SvPowerFlow; 	/* The power flow state variable associated with the terminal. Default: 0 */
					CIMPP::TopologicalNode* TopologicalNode; 	/* The terminals associated with the topological node.   This can be used as an alternative to the connectivity node path to terminal, thus making it unneccesary to model connectivity nodes in some cases.   Note that if connectivity nodes are in the model, this association would probably not be used as an input specification. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		Terminal();
		virtual ~Terminal();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Terminal_factory();
}
#endif
