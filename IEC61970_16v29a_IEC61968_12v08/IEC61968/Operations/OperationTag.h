///////////////////////////////////////////////////////////
//  OperationTag.h
//  Implementation of the Class OperationTag
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OPERATIONTAG_H
#define OPERATIONTAG_H

#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Operations
	{
		class OperationTag : public IEC61968::Common::Document
		{

		public:
			OperationTag();
			virtual ~OperationTag();
			/**
			 * Power system resource on which this tag has been placed.
			 */
			IEC61970::Base::Core::PowerSystemResource *PowerSystemResource;
			/**
			 * Asset on which this operation tag has been placed.
			 */
			IEC61968::Assets::Asset *Asset;

		};

	}

}
#endif // OPERATIONTAG_H
