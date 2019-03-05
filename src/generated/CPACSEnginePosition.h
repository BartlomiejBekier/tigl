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
#include <TiglSymmetryAxis.h>
#include <tixi.h>
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSEnginePositions;

namespace generated
{
    // This class is used in:
    // CPACSEnginePositions

    // generated from /xsd:schema/xsd:complexType[314]
    /// @brief enginePositionType
    /// 
    /// EnginePosition type, containing data for a single
    /// engine
    /// 
    class CPACSEnginePosition
    {
    public:
        TIGL_EXPORT CPACSEnginePosition(CCPACSEnginePositions* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSEnginePosition();

        TIGL_EXPORT CCPACSEnginePositions* GetParent();

        TIGL_EXPORT const CCPACSEnginePositions* GetParent() const;

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

        TIGL_EXPORT virtual const std::string& GetEngineUID() const;
        TIGL_EXPORT virtual void SetEngineUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetParentUID() const;
        TIGL_EXPORT virtual void SetParentUID(const std::string& value);

        TIGL_EXPORT virtual const CCPACSTransformation& GetTransformation() const;
        TIGL_EXPORT virtual CCPACSTransformation& GetTransformation();

    protected:
        CCPACSEnginePositions* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                       m_uID;

        boost::optional<TiglSymmetryAxis> m_symmetry;

        /// Name of the engine
        std::string                       m_name;

        /// Description of the engine
        boost::optional<std::string>      m_description;

        /// Reference to the used engine
        std::string                       m_engineUID;

        /// Component, to which the engine is mounted
        std::string                       m_parentUID;

        CCPACSTransformation              m_transformation;

    private:
#ifdef HAVE_CPP11
        CPACSEnginePosition(const CPACSEnginePosition&) = delete;
        CPACSEnginePosition& operator=(const CPACSEnginePosition&) = delete;

        CPACSEnginePosition(CPACSEnginePosition&&) = delete;
        CPACSEnginePosition& operator=(CPACSEnginePosition&&) = delete;
#else
        CPACSEnginePosition(const CPACSEnginePosition&);
        CPACSEnginePosition& operator=(const CPACSEnginePosition&);
#endif
    };
} // namespace generated

// CPACSEnginePosition is customized, use type CCPACSEnginePosition directly
} // namespace tigl
