///////////////////////////////////////////////////////////
//  EmissionType.h
//  Implementation of the Class EmissionType
//  Created on:      28-Jan-2016 12:44:13
///////////////////////////////////////////////////////////

#if !defined(EA_C514E7C4_399E_4009_A672_FA0E0538B769__INCLUDED_)
#define EA_C514E7C4_399E_4009_A672_FA0E0538B769__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * The type of emission.
				 */
				enum class EmissionType
				{
					/**
					 * Sulfer dioxide.
					 */
					sulfurDioxide,
					/**
					 * Carbon diaoxide.
					 */
					carbonDioxide,
					/**
					 * Nitrogen oxide.
					 */
					nitrogenOxide,
					/**
					 * Hydrogen sulfide.
					 */
					hydrogenSulfide,
					/**
					 * Clorine.
					 */
					chlorine,
					/**
					 * Carbon disulfide.
					 */
					carbonDisulfide
				};

			}

		}

	}

}
#endif // !defined(EA_C514E7C4_399E_4009_A672_FA0E0538B769__INCLUDED_)
