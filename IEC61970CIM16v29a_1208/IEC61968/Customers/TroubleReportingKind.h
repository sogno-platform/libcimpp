///////////////////////////////////////////////////////////
//  TroubleReportingKind.h
//  Implementation of the Class TroubleReportingKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TROUBLEREPORTINGKIND_H
#define TROUBLEREPORTINGKIND_H

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Kind of trouble reporting.
		 */
		enum class TroubleReportingKind
		{
			/**
			 * Trouble call received by customer service representative.
			 */
			call,
			/**
			 * Trouble reported by email.
			 */
			email,
			/**
			 * Trouble reported by letter.
			 */
			letter,
			/**
			 * Trouble reported by other means.
			 */
			other,
			/**
			 * Trouble reported through interactive voice response system.
			 */
			ivr
		};

	}

}
#endif // TROUBLEREPORTINGKIND_H
