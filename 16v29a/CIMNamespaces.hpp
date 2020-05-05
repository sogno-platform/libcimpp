#ifndef CIM_NAMESPACE_HPP
#define CIM_NAMESPACE_HPP

#include "IEC61970/IEC61970CIMVersion.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/StateVariables/SvVoltage.h"
#include "IEC61970/Base/StateVariables/SvPowerFlow.h"
#include "IEC61970/Base/Topology/TopologicalNode.h"
#include "IEC61970/Base/Wires/ACLineSegment.h"
#include "IEC61970/Base/Wires/PowerTransformer.h"
#include "IEC61970/Base/Wires/SynchronousMachine.h"
#include "IEC61970/Base/Wires/EnergyConsumer.h"
#include "IEC61970/Base/Wires/ExternalNetworkInjection.h"
#include "IEC61970/Base/Equivalents/EquivalentShunt.h"
#include "IEC61970/Base/Core/Terminal.h"
#include "IEC61970/Base/Core/BaseVoltage.h"
#include "IEC61970/Base/Wires/PowerTransformerEnd.h"
#include "IEC61970/Base/StateVariables/SvTapStep.h"
#include "IEC61970/Dynamics/StandardModels/SynchronousMachineDynamics/SynchronousMachineTimeConstantReactance.h"
#include "IEC61970/Base/Generation/Production/GeneratingUnit.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"


namespace CIMPP {
	using IEC61970::IEC61970CIMVersion;
	using IEC61970::Base::Core::BaseVoltage;
	using IEC61970::Base::Core::ConductingEquipment;
	using IEC61970::Base::Core::IdentifiedObject;
	using IEC61970::Base::Core::Terminal;
	using IEC61970::Base::Domain::UnitMultiplier;
	using IEC61970::Base::Equivalents::EquivalentShunt;
	using IEC61970::Base::Generation::Production::GeneratingUnit;
	using IEC61970::Base::StateVariables::SvVoltage;
	using IEC61970::Base::StateVariables::SvPowerFlow;
	using IEC61970::Base::StateVariables::SvTapStep;
	using IEC61970::Base::Topology::TopologicalNode;
	using IEC61970::Base::Wires::ACLineSegment;
	using IEC61970::Base::Wires::EnergyConsumer;
	using IEC61970::Base::Wires::ExternalNetworkInjection;
	using IEC61970::Base::Wires::PowerTransformer;
	using IEC61970::Base::Wires::PowerTransformerEnd;
	using IEC61970::Base::Wires::SynchronousMachine;
	using IEC61970::Dynamics::StandardModels::SynchronousMachineDynamics::SynchronousMachineTimeConstantReactance;
}

#endif
