///////////////////////////////////////////////////////////
//  ASTMStandard.h
//  Implementation of the Class ASTMStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef ASTMSTANDARD_H
#define ASTMSTANDARD_H

#include "BaseClass.h"
#include "IEC61968/Assets/ASTMStandardEditionKind.h"
#include "IEC61968/Assets/ASTMStandardKind.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Standard published by ASTM (ASTM International).
		 */
		class ASTMStandard : public BaseClass
		{

		public:
			ASTMStandard();
			virtual ~ASTMStandard();
			/**
			 * Edition of ASTM standard.
			 */
			IEC61968::Assets::ASTMStandardEditionKind standardEdition = IEC61968::Assets::ASTMStandardEditionKind::_undef;
			/**
			 * ASTM standard number.
			 */
			IEC61968::Assets::ASTMStandardKind standardNumber = IEC61968::Assets::ASTMStandardKind::_undef;

		};

	}

}
#endif // ASTMSTANDARD_H
