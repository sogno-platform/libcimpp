///////////////////////////////////////////////////////////
//  UndergroundStructureKind.h
//  Implementation of the Class UndergroundStructureKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef UNDERGROUNDSTRUCTUREKIND_H
#define UNDERGROUNDSTRUCTUREKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Kind of underground structure.
			 */
			enum class UndergroundStructureKind
			{
				burd,
				enclosure,
				handhole,
				manhole,
				pad,
				subsurfaceEnclosure,
				trench,
				tunnel,
				vault,
				pullbox
			};

		}

	}

}
#endif // UNDERGROUNDSTRUCTUREKIND_H
