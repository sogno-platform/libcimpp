///////////////////////////////////////////////////////////
//  Pole.h
//  Implementation of the Class Pole
///////////////////////////////////////////////////////////

#ifndef POLE_H
#define POLE_H

#include <list>

#include "IEC61968/InfIEC61968/InfAssets/PoleBaseKind.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Length.h"
#include "IEC61968/InfIEC61968/InfAssets/PolePreservativeKind.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/InfIEC61968/InfAssets/PoleTreatmentKind.h"
#include "IEC61968/InfIEC61968/InfAssets/Streetlight.h"
#include "IEC61968/InfIEC61968/InfAssets/Structure.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Pole asset.
			 */
			class Pole : public IEC61968::InfIEC61968::InfAssets::Structure
			{

			public:
				Pole();
				virtual ~Pole();
				/**
				 * Kind of base for this pole.
				 */
				IEC61968::InfIEC61968::InfAssets::PoleBaseKind baseKind = IEC61968::InfIEC61968::InfAssets::PoleBaseKind::_undef;
				/**
				 * True if a block of material has been attached to base of pole in ground for
				 * stability. This technique is used primarily when anchors can not be used.
				 */
				IEC61970::Base::Domain::Boolean breastBlock;
				/**
				 * Pole class: 1, 2, 3, 4, 5, 6, 7, H1, H2, Other, Unknown.
				 */
				IEC61970::Base::Domain::String classification;
				/**
				 * The framing structure mounted on the pole.
				 */
				IEC61970::Base::Domain::String construction;
				/**
				 * Diameter of the pole.
				 */
				IEC61970::Base::Domain::Length diameter;
				/**
				 * Joint pole agreement reference number.
				 */
				IEC61970::Base::Domain::String jpaReference;
				/**
				 * Length of the pole (inclusive of any section of the pole that may be
				 * underground post-installation).
				 */
				IEC61970::Base::Domain::Length length;
				/**
				 * Kind of preservative for this pole.
				 */
				IEC61968::InfIEC61968::InfAssets::PolePreservativeKind preservativeKind = IEC61968::InfIEC61968::InfAssets::PolePreservativeKind::_undef;
				/**
				 * Pole species. Aluminum, Aluminum Davit, Concrete, Fiberglass, Galvanized Davit,
				 * Galvanized, Steel Davit Primed, Steel Davit, Steel Standard Primed, Steel,
				 * Truncated, Wood-Treated, Wood-Hard, Wood-Salt Treated, Wood-Soft, Wood, Other,
				 * Unknown.
				 */
				IEC61970::Base::Domain::String speciesType;
				/**
				 * Date and time pole was last treated with preservative.
				 */
				IEC61970::Base::Domain::DateTime treatedDateTime;
				/**
				 * Kind of treatment for this pole.
				 */
				IEC61968::InfIEC61968::InfAssets::PoleTreatmentKind treatmentKind = IEC61968::InfIEC61968::InfAssets::PoleTreatmentKind::_undef;
				/**
				 * All streetlights attached to this pole.
				 */
				std::list<IEC61968::InfIEC61968::InfAssets::Streetlight*> Streetlights;

			};

		}

	}

}
#endif // POLE_H
