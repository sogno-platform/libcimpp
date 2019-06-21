///////////////////////////////////////////////////////////
//  Seal.h
//  Implementation of the Class Seal
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SEAL_H
#define SEAL_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Assets/SealConditionKind.h"
#include "IEC61968/Assets/SealKind.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Physically controls access to AssetContainers.
		 */
		class Seal : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Seal();
			virtual ~Seal();
			/**
			 * Date and time this seal has been applied.
			 */
			IEC61970::Base::Domain::DateTime appliedDateTime;
			/**
			 * Condition of seal.
			 */
			IEC61968::Assets::SealConditionKind condition = IEC61968::Assets::SealConditionKind::_undef;
			/**
			 * Kind of seal.
			 */
			IEC61968::Assets::SealKind kind = IEC61968::Assets::SealKind::_undef;
			/**
			 * (reserved word) Seal number.
			 */
			IEC61970::Base::Domain::String sealNumber;

		};

	}

}
#endif // SEAL_H
