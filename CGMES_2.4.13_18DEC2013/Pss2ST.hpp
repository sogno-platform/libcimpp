#ifndef Pss2ST_H
#define Pss2ST_H
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
#include "CimClassDetails.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief PTI Microprocessor-Based Stabilizer type 1. */
	class Pss2ST : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss2ST();
		~Pss2ST() override;

		/** \brief Type of input signal #1.  Typical Value = rotorAngularFrequencyDeviation. Default: 0 */
		CIMPP::InputSignalKind inputSignal1Type;

		/** \brief Type of input signal #2.  Typical Value = generatorElectricalPower. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;

		/** \brief Gain (K1). Default: nullptr */
		CIMPP::PU k1;

		/** \brief Gain (K2). Default: nullptr */
		CIMPP::PU k2;

		/** \brief Limiter (Lsmax). Default: nullptr */
		CIMPP::PU lsmax;

		/** \brief Limiter (Lsmin). Default: nullptr */
		CIMPP::PU lsmin;

		/** \brief Time constant (T1). Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Time constant (T10). Default: nullptr */
		CIMPP::Seconds t10;

		/** \brief Time constant (T2). Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time constant (T3). Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Time constant (T4). Default: nullptr */
		CIMPP::Seconds t4;

		/** \brief Time constant (T5). Default: nullptr */
		CIMPP::Seconds t5;

		/** \brief Time constant (T6). Default: nullptr */
		CIMPP::Seconds t6;

		/** \brief Time constant (T7). Default: nullptr */
		CIMPP::Seconds t7;

		/** \brief Time constant (T8). Default: nullptr */
		CIMPP::Seconds t8;

		/** \brief Time constant (T9). Default: nullptr */
		CIMPP::Seconds t9;

		/** \brief Cutoff limiter (Vcl). Default: nullptr */
		CIMPP::PU vcl;

		/** \brief Cutoff limiter (Vcu). Default: nullptr */
		CIMPP::PU vcu;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* Pss2ST_factory();
}
#endif
