///////////////////////////////////////////////////////////
//  MutualCoupling.h
//  Implementation of the Class MutualCoupling
//  Created on:      28-Jan-2016 12:45:45
///////////////////////////////////////////////////////////

#if !defined(EA_9304C0F3_42E0_4acf_9CA7_EBA43847F596__INCLUDED_)
#define EA_9304C0F3_42E0_4acf_9CA7_EBA43847F596__INCLUDED_

#include "IEC61970/Base/Domain/Susceptance.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Domain/Conductance.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Core/Terminal.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * This class represents the zero sequence line mutual coupling.
			 */
			class MutualCoupling : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				MutualCoupling();
				virtual ~MutualCoupling();
				/**
				 * Zero sequence mutual coupling shunt (charging) susceptance, uniformly
				 * distributed, of the entire line section.
				 */
				IEC61970::Base::Domain::Susceptance b0ch;
				/**
				 * Distance to the start of the coupled region from the first line's terminal
				 * having sequence number equal to 1.
				 */
				IEC61970::Base::Domain::Length distance11;
				/**
				 * Distance to the end of the coupled region from the first line's terminal with
				 * sequence number equal to 1.
				 */
				IEC61970::Base::Domain::Length distance12;
				/**
				 * Distance to the start of coupled region from the second line's terminal with
				 * sequence number equal to 1.
				 */
				IEC61970::Base::Domain::Length distance21;
				/**
				 * Distance to the end of coupled region from the second line's terminal with
				 * sequence number equal to 1.
				 */
				IEC61970::Base::Domain::Length distance22;
				/**
				 * Zero sequence mutual coupling shunt (charging) conductance, uniformly
				 * distributed, of the entire line section.
				 */
				IEC61970::Base::Domain::Conductance g0ch;
				/**
				 * Zero sequence branch-to-branch mutual impedance coupling, resistance.
				 */
				IEC61970::Base::Domain::Resistance r0;
				/**
				 * Zero sequence branch-to-branch mutual impedance coupling, reactance.
				 */
				IEC61970::Base::Domain::Reactance x0;
				/**
				 * The starting terminal for the calculation of distances along the first branch
				 * of the mutual coupling.  Normally MutualCoupling would only be used for
				 * terminals of AC line segments.  The first and second terminals of a mutual
				 * coupling should point to different AC line segments.
				 */
				IEC61970::Base::Core::Terminal *First_Terminal;
				/**
				 * The starting terminal for the calculation of distances along the second branch
				 * of the mutual coupling.
				 */
				IEC61970::Base::Core::Terminal *Second_Terminal;

			};

		}

	}

}
#endif // !defined(EA_9304C0F3_42E0_4acf_9CA7_EBA43847F596__INCLUDED_)
