///////////////////////////////////////////////////////////
//  TransformerTankInfo.h
//  Implementation of the Class TransformerTankInfo
///////////////////////////////////////////////////////////

#ifndef TRANSFORMERTANKINFO_H
#define TRANSFORMERTANKINFO_H

#include <list>

#include "IEC61968/AssetInfo/TransformerEndInfo.h"
#include "IEC61968/AssetInfo/PowerTransformerInfo.h"
#include "IEC61968/Assets/AssetInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Set of transformer tank data, from an equipment library.
		 */
		class TransformerTankInfo : public IEC61968::Assets::AssetInfo
		{

		public:
			TransformerTankInfo();
			virtual ~TransformerTankInfo();
			/**
			 * Data for all the ends described by this transformer tank data.
			 */
			std::list<IEC61968::AssetInfo::TransformerEndInfo*> TransformerEndInfos;
			/**
			 * Power transformer data that this tank description is part of.
			 */
			IEC61968::AssetInfo::PowerTransformerInfo *PowerTransformerInfo;

		};

	}

}
#endif // TRANSFORMERTANKINFO_H
