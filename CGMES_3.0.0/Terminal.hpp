#ifndef Terminal_H
#define Terminal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ACDCTerminal.hpp"
#include "BaseClassDefiner.hpp"
#include "PhaseCode.hpp"

namespace CIMPP
{
	class ACDCConverter;
	class AuxiliaryEquipment;
	class ConductingEquipment;
	class ConnectivityNode;
	class MutualCoupling;
	class RegulatingControl;
	class RemoteInputSignal;
	class SvPowerFlow;
	class TieFlow;
	class TopologicalNode;
	class TransformerEnd;

	/*
	An AC electrical connection point to a piece of conducting equipment. Terminals are connected at physical connection points called connectivity nodes.
	*/
	class Terminal : public ACDCTerminal
	{
	public:
		/* constructor initialising all attributes to null */
		Terminal();
		~Terminal() override;

		std::list<CIMPP::AuxiliaryEquipment*> AuxiliaryEquipment;  /* The auxiliary equipment connected to the terminal. Default: 0 */
		CIMPP::ConductingEquipment* ConductingEquipment;  /* The conducting equipment of the terminal.  Conducting equipment have  terminals that may be connected to other conducting equipment terminals via connectivity nodes or topological nodes. Default: 0 */
		CIMPP::ConnectivityNode* ConnectivityNode;  /* The connectivity node to which this terminal connects with zero impedance. Default: 0 */
		std::list<CIMPP::ACDCConverter*> ConverterDCSides;  /* All converters` DC sides linked to this point of common coupling terminal. Default: 0 */
		std::list<CIMPP::MutualCoupling*> HasFirstMutualCoupling;  /* Mutual couplings associated with the branch as the first branch. Default: 0 */
		std::list<CIMPP::MutualCoupling*> HasSecondMutualCoupling;  /* Mutual couplings with the branch associated as the first branch. Default: 0 */
		std::list<CIMPP::RegulatingControl*> RegulatingControl;  /* The controls regulating this terminal. Default: 0 */
		std::list<CIMPP::RemoteInputSignal*> RemoteInputSignal;  /* Input signal coming from this terminal. Default: 0 */
		CIMPP::SvPowerFlow* SvPowerFlow;  /* The power flow state variable associated with the terminal. Default: 0 */
		std::list<CIMPP::TieFlow*> TieFlow;  /* The control area tie flows to which this terminal associates. Default: 0 */
		CIMPP::TopologicalNode* TopologicalNode;  /* The topological node associated with the terminal.   This can be used as an alternative to the connectivity node path to topological node, thus making it unnecessary to model connectivity nodes in some cases.   Note that the if connectivity nodes are in the model, this association would probably not be used as an input specification. Default: 0 */
		std::list<CIMPP::TransformerEnd*> TransformerEnd;  /* All transformer ends connected at this terminal. Default: 0 */
		CIMPP::PhaseCode phases;  /* Represents the normal network phasing condition. If the attribute is missing, three phases (ABC) shall be assumed, except for terminals of grounding classes (specializations of EarthFaultCompensator, GroundDisconnector, and Ground) which will be assumed to be N. Therefore, phase code ABCN is explicitly declared when needed, e.g. for star point grounding equipment. The phase code on terminals connecting same ConnectivityNode or same TopologicalNode as well as for equipment between two terminals shall be consistent. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Terminal_factory();
}
#endif
