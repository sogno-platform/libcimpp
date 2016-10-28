///////////////////////////////////////////////////////////
//  VCompIEEEType2.h
//  Implementation of the Class VCompIEEEType2
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef VCOMPIEEETYPE2_H
#define VCOMPIEEETYPE2_H

#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/VoltageCompensatorDynamics/VoltageCompensatorDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace VoltageCompensatorDynamics
			{
				/**
				 * <font color="#0f0f0f">The class represents the terminal voltage transducer and
				 * the load compensator as defined in the IEEE Std 421.5-2005, Section 4. This
				 * model is designed to cover the following types of compensation: </font>
				 * <ul>
				 * 	<li><font color="#0f0f0f">reactive droop</font></li>
				 * 	<li><font color="#0f0f0f">transformer-drop or line-drop
				 * compensation</font></li>
				 * 	<li><font color="#0f0f0f">reactive differential compensation known also as
				 * cross-current compensation.</font></li>
				 * </ul>
				 * <font color="#0f0f0f">
				 * </font><font color="#0f0f0f">Reference: IEEE Standard 421.5-2005, Section 4.
				 * </font>
				 */
				class VCompIEEEType2 : public IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VoltageCompensatorDynamics
				{

				public:
					VCompIEEEType2();
					virtual ~VCompIEEEType2();
					/**
					 * <font color="#0f0f0f">Time constant which is used for the combined voltage
					 * sensing and compensation signal (Tr).</font>
					 */
					IEC61970::Base::Domain::Seconds tr;

				};

			}

		}

	}

}
#endif // VCOMPIEEETYPE2_H
