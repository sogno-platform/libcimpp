///////////////////////////////////////////////////////////
//  WindPlantReactiveControlIEC.h
//  Implementation of the Class WindPlantReactiveControlIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef WINDPLANTREACTIVECONTROLIEC_H
#define WINDPLANTREACTIVECONTROLIEC_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/WindDynamics/WindPlantQcontrolModeKind.h"
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
				 * Reference: IEC Standard 61400-27-1 Annex D.
				 */
				class WindPlantReactiveControlIEC : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					WindPlantReactiveControlIEC();
					virtual ~WindPlantReactiveControlIEC();
					/**
					 * Maximum positive ramp rate for wind turbine reactive power/voltage reference
					 * (<i>dx</i><sub>refmax</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU dxrefmax;
					/**
					 * Maximum negative ramp rate for wind turbine reactive power/voltage reference
					 * (<i>dx</i><sub>refmin</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU dxrefmin;
					/**
					 * Plant Q controller integral gain (<i>K</i><sub>IWPx</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Float kiwpx;
					/**
					 * Maximum reactive Power/voltage reference from integration
					 * (<i>K</i><sub>IWPxmax</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU kiwpxmax;
					/**
					 * Minimum reactive Power/voltage reference from integration
					 * (<i>K</i><sub>IWPxmin</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU kiwpxmin;
					/**
					 * Plant Q controller proportional gain (<i>K</i><sub>PWPx</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::Float kpwpx;
					/**
					 * Reactive power reference gain (<i>K</i><sub>WPqref</sub>). It is project
					 * dependent parameter.
					 */
					IEC61970::Base::Domain::PU kwpqref;
					/**
					 * Plant voltage control droop (<i>K</i><sub>WPqu</sub>). It is project dependent
					 * parameter.
					 */
					IEC61970::Base::Domain::PU kwpqu;
					/**
					 * Filter time constant for voltage dependent reactive power
					 * (<i>T</i><sub>uqfilt</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds tuqfilt;
					/**
					 * Filter time constant for active power measurement (<i>T</i><sub>WPpfiltq</sub>).
					 * It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds twppfiltq;
					/**
					 * Filter time constant for reactive power measurement
					 * (<i>T</i><sub>WPqfiltq</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds twpqfiltq;
					/**
					 * Filter time constant for voltage measurement (<i>T</i><sub>WPufiltq</sub>). It
					 * is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds twpufiltq;
					/**
					 * Lead time constant in reference value transfer function
					 * (<i>T</i><sub>xft</sub>). It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds txft;
					/**
					 * Lag time constant in reference value transfer function (<i>T</i><sub>xfv</sub>).
					 * It is project dependent parameter.
					 */
					IEC61970::Base::Domain::Seconds txfv;
					/**
					 * Voltage threshold for UVRT detection in q control (<i>u</i><sub>WPqdip</sub>).
					 * It is project dependent parameter.
					 */
					IEC61970::Base::Domain::PU uwpqdip;
					/**
					 * Reactive power/voltage controller mode (<i>M</i><sub>WPqmode</sub>). It is case
					 * dependent parameter.
					 */
					IEC61970::Dynamics::StandardModels::WindDynamics::WindPlantQcontrolModeKind windPlantQcontrolModesType;
					/**
					 * Maximum <i>x</i><sub>WTref</sub> (<i>q</i><sub>WTref</sub> or delta
					 * <i>u</i><sub>WTref</sub>) request from the plant controller
					 * (<i>x</i><sub>refmax</sub>). It is case dependent parameter.
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
