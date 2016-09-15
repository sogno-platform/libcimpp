///////////////////////////////////////////////////////////
//  WindGenUnitKind.h
//  Implementation of the Class WindGenUnitKind
//  Created on:      28-Jan-2016 12:47:53
///////////////////////////////////////////////////////////

#if !defined(EA_6588E7AD_E708_499b_BC90_A70A09A3008C__INCLUDED_)
#define EA_6588E7AD_E708_499b_BC90_A70A09A3008C__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * Kind of wind generating unit.
				 */
				enum class WindGenUnitKind
				{
					/**
					 * The wind generating unit is located offshore.
					 */
					offshore,
					/**
					 * The wind generating unit is located onshore.
					 */
					onshore
				};

			}

		}

	}

}
#endif // !defined(EA_6588E7AD_E708_499b_BC90_A70A09A3008C__INCLUDED_)
