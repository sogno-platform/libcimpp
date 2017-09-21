///////////////////////////////////////////////////////////
//  NonStandardItem.h
//  Implementation of the Class NonStandardItem
///////////////////////////////////////////////////////////

#ifndef NONSTANDARDITEM_H
#define NONSTANDARDITEM_H

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * This document provides information for non-standard items like customer
			 * contributions (e.g., customer digs trench), vouchers (e.g., credit), and
			 * contractor bids. 
			 */
			class NonStandardItem : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				NonStandardItem();
				virtual ~NonStandardItem();
				/**
				 * The projected cost for this item.
				 */
				IEC61970::Base::Domain::Money amount;

			};

		}

	}

}
#endif // NONSTANDARDITEM_H
