#ifndef Terminal_H
#define Terminal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ACDCTerminal.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "PhaseCode.hpp"

namespace CIMPP
{
	class ACDCConverter;
	class ConductingEquipment;
	class ConnectivityNode;
	class MutualCoupling;
	class RegulatingControl;
	class RemoteInputSignal;
	class SvPowerFlow;
	class TieFlow;
	class TopologicalNode;
	class TransformerEnd;

	/** \brief An AC electrical connection point to a piece of conducting equipment. Terminals are connected at physical connection points called connectivity nodes. */
	class Terminal : public ACDCTerminal
	{
	public:
		/* constructor initialising all attributes to null */
		Terminal();
		~Terminal() override;

		/** \brief The conducting equipment of the terminal.  Conducting equipment have  terminals that may be connected to other conducting equipment terminals via connectivity nodes or topological nodes. Default: 0 */
		CIMPP::ConductingEquipment* ConductingEquipment;

		/** \brief Terminals interconnected with zero impedance at a this connectivity node. Default: 0 */
		CIMPP::ConnectivityNode* ConnectivityNode;

		/** \brief Point of common coupling terminal for this converter DC side. It is typically the terminal on the power transformer (or switch) closest to the AC network. The power flow measurement must be the sum of all flows into the transformer. Default: 0 */
		std::list<CIMPP::ACDCConverter*> ConverterDCSides;

		/** \brief Mutual couplings associated with the branch as the first branch. Default: 0 */
		std::list<CIMPP::MutualCoupling*> HasFirstMutualCoupling;

		/** \brief Mutual couplings with the branch associated as the first branch. Default: 0 */
		std::list<CIMPP::MutualCoupling*> HasSecondMutualCoupling;

		/** \brief The terminal associated with this regulating control.  The terminal is associated instead of a node, since the terminal could connect into either a topological node (bus in bus-branch model) or a connectivity node (detailed switch model).  Sometimes it is useful to model regulation at a terminal of a bus bar object since the bus bar can be present in both a bus-branch model or a model with switch detail. Default: 0 */
		CIMPP::RegulatingControl* RegulatingControl;

		/** \brief Input signal coming from this terminal. Default: 0 */
		std::list<CIMPP::RemoteInputSignal*> RemoteInputSignal;

		/** \brief The power flow state variable associated with the terminal. Default: 0 */
		CIMPP::SvPowerFlow* SvPowerFlow;

		/** \brief The control area tie flows to which this terminal associates. Default: 0 */
		std::list<CIMPP::TieFlow*> TieFlow;

		/** \brief The terminals associated with the topological node.   This can be used as an alternative to the connectivity node path to terminal, thus making it unneccesary to model connectivity nodes in some cases.   Note that if connectivity nodes are in the model, this association would probably not be used as an input specification. Default: 0 */
		CIMPP::TopologicalNode* TopologicalNode;

		/** \brief All transformer ends connected at this terminal. Default: 0 */
		std::list<CIMPP::TransformerEnd*> TransformerEnd;

		/** \brief Represents the normal network phasing condition. If the attribute is missing three phases (ABC or ABCN) shall be assumed. Default: 0 */
		CIMPP::PhaseCode phases;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* Terminal_factory();
}
#endif
