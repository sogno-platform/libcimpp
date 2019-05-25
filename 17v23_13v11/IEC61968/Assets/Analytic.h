///////////////////////////////////////////////////////////
//  Analytic.h
//  Implementation of the Class Analytic
//  Original author: Gowri
///////////////////////////////////////////////////////////

#ifndef ANALYTIC_H
#define ANALYTIC_H

#include <list>

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61968/Assets/AnalyticKind.h"
#include "IEC61968/Assets/ScaleKind.h"
#include "IEC61968/Assets/AssetGroup.h"
#include "IEC61968/Assets/AnalyticScore.h"
#include "IEC61968/Assets/AssetHealthEvent.h"
#include "IEC61968/Assets/Asset.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * An algorithm or calculation for making an assessment about an asset or asset
		 * grouping for lifecycle decision making.
		 */
		class Analytic : public IEC61968::Common::Document
		{

		public:
			Analytic();
			virtual ~Analytic();
			/**
			 * Value that indicates best possible numeric value.
			 */
			IEC61970::Base::Domain::Float bestValue;
			/**
			 * Kind of analytic this analytic is.
			 */
			IEC61968::Assets::AnalyticKind kind = IEC61968::Assets::AnalyticKind::_undef;
			/**
			 * The scoring scale kind.
			 */
			IEC61968::Assets::ScaleKind scaleKind = IEC61968::Assets::ScaleKind::_undef;
			/**
			 * Value that indicates worst possible numeric value.
			 */
			IEC61970::Base::Domain::Float worstValue;
			std::list<IEC61968::Assets::AssetGroup*> AssetGroup;
			std::list<IEC61968::Assets::AnalyticScore*> AnalyticScore;
			std::list<IEC61968::Assets::AssetHealthEvent*> AssetHealthEvent;
			std::list<IEC61968::Assets::Asset*> Asset;

		};

	}

}
#endif // ANALYTIC_H
