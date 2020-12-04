///////////////////////////////////////////////////////////
//  OneCallRequest.h
//  Implementation of the Class OneCallRequest
///////////////////////////////////////////////////////////

#ifndef ONECALLREQUEST_H
#define ONECALLREQUEST_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * A request for other utilities to mark their underground facilities prior to
			 * commencement of construction and/or maintenance.
			 */
			class OneCallRequest : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				OneCallRequest();
				virtual ~OneCallRequest();
				/**
				 * True if explosives have been or are planned to be used.
				 */
				IEC61970::Base::Domain::Boolean explosivesUsed;
				/**
				 * True if work location has been marked, for example for a dig area.
				 */
				IEC61970::Base::Domain::Boolean markedIndicator;
				/**
				 * Instructions for marking a dig area, if applicable.
				 */
				IEC61970::Base::Domain::String markingInstruction;

			};

		}

	}

}
#endif // ONECALLREQUEST_H
