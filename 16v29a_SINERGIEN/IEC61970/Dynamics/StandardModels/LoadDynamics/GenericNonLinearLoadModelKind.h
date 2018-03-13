///////////////////////////////////////////////////////////
//  GenericNonLinearLoadModelKind.h
//  Implementation of the Class GenericNonLinearLoadModelKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef GENERICNONLINEARLOADMODELKIND_H
#define GENERICNONLINEARLOADMODELKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace LoadDynamics
			{
				/**
				 * Type of generic non-linear load model.
				 */
				enum class GenericNonLinearLoadModelKind
				{
					/**
					 * Exponential recovery model.
					 */
					 _undef = -1, 	exponentialRecovery,
					/**
					 * Load adaptive model.
					 */
					loadAdaptive
				};

			}

		}

	}

}
#endif // GENERICNONLINEARLOADMODELKIND_H
