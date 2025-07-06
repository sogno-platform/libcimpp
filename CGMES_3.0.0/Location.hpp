#ifndef Location_H
#define Location_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"

namespace CIMPP
{
	class CoordinateSystem;
	class PositionPoint;
	class PowerSystemResource;
	class StreetAddress;

	/** \brief The place, scene, or point of something where someone or something has been, is, and/or will be at a given moment in time. It can be defined with one or more position points (coordinates) in a given coordinate system. */
	class Location : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		Location();
		~Location() override;

		/** \brief Coordinate system used to describe position points of this location. Default: 0 */
		CIMPP::CoordinateSystem* CoordinateSystem;

		/** \brief Sequence of position points describing this location, expressed in coordinate system `Location.CoordinateSystem`. Default: 0 */
		std::list<CIMPP::PositionPoint*> PositionPoints;

		/** \brief All power system resources at this location. Default: 0 */
		CIMPP::PowerSystemResource* PowerSystemResources;

		/** \brief Main address of the location. Default: nullptr */
		CIMPP::StreetAddress* mainAddress;

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

	BaseClass* Location_factory();
}
#endif
