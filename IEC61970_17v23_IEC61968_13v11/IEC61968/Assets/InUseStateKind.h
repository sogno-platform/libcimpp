///////////////////////////////////////////////////////////
//  InUseStateKind.h
//  Implementation of the Class InUseStateKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef INUSESTATEKIND_H
#define INUSESTATEKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Possible 'in use' states that an asset can be in.
		 */
		enum class InUseStateKind
		{
			/**
			 * Asset is deployed (in use) or is being put into use.
			 */
			 _undef = -1, 	inUse,
			/**
			 * Asset is ready to be put into use.
			 */
			readyForUse,
			/**
			 * Asset is not ready to be put into use.
			 */
			notReadyForUse
		};

	}

}
#endif // INUSESTATEKIND_H
