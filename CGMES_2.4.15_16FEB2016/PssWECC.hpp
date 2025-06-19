#ifndef PssWECC_H
#define PssWECC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Dual input Power System Stabilizer, based on IEEE type 2, with modified output limiter defined by WECC (Western Electricity Coordinating Council, USA). */
	class PssWECC : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssWECC();
		~PssWECC() override;

		/** \brief Type of input signal #1. Default: 0 */
		CIMPP::InputSignalKind inputSignal1Type;

		/** \brief Type of input signal #2. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;

		/** \brief Input signal 1 gain  (K). Default: nullptr */
		CIMPP::PU k1;

		/** \brief Input signal 2 gain (K). Default: nullptr */
		CIMPP::PU k2;

		/** \brief Input signal 1 transducer time constant (T). Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Lag time constant (T). Default: nullptr */
		CIMPP::Seconds t10;

		/** \brief Input signal 2 transducer time constant (T). Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Stabilizer washout time constant (T). Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Stabilizer washout time lag constant (T) (&gt;0). Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Lead time constant (T). Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Lag time constant (T). Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Lead time constant (T). Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Lag time constant (T). Default: nullptr */
		CIMPP::Seconds t8;

		/** \brief Lead time constant (T). Default: nullptr */
		CIMPP::Seconds t9;

		/** \brief Minimum value for voltage compensator output (V). Default: nullptr */
		CIMPP::PU vcl;

		/** \brief Maximum value for voltage compensator output (V). Default: nullptr */
		CIMPP::PU vcu;

		/** \brief Maximum output signal (Vsmax). Default: nullptr */
		CIMPP::PU vsmax;

		/** \brief Minimum output signal (Vsmin). Default: nullptr */
		CIMPP::PU vsmin;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* PssWECC_factory();
}
#endif
