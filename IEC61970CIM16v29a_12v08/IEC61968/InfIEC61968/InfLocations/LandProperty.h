///////////////////////////////////////////////////////////
//  LandProperty.h
//  Implementation of the Class LandProperty
///////////////////////////////////////////////////////////

#ifndef LANDPROPERTY_H
#define LANDPROPERTY_H

#include <list>

#include "IEC61968/InfIEC61968/InfLocations/DemographicKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfLocations/LandPropertyKind.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfLocations/LocationGrant.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpSiteLevelData.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfCommon/PropertyOrganisationRole.h"
#include "IEC61968/InfIEC61968/InfCommon/PersonPropertyRole.h"
#include "IEC61968/Assets/AssetContainer.h"
#include "IEC61968/Common/Location.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfLocations
		{
			/**
			 * Information about a particular piece of (land) property such as its use.
			 * Ownership of the property may be determined through associations to
			 * Organisations and/or ErpPersons.
			 */
			class LandProperty : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				LandProperty();
				virtual ~LandProperty();
				/**
				 * Demographics around the site.
				 */
				IEC61968::InfIEC61968::InfLocations::DemographicKind demographicKind;
				/**
				 * Reference allocated by the governing organisation (such as municipality) to
				 * this piece of land that has a formal reference to Surveyor General's records.
				 * The governing organisation is specified in associated Organisation.
				 */
				IEC61970::Base::Domain::String externalRecordReference;
				/**
				 * Kind of (land) property, categorised according to its main functional use from
				 * the utility's perspective.
				 */
				IEC61968::InfIEC61968::InfLocations::LandPropertyKind kind;
				IEC61968::Common::Status status;
				/**
				 * All location grants this land property has.
				 */
				std::list<IEC61968::InfIEC61968::InfLocations::LocationGrant*> LocationGrants;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpSiteLevelData*> ErpSiteLevelDatas;
				std::list<IEC61968::InfIEC61968::InfCommon::PropertyOrganisationRole*> ErpOrganisationRoles;
				std::list<IEC61968::InfIEC61968::InfCommon::PersonPropertyRole*> ErpPersonRoles;
				std::list<IEC61968::Assets::AssetContainer*> AssetContainers;
				/**
				 * The spatail description of a piece of property.
				 */
				std::list<IEC61968::Common::Location*> Locations;

			};

		}

	}

}
#endif // LANDPROPERTY_H
