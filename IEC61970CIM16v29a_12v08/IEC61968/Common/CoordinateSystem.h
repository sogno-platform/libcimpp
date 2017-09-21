///////////////////////////////////////////////////////////
//  CoordinateSystem.h
//  Implementation of the Class CoordinateSystem
///////////////////////////////////////////////////////////

#ifndef COORDINATESYSTEM_H
#define COORDINATESYSTEM_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Coordinate reference system.
		 */
		class CoordinateSystem : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			CoordinateSystem();
			virtual ~CoordinateSystem();
			/**
			 * A Uniform Resource Name (URN) for the coordinate reference system (crs) used to
			 * define 'Location.PositionPoints'.
			 * An example would be the European Petroleum Survey Group (EPSG) code for a
			 * coordinate reference system, defined in URN under the Open Geospatial
			 * Consortium (OGC) namespace as: urn:ogc:def:uom:EPSG::XXXX, where XXXX is an
			 * EPSG code (a full list of codes can be found at the EPSG Registry web site http:
			 * //www.epsg-registry.org/). To define the coordinate system as being WGS84
			 * (latitude, longitude) using an EPSG OGC, this attribute would be urn:ogc:def:
			 * uom:EPSG::4236.
			 * A profile should limit this code to a set of allowed URNs agreed to by all
			 * sending and receiving parties.
			 */
			IEC61970::Base::Domain::String crsUrn;

		};

	}

}
#endif // COORDINATESYSTEM_H
