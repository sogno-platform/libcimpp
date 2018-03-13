///////////////////////////////////////////////////////////
//  EnergyConsumer.h
//  Implementation of the Class EnergyConsumer
///////////////////////////////////////////////////////////

#ifndef ENERGYCONSUMER_H
#define ENERGYCONSUMER_H

#include <list>

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Wires/PhaseShuntConnectionKind.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "Sinergien/Communication/communicationRequirement.h"
#include "Sinergien/Communication/Modems/ComMod.h"
#include "IEC61970/Base/LoadModel/LoadResponseCharacteristic.h"
#include "IEC61970/Base/Wires/EnergyConsumerPhase.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Generic user of energy - a  point of consumption on the power system model.
			 */
			class EnergyConsumer : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				EnergyConsumer();
				virtual ~EnergyConsumer();
				/**
				 * Number of individual customers represented by this demand.
				 */
				IEC61970::Base::Domain::Integer customerCount;
				/**
				 * Used for Yn and Zn connections. True if the neutral is solidly grounded.
				 */
				IEC61970::Base::Domain::Boolean grounded;
				/**
				 * Active power of the load. Load sign convention is used, i.e. positive sign
				 * means flow out from a node.
				 * For voltage dependent loads the value is at rated voltage.
				 * Starting value for a steady state solution.
				 */
				IEC61970::Base::Domain::ActivePower p;
				/**
				 * Active power of the load that is a fixed quantity. Load sign convention is used,
				 * i.e. positive sign means flow out from a node.
				 */
				IEC61970::Base::Domain::ActivePower pfixed;
				/**
				 * Fixed active power as per cent of load group fixed active power. Load sign
				 * convention is used, i.e. positive sign means flow out from a node.
				 */
				IEC61970::Base::Domain::PerCent pfixedPct;
				/**
				 * The type of phase connection, such as wye or delta.
				 */
				IEC61970::Base::Wires::PhaseShuntConnectionKind phaseConnection = IEC61970::Base::Wires::PhaseShuntConnectionKind::_undef;
				/**
				 * Reactive power of the load. Load sign convention is used, i.e. positive sign
				 * means flow out from a node.
				 * For voltage dependent loads the value is at rated voltage.
				 * Starting value for a steady state solution.
				 */
				IEC61970::Base::Domain::ReactivePower q;
				/**
				 * Reactive power of the load that is a fixed quantity. Load sign convention is
				 * used, i.e. positive sign means flow out from a node.
				 */
				IEC61970::Base::Domain::ReactivePower qfixed;
				/**
				 * Fixed reactive power as per cent of load group fixed reactive power. Load sign
				 * convention is used, i.e. positive sign means flow out from a node.
				 */
				IEC61970::Base::Domain::PerCent qfixedPct;
				Sinergien::Communication::communicationRequirement *m_communicationRequirement;
				std::list<Sinergien::Communication::Modems::ComMod*> m_ComMod;
				/**
				 * The load response characteristic of this load.  If missing, this load is
				 * assumed to be constant power.
				 */
				IEC61970::Base::LoadModel::LoadResponseCharacteristic *LoadResponse;
				/**
				 * The individual phase models for this energy consumer.
				 */
				std::list<IEC61970::Base::Wires::EnergyConsumerPhase*> EnergyConsumerPhase;

			};

		}

	}

}
#endif // ENERGYCONSUMER_H
