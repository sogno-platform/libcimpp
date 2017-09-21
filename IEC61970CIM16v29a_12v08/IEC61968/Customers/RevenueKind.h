///////////////////////////////////////////////////////////
//  RevenueKind.h
//  Implementation of the Class RevenueKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef REVENUEKIND_H
#define REVENUEKIND_H

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Accounting classification of the type of revenue collected for the customer
		 * agreement, typically used to break down accounts for revenue accounting.
		 */
		enum class RevenueKind
		{
			/**
			 * Residential revenue.
			 */
			residential,
			/**
			 * Non-residential revenue.
			 */
			nonResidential,
			/**
			 * Commercial revenue.
			 */
			commercial,
			/**
			 * Industrial revenue.
			 */
			industrial,
			/**
			 * Irrigation revenue.
			 */
			irrigation,
			/**
			 * Streetlight revenue.
			 */
			streetLight,
			/**
			 * Other revenue kind.
			 */
			other
		};

	}

}
#endif // REVENUEKIND_H
