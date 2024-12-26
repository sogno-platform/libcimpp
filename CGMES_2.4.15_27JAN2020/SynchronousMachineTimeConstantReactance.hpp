#ifndef SynchronousMachineTimeConstantReactance_H
#define SynchronousMachineTimeConstantReactance_H

#include "SynchronousMachineDetailed.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "SynchronousMachineModelKind.hpp"
#include "RotorKind.hpp"
#include "Seconds.hpp"
#include "PU.hpp"

namespace CIMPP {


	/*
	Synchronous machine detailed modelling types are defined by the combination of the attributes SynchronousMachineTimeConstantReactance.modelType and SynchronousMachineTimeConstantReactance.rotorType.     The parameters used for models expressed in time constant reactance form include:
	*/
	class SynchronousMachineTimeConstantReactance: public SynchronousMachineDetailed
	{

	public:
					CIMPP::Simple_Float ks; 	/* Saturation loading correction factor (Ks) (&gt;= 0).  Used only by Type J model.  Typical Value = 0. Default: nullptr */
					CIMPP::SynchronousMachineModelKind modelType; 	/* Type of synchronous machine model used in Dynamic simulation applications. Default: 0 */
					CIMPP::RotorKind rotorType; 	/* Type of rotor on physical machine. Default: 0 */
					CIMPP::Seconds tc; 	/* Damping time constant for `Canay` reactance.  Typical Value = 0. Default: nullptr */
					CIMPP::Seconds tpdo; 	/* Direct-axis transient rotor time constant (T`do) (&gt; T``do).  Typical Value = 5. Default: nullptr */
					CIMPP::Seconds tppdo; 	/* Direct-axis subtransient rotor time constant (T``do) (&gt; 0).  Typical Value = 0.03. Default: nullptr */
					CIMPP::Seconds tppqo; 	/* Quadrature-axis subtransient rotor time constant (T``qo) (&gt; 0). Typical Value = 0.03. Default: nullptr */
					CIMPP::Seconds tpqo; 	/* Quadrature-axis transient rotor time constant (T`qo) (&gt; T``qo). Typical Value = 0.5. Default: nullptr */
					CIMPP::PU xDirectSubtrans; 	/* Direct-axis subtransient reactance (unsaturated) (X``d) (&gt; Xl).  Typical Value = 0.2. Default: nullptr */
					CIMPP::PU xDirectSync; 	/* Direct-axis synchronous reactance (Xd) (&gt;= X`d). The quotient of a sustained value of that AC component of armature voltage that is produced by the total direct-axis flux due to direct-axis armature current and the value of the AC component of this current, the machine running at rated speed. Typical Value = 1.8. Default: nullptr */
					CIMPP::PU xDirectTrans; 	/* Direct-axis transient reactance (unsaturated) (X`d) (&gt; =X``d).  Typical Value = 0.5. Default: nullptr */
					CIMPP::PU xQuadSubtrans; 	/* Quadrature-axis subtransient reactance (X``q) (&gt; Xl).  Typical Value = 0.2. Default: nullptr */
					CIMPP::PU xQuadSync; 	/* Quadrature-axis synchronous reactance (Xq) (&gt; =X`q). The ratio of the component of reactive armature voltage, due to the quadrature-axis component of armature current, to this component of current, under steady state conditions and at rated frequency.  Typical Value = 1.6. Default: nullptr */
					CIMPP::PU xQuadTrans; 	/* Quadrature-axis transient reactance (X`q) (&gt; =X``q).  Typical Value = 0.3. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		SynchronousMachineTimeConstantReactance();
		virtual ~SynchronousMachineTimeConstantReactance();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SynchronousMachineTimeConstantReactance_factory();
}
#endif
