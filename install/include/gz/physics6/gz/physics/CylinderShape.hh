/*
 * Copyright (C) 2018 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef GZ_PHYSICS_CYLINDERSHAPE_HH_
#define GZ_PHYSICS_CYLINDERSHAPE_HH_

#include <string>

#include <gz/physics/DeclareShapeType.hh>
#include <gz/physics/Geometry.hh>

namespace gz
{
  namespace physics
  {
    GZ_PHYSICS_DECLARE_SHAPE_TYPE(CylinderShape)

    class GZ_PHYSICS_VISIBLE GetCylinderShapeProperties
        : public virtual FeatureWithRequirements<CylinderShapeCast>
    {
      public: template <typename PolicyT, typename FeaturesT>
      class CylinderShape : public virtual Entity<PolicyT, FeaturesT>
      {
        public: using Scalar = typename PolicyT::Scalar;

        /// \brief Get the radius of this CylinderShape
        /// \return the radius of this CylinderShape
        public: Scalar GetRadius() const;

        /// \brief Get the height (length along the local z-axis) of this
        /// CylinderShape.
        /// \return the height of this CylinderShape
        public: Scalar GetHeight() const;
      };

      public: template <typename PolicyT>
      class Implementation : public virtual Feature::Implementation<PolicyT>
      {
        public: using Scalar = typename PolicyT::Scalar;

        public: virtual Scalar GetCylinderShapeRadius(
            const Identity &_cylinderID) const = 0;

        public: virtual Scalar GetCylinderShapeHeight(
            const Identity &_cylinderID) const = 0;
      };
    };

    /////////////////////////////////////////////////
    /// \brief This feature sets the CylinderShape properties such as
    /// the cylinder radius and height.
    class GZ_PHYSICS_VISIBLE SetCylinderShapeProperties
        : public virtual FeatureWithRequirements<CylinderShapeCast>
    {
      public: template <typename PolicyT, typename FeaturesT>
      class CylinderShape : public virtual Entity<PolicyT, FeaturesT>
      {
        public: using Scalar = typename PolicyT::Scalar;

        /// \brief Set the radius of this CylinderShape
        /// \param[in] _radius
        ///   The desired radius of this CylinderShape
        public: void SetRadius(Scalar _radius);

        /// \brief Set the height of this CylinderShape
        /// \param[in] _height
        ///   The desired height of this CylinderShape
        public: void SetHeight(Scalar _height);
      };

      public: template <typename PolicyT>
      class Implementation : public virtual Feature::Implementation<PolicyT>
      {
        public: using Scalar = typename PolicyT::Scalar;

        public: virtual void SetCylinderShapeRadius(
            const Identity &_cylinderID, Scalar _radius) = 0;

        public: virtual void SetCylinderShapeHeight(
            const Identity &_cylinderID, Scalar _height) = 0;
      };
    };

    /////////////////////////////////////////////////
    /// \brief This feature constructs a new cylinder shape and attaches the
    /// desired pose in the link frame. The pose could be defined to be the
    /// cylinder center point in actual implementation.
    class GZ_PHYSICS_VISIBLE AttachCylinderShapeFeature
        : public virtual FeatureWithRequirements<CylinderShapeCast>
    {
      public: template <typename PolicyT, typename FeaturesT>
      class Link : public virtual Feature::Link<PolicyT, FeaturesT>
      {
        public: using Scalar = typename PolicyT::Scalar;

        public: using PoseType =
            typename FromPolicy<PolicyT>::template Use<Pose>;

        public: using ShapePtrType = CylinderShapePtr<PolicyT, FeaturesT>;

        /// \brief Rigidly attach a CylinderShape to this link.
        /// \param[in] _radius
        ///   The radius of the cylinder.
        /// \param[in] _height
        ///   The height of the cylinder.
        /// \param[in] _pose
        ///   The desired pose of the CylinderShape relative to the Link frame.
        /// \returns a ShapePtrType to the newly constructed CylinderShape
        public: ShapePtrType AttachCylinderShape(
            const std::string &_name = "cylinder",
            Scalar _radius = 1.0,
            Scalar _height = 1.0,
            const PoseType &_pose = PoseType::Identity());
      };

      public: template <typename PolicyT>
      class Implementation : public virtual Feature::Implementation<PolicyT>
      {
        public: using Scalar = typename PolicyT::Scalar;

        public: using PoseType =
            typename FromPolicy<PolicyT>::template Use<Pose>;

        public: virtual Identity AttachCylinderShape(
            const Identity &_linkID,
            const std::string &_name,
            Scalar _radius,
            Scalar _height,
            const PoseType &_pose) = 0;
      };
    };
  }
}

#include <gz/physics/detail/CylinderShape.hh>

#endif
