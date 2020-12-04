///////////////////////////////////////////////////////////
//  WorkStatusKind.h
//  Implementation of the Class WorkStatusKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKSTATUSKIND_H
#define WORKSTATUSKIND_H

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Kind of status, specific to work.
		 */
		enum class WorkStatusKind
		{
			/**
			 * Work approval is pending.
			 */
			 _undef = -1, 	waitingOnApproval,
			/**
			 * Work has been approved.
			 */
			approved,
			/**
			 * Work has been canceled.
			 */
			cancelled,
			/**
			 * Work needs to be scheduled.
			 */
			waitingToBeScheduled,
			/**
			 * Work has been scheduled.
			 */
			scheduled,
			/**
			 * Work has been waiting on material.
			 */
			waitingOnMaterial,
			/**
			 * Work is in progress.
			 */
			inProgress,
			/**
			 * Work has been completed, i.e., crew can leave the work location and is
			 * available for another work.
			 */
			completed,
			/**
			 * Work has been closed (typically by a person responsible for work management)
			 * and is ready for billing.
			 */
			closed,
			/**
			 * Crew has been dispatched.
			 */
			dispatched,
			/**
			 * Crew is 'en route'.
			 */
			enroute,
			/**
			 * Crew is on the site.
			 */
			onSite
		};

	}

}
#endif // WORKSTATUSKIND_H
