///////////////////////////////////////////////////////////
//  AssetFailureClassification.h
//  Implementation of the Class AssetFailureClassification
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETFAILURECLASSIFICATION_H
#define ASSETFAILURECLASSIFICATION_H

namespace IEC61968
{
	namespace Assets
	{
		enum class AssetFailureClassification
		{
			 _undef = -1, 	major,
			minor,
			defect,
			majorNeedsReplacement
		};

	}

}
#endif // ASSETFAILURECLASSIFICATION_H
