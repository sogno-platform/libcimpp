///////////////////////////////////////////////////////////
//  ExcST6BOELselectorKind.h
//  Implementation of the Class ExcST6BOELselectorKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef EXCST6BOELSELECTORKIND_H
#define EXCST6BOELSELECTORKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace ExcitationSystemDynamics
			{
				/**
				 * Type of connection for the OEL input used for static excitation systems type 6B.
				 */
				enum class ExcST6BOELselectorKind
				{
					/**
					 * No OEL input is used.
					 */
					 _undef = -1, 	noOELinput,
					/**
					 * The connection is before UEL.
					 */
					beforeUEL,
					/**
					 * The connection is after UEL.
					 */
					afterUEL
				};

			}

		}

	}

}
#endif // EXCST6BOELSELECTORKIND_H
