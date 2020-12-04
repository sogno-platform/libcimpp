///////////////////////////////////////////////////////////
//  InfoQuestion.h
//  Implementation of the Class InfoQuestion
///////////////////////////////////////////////////////////

#ifndef INFOQUESTION_H
#define INFOQUESTION_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/InfIEC61968/InfWork/WorkDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Questions and answers associated with a type of document for purposes of
			 * clarification. Questions may be predefined or ad hoc.
			 */
			class InfoQuestion : public IEC61968::InfIEC61968::InfWork::WorkDocument
			{

			public:
				InfoQuestion();
				virtual ~InfoQuestion();
				/**
				 * Answer to question.
				 */
				IEC61970::Base::Domain::String answer;
				/**
				 * The date and time the quesiton was answered.
				 */
				IEC61970::Base::Domain::DateTime answerDateTime;
				/**
				 * Remarks to qualify the answer.
				 */
				IEC61970::Base::Domain::String answerRemark;
				/**
				 * The question code. If blank, refer to questionText.
				 */
				IEC61970::Base::Domain::String questionCode;
				/**
				 * Remarks to qualify the question in this situation.
				 */
				IEC61970::Base::Domain::String questionRemark;
				/**
				 * For non-coded questions, the question is provided here.
				 */
				IEC61970::Base::Domain::String questionText;
				/**
				 * The type of the question.
				 */
				IEC61970::Base::Domain::String questionType;

			};

		}

	}

}
#endif // INFOQUESTION_H
