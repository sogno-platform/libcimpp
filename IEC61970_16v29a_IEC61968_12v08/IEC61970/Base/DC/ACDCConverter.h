///////////////////////////////////////////////////////////
//  ACDCConverter.h
//  Implementation of the Class ACDCConverter
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ACDCCONVERTER_H
#define ACDCCONVERTER_H

#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/ActivePowerPerCurrentFlow.h"
#include "IEC61970/Base/Core/Terminal.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A unit with valves for three phases, together with unit control equipment,
			 * essential protective and switching devices, DC storage capacitors, phase
			 * reactors and auxiliaries, if any, used for conversion.
			 */
			class ACDCConverter : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				ACDCConverter();
				virtual ~ACDCConverter();
				/**
				 * Base apparent power of the converter pole.
				 */
				IEC61970::Base::Domain::ApparentPower baseS;
				/**
				 * Converter DC current, also called Id. Converter state variable, result from
				 * power flow.
				 */
				IEC61970::Base::Domain::CurrentFlow idc;
				/**
				 * Active power loss in pole at no power transfer. Converter configuration data
				 * used in power flow.
				 */
				IEC61970::Base::Domain::ActivePower idleLoss;
				/**
				 * The maximum voltage on the DC side at which the converter should operate.
				 * Converter configuration data used in power flow.
				 */
				IEC61970::Base::Domain::Voltage maxUdc;
				/**
				 * Min allowed converter DC voltage. Converter configuration data used in power
				 * flow.
				 */
				IEC61970::Base::Domain::Voltage minUdc;
				/**
				 * Number of valves in the converter. Used in loss calculations.
				 */
				IEC61970::Base::Domain::Integer numberOfValves;
				/**
				 * Active power at the point of common coupling. Load sign convention is used, i.e.
				 * positive sign means flow out from a node.
				 * Starting value for a steady state solution in the case a simplified power flow
				 * model is used.
				 */
				IEC61970::Base::Domain::ActivePower p;
				/**
				 * The active power loss at a DC Pole
				 * = idleLoss + switchingLoss*|Idc| + resitiveLoss*Idc^2
				 * For lossless operation Pdc=Pac
				 * For rectifier operation with losses Pdc=Pac-lossP
				 * For inverter operation with losses Pdc=Pac+lossP
				 * Converter state variable used in power flow.
				 */
				IEC61970::Base::Domain::ActivePower poleLossP;
				/**
				 * Reactive power at the point of common coupling. Load sign convention is used, i.
				 * e. positive sign means flow out from a node.
				 * Starting value for a steady state solution in the case a simplified power flow
				 * model is used.
				 */
				IEC61970::Base::Domain::ReactivePower q;
				/**
				 * Rated converter DC voltage, also called UdN. Converter configuration data used
				 * in power flow.
				 */
				IEC61970::Base::Domain::Voltage ratedUdc;
				/**
				 * Converter configuration data used in power flow. Refer to poleLossP.
				 */
				IEC61970::Base::Domain::Resistance resistiveLoss;
				/**
				 * Switching losses, relative to the base apparent power 'baseS'.
				 * Refer to poleLossP.
				 */
				IEC61970::Base::Domain::ActivePowerPerCurrentFlow switchingLoss;
				/**
				 * Real power injection target in AC grid, at point of common coupling.
				 */
				IEC61970::Base::Domain::ActivePower targetPpcc;
				/**
				 * Target value for DC voltage magnitude.
				 */
				IEC61970::Base::Domain::Voltage targetUdc;
				/**
				 * Line-to-line converter voltage, the voltage at the AC side of the valve.
				 * Converter state variable, result from power flow.
				 */
				IEC61970::Base::Domain::Voltage uc;
				/**
				 * Converter voltage at the DC side, also called Ud. Converter state variable,
				 * result from power flow.
				 */
				IEC61970::Base::Domain::Voltage udc;
				/**
				 * Valve threshold voltage, also called Uvalve. Forward voltage drop when the
				 * valve is conducting. Used in loss calculations, i.e. the switchLoss depends on
				 * numberOfValves * valveU0.
				 */
				IEC61970::Base::Domain::Voltage valveU0;
				/**
				 * Point of common coupling terminal for this converter DC side. It is typically
				 * the terminal on the power transformer (or switch) closest to the AC network.
				 * The power flow measurement must be the sum of all flows into the transformer.
				 */
				IEC61970::Base::Core::Terminal *PccTerminal;

			};

		}

	}

}
#endif // ACDCCONVERTER_H
