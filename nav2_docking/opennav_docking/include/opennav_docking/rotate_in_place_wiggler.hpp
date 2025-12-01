#ifndef OPENNAV_DOCKING__ROTATE_IN_PLACE_WIGGLER_HPP_
#define OPENNAV_DOCKING__ROTATE_IN_PLACE_WIGGLER_HPP_

#include <memory>

#include "opennav_docking_core/wiggler.hpp"

namespace opennav_docking
{

class RotateInPlaceWiggler : public opennav_docking_core::Wiggler
{
public:

  RotateInPlaceWiggler()
  : Wiggler()
  {}

  virtual void configure(
    const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
    const std::string & name,
    std::shared_ptr<tf2_ros::Buffer> tf) override;

  virtual void cleanup() override {};

  virtual void activate() override {};

  virtual void deactivate() override {};

  virtual void getWiggleVelocity(geometry_msgs::msg::Twist & wiggle_vel) override;

private:
std::string name_;
rclcpp_lifecycle::LifecycleNode::SharedPtr node_;
std::shared_ptr<tf2_ros::Buffer> tf2_buffer_;
};
}  // namespace opennav_docking

#endif  // OPENNAV_DOCKING__ROTATE_IN_PLACE_WIGGLER_HPP_
