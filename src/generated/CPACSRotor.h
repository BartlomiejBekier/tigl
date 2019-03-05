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
#include <CCPACSRotorHub.h>
#include <CCPACSTransformation.h>
#include <string>
#include <TiglSymmetryAxis.h>
#include <tixi.h>
#include "CPACSRotor_type.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSRotors;

namespace generated
{
    // This class is used in:
    // CPACSRotors

    // generated from /xsd:schema/xsd:complexType[783]
    /// @brief Rotor type, containing a rotor (main rotor, tail rotor,
    /// fenestron, propeller,...) of an rotorcraft model.
    /// 
    /// Rotor type, containing a rotor (e.g. main rotor, tail
    /// rotor, fenestron, propeller,...) definition of a rotorcraft
    /// model.
    /// The position and attitude of the rotor is defined
    /// using the transformation element. The following image shows the
    /// CPACS conventions for the orientation of rotors and rotor axis
    /// systems:
    /// @see rotor_cs01
    /// The origin coincides with the center of rotation. The z-axis corresponds to the axis of rotation
    /// and thus coincides with the rotor shaft centerline. It Points
    /// in the main thrust direction of the rotor (usually upwards for
    /// a main rotor, forwards for a propeller). The x-axis points from nose to tail (usually
    /// rearwards for main and tail rotors, upwards for a propeller). The y-axis completes the right-handed orthogonal
    /// coordinate system. Rotor hub attributes, hinges and references to
    /// attached rotor blades are defined in the rotorHub element.
    /// Note that rotor blade geometries are only referenced and not
    /// defined in the child nodes of the rotor element. Refer to the
    /// documentation of rotorBladesType ( Empty#T/rotorBladesType ) and wingType ( Empty#T/wingType ) for information on the definition of rotor blade geometries.
    /// The following figure shows the transformations to be
    /// applied to rotorBlade geometries to visualize them in the rotor
    /// frames for a given state (each rotor: rotorAzimuth given, each
    /// hinge: hingeDeflection given):
    /// @see rotor_transformation
    /// 
    class CPACSRotor
    {
    public:
        TIGL_EXPORT CPACSRotor(CCPACSRotors* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSRotor();

        TIGL_EXPORT CCPACSRotors* GetParent();

        TIGL_EXPORT const CCPACSRotors* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<TiglSymmetryAxis>& GetSymmetry() const;
        TIGL_EXPORT virtual void SetSymmetry(const boost::optional<TiglSymmetryAxis>& value);

        TIGL_EXPORT virtual const std::string& GetName() const;
        TIGL_EXPORT virtual void SetName(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetParentUID() const;
        TIGL_EXPORT virtual void SetParentUID(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<CPACSRotor_type>& GetType() const;
        TIGL_EXPORT virtual void SetType(const boost::optional<CPACSRotor_type>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetNominalRotationsPerMinute() const;
        TIGL_EXPORT virtual void SetNominalRotationsPerMinute(const boost::optional<double>& value);

        TIGL_EXPORT virtual const CCPACSTransformation& GetTransformation() const;
        TIGL_EXPORT virtual CCPACSTransformation& GetTransformation();

        TIGL_EXPORT virtual const CCPACSRotorHub& GetRotorHub() const;
        TIGL_EXPORT virtual CCPACSRotorHub& GetRotorHub();

    protected:
        CCPACSRotors* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                       m_uID;

        boost::optional<TiglSymmetryAxis> m_symmetry;

        /// Name of the rotor.
        std::string                       m_name;

        /// Description of the rotor.
        boost::optional<std::string>      m_description;

        /// UID of the part to which the rotor is mounted
        /// (if any). The parent of the rotor can e.g. be the fuselage. In
        /// each rotorcraft model, there is exactly one part without a
        /// parent part (The root of the connection hierarchy).
        boost::optional<std::string>      m_parentUID;

        /// Rotor type. Possible values: "mainRotor"
        /// (default), "tailRotor", "fenestron" or "propeller"..
        boost::optional<CPACSRotor_type>  m_type;

        /// Nominal value of the angular rotation speed in
        /// rotations per minute (rpm).
        boost::optional<double>           m_nominalRotationsPerMinute;

        /// Transformation (scaling, rotation,
        /// translation). This element is used to define the position and
        /// attitude of the rotor relative to the global or the parent
        /// component's axis system. Note that an anisotropical scaling
        /// transformation should not be applied to the rotor.
        CCPACSTransformation              m_transformation;

        /// The rotorHub element contains the definition
        /// of the rotor hub type and number and azimuth angles of the
        /// attached blades and their hinges. The rotor hub position and
        /// attitude coincides with the rotor axis system's origin and z
        /// axis.
        CCPACSRotorHub                    m_rotorHub;

    private:
#ifdef HAVE_CPP11
        CPACSRotor(const CPACSRotor&) = delete;
        CPACSRotor& operator=(const CPACSRotor&) = delete;

        CPACSRotor(CPACSRotor&&) = delete;
        CPACSRotor& operator=(CPACSRotor&&) = delete;
#else
        CPACSRotor(const CPACSRotor&);
        CPACSRotor& operator=(const CPACSRotor&);
#endif
    };
} // namespace generated

// CPACSRotor is customized, use type CCPACSRotor directly
} // namespace tigl
