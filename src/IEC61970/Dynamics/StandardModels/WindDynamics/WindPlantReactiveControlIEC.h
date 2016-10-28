///////////////////////////////////////////////////////////
//  WindPlantReactiveControlIEC.h
//  Implementation of the Class WindPlantReactiveControlIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDPLANTREACTIVECONTROLIEC_H
#define WINDPLANTREACTIVECONTROLIEC_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Simplified plant voltage and reactive power control model for use with type 3
				 * and type 4 wind turbine models.
				 * 
				 * Reference: IEC Standard 61400-27-1 Annex E.
				 */
				class WindPlantReactiveControlIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindPlantReactiveControlIEC();
					virtual ~WindPlantReactiveControlIEC();
					/**
					 * Plant Q controller integral gain (<i>K</i><sub>IWPx</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Float kiwpx;
					/**
					 * Plant Q controller proportional gain (<i>K</i><sub>PWPx</sub>). It is type
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Float kpwpx;
					/**
					 * Plant voltage control droop (<i>K</i><sub>WPqu</sub>). It is project dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU kwpqu;
					/**
					 * Power factor control modes selector (<i>M</i><sub>WPpf</sub>). Used only if
					 * mwpu is set to false.
					 * true = 1: power factor control
					 * false = 0: reactive power control.
					 * It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mwppf;
					/**
					 * Reactive power control modes selector (<i>M</i><sub>WPu</sub>).
					 * true = 1: voltage control
					 * false = 0: reactive power control.
					 * It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Boolean mwpu;
					/**
					 * Filter time constant for active power measurement (<i>T</i><sub>WPpfilt</sub>).
					 * It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds twppfilt;
					/**
					 * Filter time constant for reactive power measurement
					 * (<i>T</i><sub>WPqfilt</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds twpqfilt;
					/**
					 * Filter time constant for voltage measurement (<i>T</i><sub>WPufilt</sub>). It
					 * is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds twpufilt;
					/**
					 * Lead time constant in reference value transfer function
					 * (<i>T</i><sub>xft</sub>). It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds txft;
					/**
					 * Lag time constant in reference value transfer function (<i>T</i><sub>xfv</sub>).
					 * It is type dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds txfv;
					/**
					 * Voltage threshold for LVRT detection in q control (<i>u</i><sub>WPqdip</sub>).
					 * It is type dependent parameter.
					 */
					IEC61970::Base::Domain::PU uwpqdip;
					/**
					 * Maximum <i>x</i><sub>WTref</sub> (<i>q</i><sub>WTref</sub> or delta
					 * <i>u</i><sub>WTref</sub>) request from the plant controller
					 * (<i>x</i><sub>refmax</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU xrefmax;
					/**
					 * Minimum <i>x</i><sub>WTref</sub> (<i>q</i><sub>WTref</sub> or
					 * delta<i>u</i><sub>WTref</sub>) request from the plant controller
					 * (<i>x</i><sub>refmin</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU xrefmin;

				};

			}

		}

	}

}
#endif // WINDPLANTREACTIVECONTROLIEC_H
