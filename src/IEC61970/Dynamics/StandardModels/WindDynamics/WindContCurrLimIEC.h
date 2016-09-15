///////////////////////////////////////////////////////////
//  WindContCurrLimIEC.h
//  Implementation of the Class WindContCurrLimIEC
//  Created on:      28-Jan-2016 12:47:46
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_26B058AB_B578_4c7f_9566_0609876DB434__INCLUDED_)
#define EA_26B058AB_B578_4c7f_9566_0609876DB434__INCLUDED_

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindTurbineType3or4IEC.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Current limitation model.  The current limitation model combines the physical
				 * limits.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 6.6.5.7.
				 */
				class WindContCurrLimIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindContCurrLimIEC();
					virtual ~WindContCurrLimIEC();
					/**
					 * Maximum continuous current at the wind turbine terminals
					 * (<i>i</i><sub>max</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU imax;
					/**
					 * Maximum current during voltage dip at the wind turbine terminals
					 * (<i>i</i><sub>max,dip</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU imaxdip;
					/**
					 * Limitation of type 3 stator current  (<i>M</i><sub>DFSLim</sub>):
					 * - false=0: total current limitation,
					 * - true=1: stator current limitation).
					 * 
					 * It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mdfslim;
					/**
					 * Prioritisation of q control during LVRT (<i>M</i><sub>qpri</sub>):
					 * - true = 1: reactive power priority,
					 * - false = 0: active power priority.
					 * 
					 * It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mqpri;
					/**
					 * Voltage measurement filter time constant (<i>T</i><sub>ufilt</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tufilt;
					/**
					 * Wind turbine type 3 or 4 model with which this wind control current limitation
					 * model is associated.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType3or4IEC *WindTurbineType3or4IEC;

				};

			}

		}

	}

}
#endif // !defined(EA_26B058AB_B578_4c7f_9566_0609876DB434__INCLUDED_)
