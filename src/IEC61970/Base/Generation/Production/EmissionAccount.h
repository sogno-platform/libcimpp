///////////////////////////////////////////////////////////
//  EmissionAccount.h
//  Implementation of the Class EmissionAccount
//  Created on:      28-Jan-2016 12:44:12
///////////////////////////////////////////////////////////

#if !defined(EA_ABBE6B9D_B403_4c02_BB97_DE3A61611542__INCLUDED_)
#define EA_ABBE6B9D_B403_4c02_BB97_DE3A61611542__INCLUDED_

#include "IEC61970/Base/Generation/Production/EmissionType.h"
#include "IEC61970/Base/Generation/Production/EmissionValueSource.h"
#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Accounts for tracking emissions usage and credits for thermal generating units.
				 * A unit may have zero or more emission accounts, and will typically have one for
				 * tracking usage and one for tracking credits.
				 */
				class EmissionAccount : public IEC61970::Base::Core::Curve
				{

				public:
					EmissionAccount();
					virtual ~EmissionAccount();
					/**
					 * The type of emission, for example sulfur dioxide (SO2). The y1AxisUnits of the
					 * curve contains the unit of measure (e.g. kg) and the emissionType is the type
					 * of emission (e.g. sulfer dioxide).
					 */
					IEC61970::Base::Generation::Production::EmissionType emissionType;
					/**
					 * The source of the emission value.
					 */
					IEC61970::Base::Generation::Production::EmissionValueSource emissionValueSource;

				};

			}

		}

	}

}
#endif // !defined(EA_ABBE6B9D_B403_4c02_BB97_DE3A61611542__INCLUDED_)
