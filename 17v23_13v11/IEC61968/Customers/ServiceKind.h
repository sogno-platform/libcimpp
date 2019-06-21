///////////////////////////////////////////////////////////
//  ServiceKind.h
//  Implementation of the Class ServiceKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SERVICEKIND_H
#define SERVICEKIND_H

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Kind of service.
		 */
		enum class ServiceKind
		{
			/**
			 * Electricity service.
			 */
			 _undef = -1, 	electricity,
			/**
			 * Gas service.
			 */
			gas,
			/**
			 * Water service.
			 */
			water,
			/**
			 * Time service.
			 */
			time,
			/**
			 * Heat service.
			 */
			heat,
			/**
			 * Refuse (waster) service.
			 */
			refuse,
			/**
			 * Sewerage service.
			 */
			sewerage,
			/**
			 * Rates (e.g. tax, charge, toll, duty, tariff, etc.) service.
			 */
			rates,
			/**
			 * TV license service.
			 */
			tvLicence,
			/**
			 * Internet service.
			 */
			internet,
			/**
			 * Other kind of service.
			 */
			other,
			/**
			 * Air service.
			 */
			air,
			/**
			 * Natural gas service.
			 */
			naturalGas,
			/**
			 * Propane service.
			 */
			propane,
			/**
			 * Steam service.
			 */
			steam,
			/**
			 * Heating fluid service.
			 */
			heatingFluid
		};

	}

}
#endif // SERVICEKIND_H
