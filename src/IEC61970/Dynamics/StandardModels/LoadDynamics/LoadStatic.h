///////////////////////////////////////////////////////////
//  LoadStatic.h
//  Implementation of the Class LoadStatic
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef LOADSTATIC_H
#define LOADSTATIC_H

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Dynamics/StandardModels/LoadDynamics/StaticLoadModelKind.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Dynamics/StandardModels/LoadDynamics/LoadAggregate.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace LoadDynamics
			{
				/**
				 * General static load model representing the sensitivity of the real and reactive
				 * power consumed by the load to the amplitude and frequency of the bus voltage.
				 */
				class LoadStatic : public IEC61970::Base::Core::IdentifiedObject
				{

				public:
					LoadStatic();
					virtual ~LoadStatic();
					/**
					 * First term voltage exponent for active power (Ep1).  Used only when .
					 * staticLoadModelType = exponential.
					 */
					IEC61970::Base::Domain::Float ep1;
					/**
					 * Second term voltage exponent for active power (Ep2).  Used only when .
					 * staticLoadModelType = exponential.
					 */
					IEC61970::Base::Domain::Float ep2;
					/**
					 * Third term voltage exponent for active power (Ep3).  Used only when .
					 * staticLoadModelType = exponential.
					 */
					IEC61970::Base::Domain::Float ep3;
					/**
					 * First term voltage exponent for reactive power (Eq1).  Used only when .
					 * staticLoadModelType = exponential.
					 */
					IEC61970::Base::Domain::Float eq1;
					/**
					 * Second term voltage exponent for reactive power (Eq2).  Used only when .
					 * staticLoadModelType = exponential.
					 */
					IEC61970::Base::Domain::Float eq2;
					/**
					 * Third term voltage exponent for reactive power (Eq3).  Used only when .
					 * staticLoadModelType = exponential.
					 */
					IEC61970::Base::Domain::Float eq3;
					/**
					 * First term voltage coefficient for active power (Kp1).  Not used when .
					 * staticLoadModelType = constantZ.
					 */
					IEC61970::Base::Domain::Float kp1;
					/**
					 * Second term voltage coefficient for active power (Kp2).  Not used when .
					 * staticLoadModelType = constantZ.
					 */
					IEC61970::Base::Domain::Float kp2;
					/**
					 * Third term voltage coefficient for active power (Kp3).  Not used when .
					 * staticLoadModelType = constantZ.
					 */
					IEC61970::Base::Domain::Float kp3;
					/**
					 * Frequency coefficient for active power (Kp4).  Must be non-zero when .
					 * staticLoadModelType = ZIP2.  Not used for all other values of .
					 * staticLoadModelType.
					 */
					IEC61970::Base::Domain::Float kp4;
					/**
					 * Frequency deviation coefficient for active power (Kpf).  Not used when .
					 * staticLoadModelType = constantZ.
					 */
					IEC61970::Base::Domain::Float kpf;
					/**
					 * First term voltage coefficient for reactive power (Kq1).  Not used when .
					 * staticLoadModelType = constantZ.
					 */
					IEC61970::Base::Domain::Float kq1;
					/**
					 * Second term voltage coefficient for reactive power (Kq2).  Not used when .
					 * staticLoadModelType = constantZ.
					 */
					IEC61970::Base::Domain::Float kq2;
					/**
					 * Third term voltage coefficient for reactive power (Kq3).  Not used when .
					 * staticLoadModelType = constantZ.
					 */
					IEC61970::Base::Domain::Float kq3;
					/**
					 * Frequency coefficient for reactive power (Kq4).  Must be non-zero when .
					 * staticLoadModelType = ZIP2.  Not used for all other values of .
					 * staticLoadModelType.
					 */
					IEC61970::Base::Domain::Float kq4;
					/**
					 * Frequency deviation coefficient for reactive power (Kqf).  Not used when .
					 * staticLoadModelType = constantZ.
					 */
					IEC61970::Base::Domain::Float kqf;
					/**
					 * Type of static load model.  Typical Value = constantZ.
					 */
					IEC61970::Dynamics::StandardModels::LoadDynamics::StaticLoadModelKind staticLoadModelType;
					/**
					 * Aggregate load to which this aggregate static load belongs.
					 */
					IEC61970::Dynamics::StandardModels::LoadDynamics::LoadAggregate *LoadAggregate;

				};

			}

		}

	}

}
#endif // LOADSTATIC_H
