///////////////////////////////////////////////////////////
//  AssetStringKind.h
//  Implementation of the Class AssetStringKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASSETSTRINGKIND_H
#define ASSETSTRINGKIND_H

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Definition of type of string useful in asset domain.
		 */
		enum class AssetStringKind
		{
			/**
			 * Remarks related to a visual exam.
			 * Could be used for remarks on oil appearance resulting from visual examination,
			 * including sediment, appearance, free water.
			 */
			 _undef = -1, 	visualExamRemarks
		};

	}

}
#endif // ASSETSTRINGKIND_H
