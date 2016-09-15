///////////////////////////////////////////////////////////
//  ReactiveCapabilityCurve.h
//  Implementation of the Class ReactiveCapabilityCurve
//  Created on:      28-Jan-2016 12:46:26
///////////////////////////////////////////////////////////

#if !defined(EA_DD8549AB_C533_45b3_B192_B97210D31A69__INCLUDED_)
#define EA_DD8549AB_C533_45b3_B192_B97210D31A69__INCLUDED_

#include <list>

#include "IEC61970/Base/Domain/Temperature.h"
#include "IEC61970/Base/Domain/Pressure.h"
#include "IEC61970/Base/Equivalents/EquivalentInjection.h"
#include "IEC61970/Base/Wires/SynchronousMachine.h"
#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Reactive power rating envelope versus the synchronous machine's active power,
			 * in both the generating and motoring modes. For each active power value there is
			 * a corresponding high and low reactive power limit  value. Typically there will
			 * be a separate curve for each coolant condition, such as hydrogen pressure.  The
			 * Y1 axis values represent reactive minimum and the Y2 axis values represent
			 * reactive maximum.
			 */
			class ReactiveCapabilityCurve : public IEC61970::Base::Core::Curve
			{

			public:
				ReactiveCapabilityCurve();
				virtual ~ReactiveCapabilityCurve();
				/**
				 * The machine's coolant temperature (e.g., ambient air or stator circulating
				 * water).
				 */
				IEC61970::Base::Domain::Temperature coolantTemperature;
				/**
				 * The hydrogen coolant pressure
				 */
				IEC61970::Base::Domain::Pressure hydrogenPressure;
				/**
				 * The equivalent injection using this reactive capability curve.
				 */
				std::list<IEC61970::Base::Equivalents::EquivalentInjection*> EquivalentInjection;
				/**
				 * Synchronous machines using this curve as default.
				 */
				std::list<IEC61970::Base::Wires::SynchronousMachine*> InitiallyUsedBySynchronousMachines;
				/**
				 * Synchronous machines using this curve.
				 */
				std::list<IEC61970::Base::Wires::SynchronousMachine*> SynchronousMachines;

			};

		}

	}

}
#endif // !defined(EA_DD8549AB_C533_45b3_B192_B97210D31A69__INCLUDED_)
