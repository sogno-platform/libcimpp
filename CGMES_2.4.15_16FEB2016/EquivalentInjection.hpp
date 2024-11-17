#ifndef EquivalentInjection_H
#define EquivalentInjection_H

#include "EquivalentEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Boolean.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"

namespace CIMPP {


class ReactiveCapabilityCurve;
	/*
	This class represents equivalent injections (generation or load).  Voltage regulation is allowed only at the point of connection.
	*/
	class EquivalentInjection: public EquivalentEquipment
	{

	public:
					CIMPP::ReactiveCapabilityCurve* ReactiveCapabilityCurve; 	/* The equivalent injection using this reactive capability curve. Default: 0 */
					CIMPP::ActivePower maxP; 	/* Maximum active power of the injection. Default: nullptr */
					CIMPP::ReactivePower maxQ; 	/* Used for modeling of infeed for load flow exchange. Not used for short circuit modeling.  If maxQ and minQ are not used ReactiveCapabilityCurve can be used. Default: nullptr */
					CIMPP::ActivePower minP; 	/* Minimum active power of the injection. Default: nullptr */
					CIMPP::ReactivePower minQ; 	/* Used for modeling of infeed for load flow exchange. Not used for short circuit modeling.  If maxQ and minQ are not used ReactiveCapabilityCurve can be used. Default: nullptr */
					CIMPP::ActivePower p; 	/* Equivalent active power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
					CIMPP::ReactivePower q; 	/* Equivalent reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
					CIMPP::Resistance r; 	/* Positive sequence resistance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
					CIMPP::Resistance r0; 	/* Zero sequence resistance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
					CIMPP::Resistance r2; 	/* Negative sequence resistance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
					CIMPP::Boolean regulationCapability; 	/* Specifies whether or not the EquivalentInjection has the capability to regulate the local voltage. Default: false */
					CIMPP::Boolean regulationStatus; 	/* Specifies the default regulation status of the EquivalentInjection.  True is regulating.  False is not regulating. Default: false */
					CIMPP::Voltage regulationTarget; 	/* The target voltage for voltage regulation. Default: nullptr */
					CIMPP::Reactance x; 	/* Positive sequence reactance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
					CIMPP::Reactance x0; 	/* Zero sequence reactance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
					CIMPP::Reactance x2; 	/* Negative sequence reactance. Used to represent Extended-Ward (IEC 60909). Usage : Extended-Ward is a result of network reduction prior to the data exchange. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		EquivalentInjection();
		virtual ~EquivalentInjection();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* EquivalentInjection_factory();
}
#endif
