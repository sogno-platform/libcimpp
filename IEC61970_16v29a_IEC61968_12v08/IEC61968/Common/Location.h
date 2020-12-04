///////////////////////////////////////////////////////////
//  Location.h
//  Implementation of the Class Location
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef LOCATION_H
#define LOCATION_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/ElectronicAddress.h"
#include "IEC61968/Common/StreetAddress.h"
#include "IEC61968/Common/TelephoneNumber.h"
#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Meas/Measurement.h"
#include "IEC61968/Common/PositionPoint.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Common/CoordinateSystem.h"
#include "IEC61968/Common/ConfigurationEvent.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * The place, scene, or point of something where someone or something has been, is,
		 * and/or will be at a given moment in time. It can be defined with one or more
		 * postition points (coordinates) in a given coordinate system.
		 */
		class Location : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Location();
			virtual ~Location();
			/**
			 * (if applicable) Direction that allows field crews to quickly find a given asset.
			 * For a given location, such as a street address, this is the relative direction
			 * in which to find the asset. For example, a streetlight may be located at the
			 * 'NW' (northwest) corner of the customer's site, or a usage point may be located
			 * on the second floor of an apartment building.
			 */
			IEC61970::Base::Domain::String direction;
			/**
			 * Electronic address.
			 */
			IEC61968::Common::ElectronicAddress electronicAddress;
			/**
			 * (if applicable) Reference to geographical information source, often external to
			 * the utility.
			 */
			IEC61970::Base::Domain::String geoInfoReference;
			/**
			 * Main address of the location.
			 */
			IEC61968::Common::StreetAddress mainAddress;
			/**
			 * Phone number.
			 */
			IEC61968::Common::TelephoneNumber phone1;
			/**
			 * Additional phone number.
			 */
			IEC61968::Common::TelephoneNumber phone2;
			/**
			 * Secondary address of the location. For example, PO Box address may have
			 * different ZIP code than that in the 'mainAddress'.
			 */
			IEC61968::Common::StreetAddress secondaryAddress;
			/**
			 * Status of this location.
			 */
			IEC61968::Common::Status status;
			/**
			 * Classification by utility's corporate standards and practices, relative to the
			 * location itself (e.g., geographical, functional accounting, etc., not a given
			 * property that happens to exist at that location).
			 */
			IEC61970::Base::Domain::String type;
			std::list<IEC61970::Base::Meas::Measurement*> Measurements;
			/**
			 * Sequence of position points describing this location, expressed in coordinate
			 * system 'Location.CoordinateSystem'.
			 */
			std::list<IEC61968::Common::PositionPoint*> PositionPoints;
			/**
			 * All power system resources at this location.
			 */
			std::list<IEC61970::Base::Core::PowerSystemResource*> PowerSystemResources;
			/**
			 * Coordinate system used to describe position points of this location.
			 */
			IEC61968::Common::CoordinateSystem *CoordinateSystem;
			/**
			 * All configuration events created for this location.
			 */
			std::list<IEC61968::Common::ConfigurationEvent*> ConfigurationEvents;

		};

	}

}
#endif // LOCATION_H
