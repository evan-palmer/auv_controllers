// Copyright 2023, Evan Palmer
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include "velocity_controllers/integral_sliding_mode_controller.hpp"

namespace velocity_controllers
{

using controller_interface::CallbackReturn;
using controller_interface::InterfaceConfiguration;

IntegralSlidingModeController::IntegralSlidingModeController()
: controller_interface::ChainableControllerInterface()
{
}

InterfaceConfiguration IntegralSlidingModeController::command_interface_configuration() const {}

InterfaceConfiguration IntegralSlidingModeController::state_interface_configuration() const {}

InterfaceConfiguration IntegralSlidingModeController::state_interface_configuration() const {}

CallbackReturn IntegralSlidingModeController::on_init() {}

CallbackReturn IntegralSlidingModeController::on_configure(
  const rclcpp_lifecycle::State & previous_state)
{
}

CallbackReturn IntegralSlidingModeController::on_activate(
  const rclcpp_lifecycle::State & previous_state)
{
}

CallbackReturn IntegralSlidingModeController::on_deactivate(
  const rclcpp_lifecycle::State & previous_state)
{
}

CallbackReturn IntegralSlidingModeController::on_cleanup(
  const rclcpp_lifecycle::State & previous_state)
{
}

CallbackReturn IntegralSlidingModeController::on_error(
  const rclcpp_lifecycle::State & previous_state)
{
}

CallbackReturn IntegralSlidingModeController::on_shutdown(
  const rclcpp_lifecycle::State & previous_state)
{
}

bool IntegralSlidingModeController::on_set_chained_mode(bool chained_mode) {}

controller_interface::return_type IntegralSlidingModeController::update_and_write_commands(
  const rclcpp::Time & time, const rclcpp::Duration & period)
{
}

}  // namespace velocity_controllers
