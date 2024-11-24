#ifndef AsynchronousMachine_H
#define AsynchronousMachine_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "RotatingMachine.hpp"
#include "BaseClassDefiner.hpp"
#include "ActivePower.hpp"
#include "AsynchronousMachineKind.hpp"
#include "Boolean.hpp"
#include "Frequency.hpp"
#include "Integer.hpp"
#include "PerCent.hpp"
#include "RotationSpeed.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class AsynchronousMachineDynamics;

	/*
	A rotating machine whose shaft rotates asynchronously with the electrical field.  Also known as an induction machine with no external connection to the rotor windings, e.g squirrel-cage induction machine.
	*/
	class AsynchronousMachine : public RotatingMachine
	{
	public:
		/* constructor initialising all attributes to null */
		AsynchronousMachine();
		~AsynchronousMachine() override;

		CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics;  /* Asynchronous machine dynamics model used to describe dynamic behavior of this asynchronous machine. Default: 0 */
		CIMPP::AsynchronousMachineKind asynchronousMachineType;  /* Indicates the type of Asynchronous Machine (motor or generator). Default: 0 */
		CIMPP::Boolean converterFedDrive;  /* Indicates whether the machine is a converter fed drive. Used for short circuit data exchange according to IEC 60909 Default: false */
		CIMPP::PerCent efficiency;  /* Efficiency of the asynchronous machine at nominal operation in percent. Indicator for converter drive motors. Used for short circuit data exchange according to IEC 60909 Default: nullptr */
		CIMPP::Simple_Float iaIrRatio;  /* Ratio of locked-rotor current to the rated current of the motor (Ia/Ir). Used for short circuit data exchange according to IEC 60909 Default: nullptr */
		CIMPP::Frequency nominalFrequency;  /* Nameplate data indicates if the machine is 50 or 60 Hz. Default: nullptr */
		CIMPP::RotationSpeed nominalSpeed;  /* Nameplate data.  Depends on the slip and number of pole pairs. Default: nullptr */
		CIMPP::Integer polePairNumber;  /* Number of pole pairs of stator. Used for short circuit data exchange according to IEC 60909 Default: 0 */
		CIMPP::ActivePower ratedMechanicalPower;  /* Rated mechanical power (Pr in the IEC 60909-0). Used for short circuit data exchange according to IEC 60909. Default: nullptr */
		CIMPP::Boolean reversible;  /* Indicates for converter drive motors if the power can be reversible. Used for short circuit data exchange according to IEC 60909 Default: false */
		CIMPP::Simple_Float rxLockedRotorRatio;  /* Locked rotor ratio (R/X). Used for short circuit data exchange according to IEC 60909 Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AsynchronousMachine_factory();
}
#endif
