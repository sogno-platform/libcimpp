///////////////////////////////////////////////////////////
//  AnalyticScore.h
//  Implementation of the Class AnalyticScore
//  Original author: Gowri
///////////////////////////////////////////////////////////

#ifndef ANALYTICSCORE_H
#define ANALYTICSCORE_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * An indicative scoring by an analytic that can be used to characterize the
		 * health of or the risk associated with one or more assets.  The analytic score
		 * reflects the results of an execution of an analytic against an asset or group
		 * of assets.
		 */
		class AnalyticScore : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			AnalyticScore();
			virtual ~AnalyticScore();
			/**
			 * Timestamp of when the score was calculated.
			 */
			IEC61970::Base::Domain::DateTime calculationDateTime;
			/**
			 * Date-time for when the score applies.
			 */
			IEC61970::Base::Domain::DateTime effectiveDateTime;
			/**
			 * Asset health score value.
			 */
			IEC61970::Base::Domain::Float value;
			IEC61968::Assets::Asset *Asset;

		};

	}

}
#endif // ANALYTICSCORE_H
