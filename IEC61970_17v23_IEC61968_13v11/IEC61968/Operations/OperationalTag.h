///////////////////////////////////////////////////////////
//  OperationalTag.h
//  Implementation of the Class OperationalTag
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef OPERATIONALTAG_H
#define OPERATIONALTAG_H

#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "IEC61968/Assets/Asset.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Operational tag placed on a power system resource or asset in the context of
		 * switching plan execution or other work in the field.
		 */
		class OperationalTag : public IEC61968::Common::Document
		{

		public:
			OperationalTag();
			virtual ~OperationalTag();
			/**
			 * Power system resource on which this tag has been placed.
			 */
			IEC61970::Base::Core::PowerSystemResource *PowerSystemResource;
			/**
			 * Asset on which this tag has been placed.
			 */
			IEC61968::Assets::Asset *Asset;

		};

	}

}
#endif // OPERATIONALTAG_H
