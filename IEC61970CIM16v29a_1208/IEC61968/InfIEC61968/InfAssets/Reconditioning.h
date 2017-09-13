///////////////////////////////////////////////////////////
//  Reconditioning.h
//  Implementation of the Class Reconditioning
///////////////////////////////////////////////////////////

#ifndef RECONDITIONING_H
#define RECONDITIONING_H

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfAssets/TransformerObservation.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Reconditioning information for an asset.
			 */
			class Reconditioning : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Reconditioning();
				virtual ~Reconditioning();
				/**
				 * Date and time this reconditioning (or a major overhaul) has been performed.
				 */
				IEC61970::Base::Domain::DateTime dateTime;
				std::list<IEC61968::InfIEC61968::InfAssets::TransformerObservation*> TransformerObservations;

			};

		}

	}

}
#endif // RECONDITIONING_H
