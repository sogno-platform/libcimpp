#ifndef StreetDetail_H
#define StreetDetail_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "String.hpp"

namespace CIMPP
{

	/** \brief Street details, in the context of address. */
	class StreetDetail : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		StreetDetail();
		~StreetDetail() override;

		/** \brief First line of a free form address or some additional address information (for example a mail stop). Default: '' */
		CIMPP::String addressGeneral;

		/** \brief (if applicable) Second line of a free form address. Default: '' */
		CIMPP::String addressGeneral2;

		/** \brief (if applicable) Third line of a free form address. Default: '' */
		CIMPP::String addressGeneral3;

		/** \brief (if applicable) In certain cases the physical location of the place of interest does not have a direct point of entry from the street, but may be located inside a larger structure such as a building, complex, office block, apartment, etc. Default: '' */
		CIMPP::String buildingName;

		/** \brief (if applicable) Utilities often make use of external reference systems, such as those of the town-planner`s department or surveyor general`s mapping system, that allocate global reference codes to streets. Default: '' */
		CIMPP::String code;

		/** \brief The identification by name or number, expressed as text, of the floor in the building as part of this address. Default: '' */
		CIMPP::String floorIdentification;

		/** \brief Name of the street. Default: '' */
		CIMPP::String name;

		/** \brief Designator of the specific location on the street. Default: '' */
		CIMPP::String number;

		/** \brief Prefix to the street name. For example: North, South, East, West. Default: '' */
		CIMPP::String prefix;

		/** \brief Suffix to the street name. For example: North, South, East, West. Default: '' */
		CIMPP::String suffix;

		/** \brief Number of the apartment or suite. Default: '' */
		CIMPP::String suiteNumber;

		/** \brief Type of street. Examples include: street, circle, boulevard, avenue, road, drive, etc. Default: '' */
		CIMPP::String type;

		/** \brief True if this street is within the legal geographical boundaries of the specified town (default). Default: false */
		CIMPP::Boolean withinTownLimits;

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

	BaseClass* StreetDetail_factory();
}
#endif
