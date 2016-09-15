///////////////////////////////////////////////////////////
//  TapChangerTablePoint.h
//  Implementation of the Class TapChangerTablePoint
//  Created on:      28-Jan-2016 12:47:11
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_534D4073_6DEB_4b66_98E5_83EEF36D0A74__INCLUDED_)
#define EA_534D4073_6DEB_4b66_98E5_83EEF36D0A74__INCLUDED_

#include "IEC61970/Base/Domain/PerCent.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "BaseClass.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			class TapChangerTablePoint : public BaseClass
			{

			public:
				TapChangerTablePoint();
				virtual ~TapChangerTablePoint();
				/**
				 * The magnetizing branch susceptance deviation in percent of nominal value. The
				 * actual susceptance is calculated as follows:
				 * calculated magnetizing susceptance = b(nominal) * (1 + b(from this class)/100).
				 *  The b(nominal) is defined as the static magnetizing susceptance on the
				 * associated power transformer end or ends.  This model assumes the star
				 * impedance (pi model) form.
				 */
				IEC61970::Base::Domain::PerCent b;
				/**
				 * The magnetizing branch conductance deviation in percent of nominal value. The
				 * actual conductance is calculated as follows:
				 * calculated magnetizing conductance = g(nominal) * (1 + g(from this class)/100).
				 *  The g(nominal) is defined as the static magnetizing conductance on the
				 * associated power transformer end or ends.  This model assumes the star
				 * impedance (pi model) form.
				 */
				IEC61970::Base::Domain::PerCent g;
				/**
				 * The resistance deviation in percent of nominal value. The actual reactance is
				 * calculated as follows:
				 * calculated resistance = r(nominal) * (1 + r(from this class)/100).   The
				 * r(nominal) is defined as the static resistance on the associated power
				 * transformer end or ends.  This model assumes the star impedance (pi model) form.
				 */
				IEC61970::Base::Domain::PerCent r;
				/**
				 * The voltage ratio in per unit. Hence this is a value close to one.
				 */
				IEC61970::Base::Domain::Float ratio;
				/**
				 * The tap step.
				 */
				IEC61970::Base::Domain::Integer step;
				/**
				 * The series reactance deviation in percent of nominal value. The actual
				 * reactance is calculated as follows:
				 * calculated reactance = x(nominal) * (1 + x(from this class)/100).   The
				 * x(nominal) is defined as the static series reactance on the associated power
				 * transformer end or ends.  This model assumes the star impedance (pi model) form.
				 */
				IEC61970::Base::Domain::PerCent x;

			};

		}

	}

}
#endif // !defined(EA_534D4073_6DEB_4b66_98E5_83EEF36D0A74__INCLUDED_)
