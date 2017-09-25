///////////////////////////////////////////////////////////
//  Procedure.h
//  Implementation of the Class Procedure
///////////////////////////////////////////////////////////

#ifndef PROCEDURE_H
#define PROCEDURE_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/ProcedureKind.h"
#include "IEC61970/Base/Meas/Measurement.h"
#include "IEC61968/Assets/ProcedureDataSet.h"
#include "IEC61970/Base/Meas/Limit.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Documented procedure for various types of work or work tasks on assets.
		 */
		class Procedure : public IEC61968::Common::Document
		{

		public:
			Procedure();
			virtual ~Procedure();
			/**
			 * Textual description of this procedure.
			 */
			IEC61970::Base::Domain::String instruction;
			/**
			 * Kind of procedure.
			 */
			IEC61968::Assets::ProcedureKind kind;
			/**
			 * Sequence number in a sequence of procedures being performed.
			 */
			IEC61970::Base::Domain::String sequenceNumber;
			/**
			 * Document containing this measurement.
			 */
			std::list<IEC61970::Base::Meas::Measurement*> Measurements;
			/**
			 * All data sets captured by this procedure.
			 */
			std::list<IEC61968::Assets::ProcedureDataSet*> ProcedureDataSets;
			std::list<IEC61970::Base::Meas::Limit*> Limits;
			/**
			 * All assets to which this procedure applies.
			 */
			std::list<IEC61968::Assets::Asset*> Assets;

		};

	}

}
#endif // PROCEDURE_H
