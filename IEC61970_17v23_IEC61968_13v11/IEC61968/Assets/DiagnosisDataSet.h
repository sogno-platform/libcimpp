///////////////////////////////////////////////////////////
//  DiagnosisDataSet.h
//  Implementation of the Class DiagnosisDataSet
///////////////////////////////////////////////////////////

#ifndef DIAGNOSISDATASET_H
#define DIAGNOSISDATASET_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/PhaseCode.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Assets/ProcedureDataSet.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * The result of a problem (typically an asset failure) diagnosis. Contains
		 * complete information like what might be received from a lab doing forensic
		 * analysis of a failed asset. 
		 */
		class DiagnosisDataSet : public IEC61968::Assets::ProcedureDataSet
		{

		public:
			DiagnosisDataSet();
			virtual ~DiagnosisDataSet();
			/**
			 * Effect of problem.
			 */
			IEC61970::Base::Domain::String effect;
			/**
			 * Failuer mode, for example: Failure to Insulate; Failure to conduct; Failure to
			 * contain oil; Failure to provide ground plane; Other.
			 */
			IEC61970::Base::Domain::String failureMode;
			/**
			 * Cause of problem determined during diagnosis.
			 */
			IEC61970::Base::Domain::String finalCause;
			/**
			 * Code for diagnosed probem type.
			 */
			IEC61970::Base::Domain::String finalCode;
			/**
			 * Origin of problem determined during diagnosis.
			 */
			IEC61970::Base::Domain::String finalOrigin;
			/**
			 * Remarks pertaining to findings during problem diagnosis.
			 */
			IEC61970::Base::Domain::String finalRemark;
			/**
			 * Phase(s) diagnosed.
			 */
			IEC61970::Base::Core::PhaseCode phaseCode = IEC61970::Base::Core::PhaseCode::_undef;
			/**
			 * Code for problem type determined during preliminary assessment.
			 */
			IEC61970::Base::Domain::String preliminaryCode;
			/**
			 * Date and time preliminary assessment of problem was performed.
			 */
			IEC61970::Base::Domain::DateTime preliminaryDateTime;
			/**
			 * Remarks pertaining to preliminary assessment of problem.
			 */
			IEC61970::Base::Domain::String preliminaryRemark;
			/**
			 * Root cause of problem determined during diagnosis.
			 */
			IEC61970::Base::Domain::String rootCause;
			/**
			 * Root origin of problem determined during diagnosis.
			 */
			IEC61970::Base::Domain::String rootOrigin;
			/**
			 * Remarks pertaining to root cause findings during problem diagnosis.
			 */
			IEC61970::Base::Domain::String rootRemark;

		};

	}

}
#endif // DIAGNOSISDATASET_H
