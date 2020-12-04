///////////////////////////////////////////////////////////
//  WindContCurrLimIEC.h
//  Implementation of the Class WindContCurrLimIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDCONTCURRLIMIEC_H
#define WINDCONTCURRLIMIEC_H

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
				 * limits and the control limits.
				 * 
				 * Reference: IEC Standard 61400-27-1 Section 5.6.5.8.
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
					 * (<i>i</i><sub>maxdip</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU imaxdip;
					/**
					 * Partial derivative of reactive current limit (<i>K</i><sub>pqu</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::PU kpqu;
					/**
					 * Limitation of type 3 stator current  (<i>M</i><sub>DFSLim</sub>):
					 * - false=0: total current limitation,
					 * - true=1: stator current limitation).
					 * 
					 * It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mdfslim;
					/**
					 * Prioritisation of q control during UVRT (<i>M</i><sub>qpri</sub>):
					 * - true = 1: reactive power priority,
					 * - false = 0: active power priority.
					 * 
					 * It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mqpri;
					/**
					 * Voltage measurement filter time constant (<i>T</i><sub>ufiltcl</sub>). It is
					 * type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tufiltcl;
					/**
					 * Wind turbine voltage in the operation point where zero reactive current can be
					 * delivered (<i>u</i><sub>pqumax</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU upqumax;
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
#endif // WINDCONTCURRLIMIEC_H
