///////////////////////////////////////////////////////////
//  WindGenUnitKind.h
//  Implementation of the Class WindGenUnitKind
///////////////////////////////////////////////////////////

#ifndef WINDGENUNITKIND_H
#define WINDGENUNITKIND_H

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
					 _undef = -1, 	offshore,
					/**
					 * The wind generating unit is located onshore.
					 */
					onshore
				};

			}

		}

	}

}
#endif // WINDGENUNITKIND_H
