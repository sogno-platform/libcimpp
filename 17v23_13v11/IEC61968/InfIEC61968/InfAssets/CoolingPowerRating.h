///////////////////////////////////////////////////////////
//  CoolingPowerRating.h
//  Implementation of the Class CoolingPowerRating
///////////////////////////////////////////////////////////

#ifndef COOLINGPOWERRATING_H
#define COOLINGPOWERRATING_H

#include <list>

#include "IEC61968/InfIEC61968/InfAssets/CoolingKind.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfAssets/Reconditioning.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * There are often stages of power which are associated with stages of cooling.
			 * For instance, a transformer may be rated 121kV on the primary, 15kV on the
			 * secondary and 4kV on the tertiary winding. These are voltage ratings and the
			 * power ratings are generally the same for all three windings and independent of
			 * the voltage ratings, there are instances where the tertiary may have a lower
			 * power rating.
			 * For example, for three stages, the power rating may be 15/20/25 MVA and the
			 * cooling is OA/FA/FOA. The 15 MVA rating goes with the OA cooling (Oil and Air
			 * cooling). This is called the self cooled rating as there are no external
			 * cooling enhancements. The 20 MVA rating goes with the FA cooling (Forced Air
			 * cooling), this means that when the fans are running and thus enhancing the
			 * cooling characteristics, the transformer can operate at a power level of 20 MVA.
			 * The 25 MVA rating goes with the FOA cooling (Forced Oil and Air cooling), this
			 * means that when the fans and pumps are running and thus enhancing the cooling
			 * characteristics even more than before, the transformer can operate at a power
			 * level of 25 MVA. This 15/20/25 MVA does not state how the power is split
			 * between the various windings. It may be 25 MVA input on the primary, 25 MVA
			 * output on the secondary and 0 MVA output on the tertiary. It may also operate
			 * at 25 MVA input on the primary, 17 MVA output on the secondary and 8 MVA output
			 * on the tertiary.
			 */
			class CoolingPowerRating : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				CoolingPowerRating();
				virtual ~CoolingPowerRating();
				/**
				 * Kind of cooling system.
				 */
				IEC61968::InfIEC61968::InfAssets::CoolingKind coolingKind = IEC61968::InfIEC61968::InfAssets::CoolingKind::_undef;
				/**
				 * The power rating associated with type of cooling specified for this stage.
				 */
				IEC61970::Base::Domain::ApparentPower powerRating;
				/**
				 * Stage of cooling and associated power rating.
				 */
				IEC61970::Base::Domain::Integer stage;
				std::list<IEC61968::InfIEC61968::InfAssets::Reconditioning*> Reconditionings;

			};

		}

	}

}
#endif // COOLINGPOWERRATING_H
