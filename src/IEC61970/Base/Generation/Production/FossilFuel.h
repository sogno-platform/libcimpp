///////////////////////////////////////////////////////////
//  FossilFuel.h
//  Implementation of the Class FossilFuel
//  Created on:      28-Jan-2016 12:44:52
///////////////////////////////////////////////////////////

#if !defined(EA_3DDF53A3_DF8B_4ab1_8A09_6E31DF83B2A7__INCLUDED_)
#define EA_3DDF53A3_DF8B_4ab1_8A09_6E31DF83B2A7__INCLUDED_

#include <list>

#include "IEC61970/Base/Generation/Production/FuelType.h"
#include "IEC61970/Base/Generation/Production/CostPerHeatUnit.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Generation/Production/FuelAllocationSchedule.h"
#include "IEC61970/Base/Generation/Production/ThermalGeneratingUnit.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * The fossil fuel consumed by the non-nuclear thermal generating unit.   For
				 * example, coal, oil, gas, etc.   This a the specific fuels that the generating
				 * unit can consume.
				 */
				class FossilFuel : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					FossilFuel();
					virtual ~FossilFuel();
					/**
					 * The type of fossil fuel, such as coal, oil, or gas.
					 */
					IEC61970::Base::Generation::Production::FuelType fossilFuelType;
					/**
					 * The cost in terms of heat value for the given type of fuel.
					 */
					IEC61970::Base::Generation::Production::CostPerHeatUnit fuelCost;
					/**
					 * The cost of fuel used for economic dispatching which includes: fuel cost,
					 * transportation cost,  and incremental maintenance cost.
					 */
					IEC61970::Base::Generation::Production::CostPerHeatUnit fuelDispatchCost;
					/**
					 * The efficiency factor for the fuel (per unit) in terms of the effective energy
					 * absorbed.
					 */
					IEC61970::Base::Domain::PU fuelEffFactor;
					/**
					 * Handling and processing cost associated with this fuel.
					 */
					IEC61970::Base::Generation::Production::CostPerHeatUnit fuelHandlingCost;
					/**
					 * The amount of heat per weight (or volume) of the given type of fuel.
					 */
					IEC61970::Base::Domain::Float fuelHeatContent;
					/**
					 * Relative amount of the given type of fuel, when multiple fuels are being
					 * consumed.
					 */
					IEC61970::Base::Domain::PerCent fuelMixture;
					/**
					 * The fuel's fraction of pollution credit per unit of heat content.
					 */
					IEC61970::Base::Domain::PU fuelSulfur;
					/**
					 * The active power output level of the unit at which the given type of fuel is
					 * switched on. This fuel (e.g., oil) is sometimes used to supplement the base
					 * fuel (e.g., coal) at high active power output levels.
					 */
					IEC61970::Base::Domain::ActivePower highBreakpointP;
					/**
					 * The active power output level of the unit at which the given type of fuel is
					 * switched off. This fuel (e.g., oil) is sometimes used to stabilize the base
					 * fuel (e.g., coal) at low active power output levels.
					 */
					IEC61970::Base::Domain::ActivePower lowBreakpointP;
					/**
					 * A fuel allocation schedule must have a fossil fuel.
					 */
					std::list<IEC61970::Base::Generation::Production::FuelAllocationSchedule*> FuelAllocationSchedules;
					/**
					 * A thermal generating unit may have one or more fossil fuels.
					 */
					IEC61970::Base::Generation::Production::ThermalGeneratingUnit *ThermalGeneratingUnit;

				};

			}

		}

	}

}
#endif // !defined(EA_3DDF53A3_DF8B_4ab1_8A09_6E31DF83B2A7__INCLUDED_)
