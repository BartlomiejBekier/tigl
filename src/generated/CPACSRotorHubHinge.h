// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <CCPACSTransformation.h>
#include <string>
#include <tixi.h>
#include "CPACSRotorHubHinge_type.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSRotorHinges;

namespace generated
{
    // This class is used in:
    // CPACSRotorHubHinges

    // generated from /xsd:schema/xsd:complexType[768]
    /// @brief rotorHubHinge type, containing a rotor hub hinge
    /// (flap/leadLag/pitch).
    /// 
    /// RotorHubHinge type, containing a rotor hub hinge
    /// (flap/leadLag/pitch) of a rotorcraft model.
    /// 
    class CPACSRotorHubHinge
    {
    public:
        TIGL_EXPORT CPACSRotorHubHinge(CCPACSRotorHinges* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSRotorHubHinge();

        TIGL_EXPORT CCPACSRotorHinges* GetParent();

        TIGL_EXPORT const CCPACSRotorHinges* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetName() const;
        TIGL_EXPORT virtual void SetName(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const CCPACSTransformation& GetTransformation() const;
        TIGL_EXPORT virtual CCPACSTransformation& GetTransformation();

        TIGL_EXPORT virtual const CPACSRotorHubHinge_type& GetType() const;
        TIGL_EXPORT virtual void SetType(const CPACSRotorHubHinge_type& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetNeutralPosition() const;
        TIGL_EXPORT virtual void SetNeutralPosition(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetStaticStiffness() const;
        TIGL_EXPORT virtual void SetStaticStiffness(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetDynamicStiffness() const;
        TIGL_EXPORT virtual void SetDynamicStiffness(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetDamping() const;
        TIGL_EXPORT virtual void SetDamping(const boost::optional<double>& value);

    protected:
        CCPACSRotorHinges* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                  m_uID;

        /// Name of the hinge.
        boost::optional<std::string> m_name;

        /// Description of the hinge.
        boost::optional<std::string> m_description;

        CCPACSTransformation         m_transformation;

        /// Hinge type. Possible values: "flap", "pitch"
        /// "leadLag". This is used to define the rotation axis of the hinge
        /// (flap = y-axis in blade cs, pitch = x-axis in blade cs, lead-lag
        /// = z-axis in blade cs).
        CPACSRotorHubHinge_type      m_type;

        /// The angle (in deg) at which the hinge is in
        /// neutral position. This element is normally used to define
        /// precone or prelag angles of the attached blade. Defaults to 0.
        boost::optional<double>      m_neutralPosition;

        /// Static stiffness of the hinge in (N/m) for
        /// linear hinges and (N.m/deg) for angular hinges. Default value:
        /// +inf (statically rigid hinge)
        boost::optional<double>      m_staticStiffness;

        /// Dynamic stiffness of the hinge in (N/m) for
        /// linear hinges and (N.m/deg) for angular hinges. Default value:
        /// +inf (statically rigid hinge)
        boost::optional<double>      m_dynamicStiffness;

        /// Damping of the hinge in (N/(m/s)) for linear
        /// hinges and (N.m/(deg/s)) for angular hinges. Default value: +inf
        boost::optional<double>      m_damping;

    private:
#ifdef HAVE_CPP11
        CPACSRotorHubHinge(const CPACSRotorHubHinge&) = delete;
        CPACSRotorHubHinge& operator=(const CPACSRotorHubHinge&) = delete;

        CPACSRotorHubHinge(CPACSRotorHubHinge&&) = delete;
        CPACSRotorHubHinge& operator=(CPACSRotorHubHinge&&) = delete;
#else
        CPACSRotorHubHinge(const CPACSRotorHubHinge&);
        CPACSRotorHubHinge& operator=(const CPACSRotorHubHinge&);
#endif
    };
} // namespace generated

// CPACSRotorHubHinge is customized, use type CCPACSRotorHinge directly
} // namespace tigl
