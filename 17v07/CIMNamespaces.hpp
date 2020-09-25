#ifndef CIM_NAMESPACE_HPP
#define CIM_NAMESPACE_HPP

#include "IEC61970/Base/Domain/UnitMultiplier.h"

namespace IEC61970 {
    class IEC61970CIMVersion;
    namespace Base {
        namespace Core {
            class BaseVoltage;
            class ConductingEquipment;
            class IdentifiedObject;
            class Terminal;
        }
        namespace Equivalents {
            class EquivalentShunt;
        }
        namespace Generation {
            namespace Production {
                class GeneratingUnit;
            }
        }
        namespace StateVariables {
            class SvVoltage;
            class SvPowerFlow;
            class SvTapStep;
        }
        namespace Topology {
            class TopologicalNode;
        }
        namespace Wires {
            class ACLineSegment;
            class PowerTransformer;
            class SynchronousMachine;
            class EnergyConsumer;
            class ExternalNetworkInjection;
            class PowerTransformerEnd;
        }
    }
    namespace Dynamics {
        namespace StandardModels {
            namespace SynchronousMachineDynamics {
                class SynchronousMachineTimeConstantReactance;
            }
        }
    }
}

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
