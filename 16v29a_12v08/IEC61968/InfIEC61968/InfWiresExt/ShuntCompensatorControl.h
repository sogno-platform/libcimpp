///////////////////////////////////////////////////////////
//  ShuntCompensatorControl.h
//  Implementation of the Class ShuntCompensatorControl
///////////////////////////////////////////////////////////

#ifndef SHUNTCOMPENSATORCONTROL_H
#define SHUNTCOMPENSATORCONTROL_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/ShuntImpedanceControlKind.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/ShuntImpedanceLocalControlKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/InfIEC61968/InfAssetInfo/RegulationBranchKind.h"
#include "IEC61970/Base/Core/PhaseCode.h"
#include "IEC61970/Base/Domain/Hours.h"
#include "IEC61970/Base/Wires/RegulatingControl.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWiresExt
		{
			/**
			 * Distribution capacitor bank control settings.
			 */
			class ShuntCompensatorControl : public IEC61970::Base::Wires::RegulatingControl
			{

			public:
				ShuntCompensatorControl();
				virtual ~ShuntCompensatorControl();
				/**
				 * For VAR, amp, or power factor locally controlled shunt impedances, the flow
				 * direction: in, out.
				 */
				IEC61970::Base::Domain::Integer branchDirect;
				/**
				 * The size of the individual units that make up the bank.
				 */
				IEC61970::Base::Domain::ReactivePower cellSize;
				/**
				 * Kind of control (if any).
				 */
				IEC61968::InfIEC61968::InfAssetInfo::ShuntImpedanceControlKind controlKind;
				/**
				 * For locally controlled shunt impedances which have a voltage override feature,
				 * the high voltage override value. If the voltage is above this value, the shunt
				 * impedance will be turned off regardless of the other local controller settings.
				 */
				IEC61970::Base::Domain::PU highVoltageOverride;
				/**
				 * Kind of local controller.
				 */
				IEC61968::InfIEC61968::InfAssetInfo::ShuntImpedanceLocalControlKind localControlKind;
				/**
				 * Upper control setting.
				 */
				IEC61970::Base::Domain::String localOffLevel;
				/**
				 * Lower control setting.
				 */
				IEC61970::Base::Domain::String localOnLevel;
				/**
				 * True if the locally controlled capacitor has voltage override capability.
				 */
				IEC61970::Base::Domain::Boolean localOverride;
				/**
				 * For locally controlled shunt impedances which have a voltage override feature,
				 * the low voltage override value. If the voltage is below this value, the shunt
				 * impedance will be turned on regardless of the other local controller settings.
				 */
				IEC61970::Base::Domain::PU lowVoltageOverride;
				/**
				 * IdmsShuntImpedanceData.maxNumSwitchOps.
				 */
				IEC61970::Base::Domain::Integer maxSwitchOperationCount;
				/**
				 * True if open is normal status for a fixed capacitor bank, otherwise normal
				 * status is closed.
				 */
				IEC61970::Base::Domain::Boolean normalOpen;
				/**
				 * For VAR, amp, or power factor locally controlled shunt impedances, the index of
				 * the regulation branch.
				 */
				IEC61970::Base::Domain::String regBranch;
				/**
				 * For VAR, amp, or power factor locally controlled shunt impedances, the end of
				 * the branch that is regulated. The field has the following values: from side, to
				 * side, and tertiary (only if the branch is a transformer).
				 */
				IEC61970::Base::Domain::Integer regBranchEnd;
				/**
				 * (For VAR, amp, or power factor locally controlled shunt impedances) Kind of
				 * regulation branch.
				 */
				IEC61968::InfIEC61968::InfAssetInfo::RegulationBranchKind regBranchKind;
				/**
				 * Phases that are measured for controlling the device.
				 */
				IEC61970::Base::Core::PhaseCode sensingPhaseCode;
				/**
				 * Time interval between consecutive switching operations.
				 */
				IEC61970::Base::Domain::Hours switchOperationCycle;
				/**
				 * True if regulated voltages are measured line to line, otherwise they are
				 * measured line to ground.
				 */
				IEC61970::Base::Domain::Boolean vRegLineLine;

			};

		}

	}

}
#endif // SHUNTCOMPENSATORCONTROL_H
