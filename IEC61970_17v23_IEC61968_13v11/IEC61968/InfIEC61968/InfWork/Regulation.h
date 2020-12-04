///////////////////////////////////////////////////////////
//  Regulation.h
//  Implementation of the Class Regulation
///////////////////////////////////////////////////////////

#ifndef REGULATION_H
#define REGULATION_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Special requirements and/or regulations may pertain to certain types of assets
			 * or work. For example, fire protection and scaffolding.
			 */
			class Regulation : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				Regulation();
				virtual ~Regulation();
				/**
				 * External reference to regulation, if applicable.
				 */
				IEC61970::Base::Domain::String referenceNumber;

			};

		}

	}

}
#endif // REGULATION_H
