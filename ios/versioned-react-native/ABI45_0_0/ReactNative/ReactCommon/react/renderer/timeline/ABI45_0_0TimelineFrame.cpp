/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "ABI45_0_0TimelineFrame.h"

namespace ABI45_0_0facebook {
namespace ABI45_0_0React {

TimelineFrame::TimelineFrame(int index, TelemetryTimePoint timePoint) noexcept
    : index_(index), timePoint_(timePoint) {}

int TimelineFrame::getIndex() const noexcept {
  return index_;
}

TelemetryTimePoint TimelineFrame::getTimePoint() const noexcept {
  return timePoint_;
}

} // namespace ABI45_0_0React
} // namespace ABI45_0_0facebook
