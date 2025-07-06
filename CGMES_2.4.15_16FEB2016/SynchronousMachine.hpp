#ifndef SynchronousMachine_H
#define SynchronousMachine_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "RotatingMachine.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "PerCent.hpp"
#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "ShortCircuitRotorKind.hpp"
#include "Simple_Float.hpp"
#include "SynchronousMachineKind.hpp"
#include "SynchronousMachineOperatingMode.hpp"

namespace CIMPP
{
	class ReactiveCapabilityCurve;
	class SynchronousMachineDynamics;

	/** \brief An electromechanical device that operates with shaft rotating synchronously with the network. It is a single machine operating either as a generator or synchronous condenser or pump. */
	class SynchronousMachine : public RotatingMachine
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachine();
		~SynchronousMachine() override;

		/** \brief Synchronous machines using this curve as default. Default: 0 */
		CIMPP::ReactiveCapabilityCurve* InitialReactiveCapabilityCurve;

		/** \brief Synchronous machine dynamics model used to describe dynamic behavior of this synchronous machine. Default: 0 */
		CIMPP::SynchronousMachineDynamics* SynchronousMachineDynamics;

		/** \brief Indicates whether or not the generator is earthed. Used for short circuit data exchange according to IEC 60909 Default: false */
		CIMPP::Boolean earthing;

		/** \brief Generator star point earthing resistance (Re). Used for short circuit data exchange according to IEC 60909 Default: nullptr */
		CIMPP::Resistance earthingStarPointR;

		/** \brief Generator star point earthing reactance (Xe). Used for short circuit data exchange according to IEC 60909 Default: nullptr */
		CIMPP::Reactance earthingStarPointX;

		/** \brief Steady-state short-circuit current (in A for the profile) of generator with compound excitation during 3-phase short circuit. - Ikk=0: Generator with no compound excitation. - Ikk?0: Generator with compound excitation. Ikk is used to calculate the minimum steady-state short-circuit current for generators with compound excitation (Section 4.6.1.2 in the IEC 60909-0) Used only for single fed short circuit on a generator. (Section 4.3.4.2. in the IEC 60909-0) Default: nullptr */
		CIMPP::CurrentFlow ikk;

		/** \brief Maximum reactive power limit. This is the maximum (nameplate) limit for the unit. Default: nullptr */
		CIMPP::ReactivePower maxQ;

		/** \brief Minimum reactive power limit for the unit. Default: nullptr */
		CIMPP::ReactivePower minQ;

		/** \brief Factor to calculate the breaking current (Section 4.5.2.1 in the IEC 60909-0). Used only for single fed short circuit on a generator (Section 4.3.4.2. in the IEC 60909-0). Default: nullptr */
		CIMPP::Simple_Float mu;

		/** \brief Current mode of operation. Default: 0 */
		CIMPP::SynchronousMachineOperatingMode operatingMode;

		/** \brief Percent of the coordinated reactive control that comes from this machine. Default: nullptr */
		CIMPP::PerCent qPercent;

		/** \brief Equivalent resistance (RG) of generator. RG is considered for the calculation of all currents, except for the calculation of the peak current ip. Used for short circuit data exchange according to IEC 60909 Default: nullptr */
		CIMPP::Resistance r;

		/** \brief Zero sequence resistance of the synchronous machine. Default: nullptr */
		CIMPP::PU r0;

		/** \brief Negative sequence resistance. Default: nullptr */
		CIMPP::PU r2;

		/** \brief Priority of unit for use as powerflow voltage phase angle reference bus selection. 0 = don t care (default) 1 = highest priority. 2 is less than 1 and so on. Default: 0 */
		CIMPP::Integer referencePriority;

		/** \brief Direct-axis subtransient reactance saturated, also known as Xd`sat. Default: nullptr */
		CIMPP::PU satDirectSubtransX;

		/** \brief Direct-axes saturated synchronous reactance (xdsat); reciprocal of short-circuit ration. Used for short circuit data exchange, only for single fed short circuit on a generator. (Section 4.3.4.2. in the IEC 60909-0). Default: nullptr */
		CIMPP::PU satDirectSyncX;

		/** \brief Saturated Direct-axis transient reactance. The attribute is primarily used for short circuit calculations according to ANSI. Default: nullptr */
		CIMPP::PU satDirectTransX;

		/** \brief Type of rotor, used by short circuit applications, only for single fed short circuit according to IEC 60909. Default: 0 */
		CIMPP::ShortCircuitRotorKind shortCircuitRotorType;

		/** \brief Modes that this synchronous machine can operate in. Default: 0 */
		CIMPP::SynchronousMachineKind type;

		/** \brief Range of generator voltage regulation (PG in the IEC 60909-0) used for calculation of the impedance correction factor KG defined in IEC 60909-0 This attribute is used to describe the operating voltage of the generating unit. Default: nullptr */
		CIMPP::PerCent voltageRegulationRange;

		/** \brief Zero sequence reactance of the synchronous machine. Default: nullptr */
		CIMPP::PU x0;

		/** \brief Negative sequence reactance. Default: nullptr */
		CIMPP::PU x2;

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

	BaseClass* SynchronousMachine_factory();
}
#endif
