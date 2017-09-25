///////////////////////////////////////////////////////////
//  EmissionType.h
//  Implementation of the Class EmissionType
///////////////////////////////////////////////////////////

#ifndef EMISSIONTYPE_H
#define EMISSIONTYPE_H

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
#endif // EMISSIONTYPE_H
